//
// Copyright 2025 EPFL
// Solderpad Hardware License, Version 2.1, see LICENSE.md for details.
// SPDX-License-Identifier: Apache-2.0 WITH SHL-2.1
//  
// Info: Mailbox re-adapted from https://github.com/AlSaqr-platform/axi_scmi_mailbox.
//
// Copyright (c) 2022 ETH Zurich and University of Bologna
// Copyright and related rights are licensed under the Solderpad Hardware
// License, Version 0.51 (the "License"); you may not use this file except in
// compliance with the License.  You may obtain a copy of the License at
// http://solderpad.org/licenses/SHL-0.51. Unless required by applicable law
// or agreed to in writing, software, hardware and materials distributed under
// this License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
// CONDITIONS OF ANY KIND, either express or implied. See the License for the
// specific language governing permissions and limitations under the License.
//
//

// mailbox module

`include "prim_assert.sv"

module mailbox
  import mailbox_reg_pkg::*;
#(
  parameter logic [NumAlerts-1:0] AlertAsyncOn = {NumAlerts{1'b1}},
  // Number of cycles a differential skew is tolerated on the alert signal
  parameter int unsigned AlertSkewCycles = 1
) (
  input clk_i,      // regular core clock for SW config interface
  input rst_ni,     // power-on hardware reset

  // Register interface
  input  tlul_pkg::tl_h2d_t tl_i,
  output tlul_pkg::tl_d2h_t tl_o,

  // Alerts
  input  prim_alert_pkg::alert_rx_t [NumAlerts-1:0] alert_rx_i,
  output prim_alert_pkg::alert_tx_t [NumAlerts-1:0] alert_tx_o,

  // Interrupt indicates a matching or measurement is done
  output logic intr_doorbell_o,
  output logic intr_completion_o

);

  mailbox_reg2hw_t reg2hw;
  mailbox_hw2reg_t hw2reg;

  // Alerts
  logic [NumAlerts-1:0] alert_test, alerts;
  assign alert_test = {reg2hw.alert_test.q & reg2hw.alert_test.qe};

  for (genvar i = 0; i < NumAlerts; i++) begin : gen_alert_tx
    prim_alert_sender #(
      .AsyncOn(AlertAsyncOn[i]),
      .SkewCycles(AlertSkewCycles),
      .IsFatal(1'b1)
    ) u_prim_alert_sender (
      .clk_i,
      .rst_ni,
      .alert_test_i (alert_test[i]),
      .alert_req_i  (alerts[0]),
      .alert_ack_o  (),
      .alert_state_o(),
      .alert_rx_i   (alert_rx_i[i]),
      .alert_tx_o   (alert_tx_o[i])
    );
  end

  // Register module
  mailbox_reg_top u_reg (
    .clk_i,
    .rst_ni,
    .tl_i(tl_i),
    .tl_o(tl_o),
    .reg2hw(reg2hw),
    .hw2reg(hw2reg),
    // SEC_CM: BUS.INTEGRITY
    .intg_err_o(alerts[0])
  );

   prim_edge_detector #(
      .EnSync(0)
   ) u_doorbell_edge_detector (
     .clk_i,
     .rst_ni,  
     .d_i(reg2hw.doorbell.intr.q),  
     .q_sync_o( ),
     .q_posedge_pulse_o(intr_doorbell_o),
     .q_negedge_pulse_o( )
   );

   prim_edge_detector #(
      .EnSync(0)
   ) u_completion_edge_detector (
     .clk_i,
     .rst_ni,  
     .d_i(reg2hw.completion_interrupt.intr.q),  
     .q_sync_o( ),
     .q_posedge_pulse_o(intr_completion_o),
     .q_negedge_pulse_o( )
   );

  // All outputs should be known value after reset
  `ASSERT_KNOWN(IntrKnown, intr_match_pending_o)
  `ASSERT_KNOWN(TlODValidKnown, tl_o.d_valid)
  `ASSERT_KNOWN(TlOAReadyKnown, tl_o.a_ready)
  `ASSERT_KNOWN(AlertsKnown_A, alert_tx_o)

  // Alert assertions for reg_we onehot check
  `ASSERT_PRIM_REG_WE_ONEHOT_ERROR_TRIGGER_ALERT(RegWeOnehotCheck_A, u_reg, alert_tx_o[0])
endmodule
