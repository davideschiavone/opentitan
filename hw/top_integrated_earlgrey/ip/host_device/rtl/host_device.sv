
module host_device import tlul_pkg::*; (

  input clk_i,
  input rst_ni,

  // Host interfaces
  input  tlul_pkg::tl_h2d_t host_ctrl_tl_req_i,
  output tlul_pkg::tl_d2h_t host_ctrl_tl_rsp_o
);

  localparam int AW = 1;
  localparam int DW = 32;
  localparam int DBW = DW/8;                    // Byte Width

  // register signals
  logic           reg_we;
  logic           reg_re;
  logic [AW-1:0]  reg_addr;
  logic [DW-1:0]  reg_wdata;
  logic [DBW-1:0] reg_be;
  logic [DW-1:0]  reg_rdata;
  logic           reg_error;

  logic          addrmiss;

  logic [DW-1:0] reg_rdata_next;

  logic [DW-1:0] reg0, reg1;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      reg0 <= '0;
      reg1 <= '0;
    end else begin
      if (reg_we && addr_hit[0]) begin
        reg0 <= reg_wdata;
      end
      if (reg_we && addr_hit[1]) begin
        reg1 <= reg_wdata;
      end
    end
  end


  tlul_adapter_reg #(
    .RegAw(AW),
    .RegDw(DW),
    .EnableDataIntgGen(0)
  ) u_reg_if (
    .clk_i,
    .rst_ni,

    .tl_i (host_ctrl_tl_req_i),
    .tl_o (host_ctrl_tl_rsp_o),

    .we_o    (reg_we),
    .re_o    (reg_re),
    .addr_o  (reg_addr),
    .wdata_o (reg_wdata),
    .be_o    (reg_be),
    .rdata_i (reg_rdata),
    .error_i (reg_error)
  );

  assign reg_rdata = reg_rdata_next ;
  assign reg_error = addrmiss;

  // Read data return
  always_comb begin
    reg_rdata_next = '0;
    unique case (1'b1)
      addr_hit[0]: begin
        reg_rdata_next[0] = reg0;
      end

      addr_hit[1]: begin
        reg_rdata_next[0] = reg1;
      end

      default: begin
        reg_rdata_next = '0;
      end
    endcase
  end

  logic [1:0] addr_hit;
  always_comb begin
    addr_hit = '0;
    addr_hit[ 0] = (reg_addr == 0);
    addr_hit[ 1] = (reg_addr == 1);
  end

  assign addrmiss = (reg_re || reg_we) ? ~|addr_hit : 1'b0 ;


endmodule