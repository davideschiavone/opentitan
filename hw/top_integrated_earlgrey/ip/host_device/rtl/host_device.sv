
module host_device import tlul_pkg::*; (

  input clk_i,
  input rst_ni,

  // Host interfaces
  input  tlul_pkg::tl_h2d_t host_ctrl_tl_req_i,
  output tlul_pkg::tl_d2h_t host_ctrl_tl_rsp_o
);

  localparam int AW = 32;
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

  // outgoing integrity generation
  tlul_pkg::tl_d2h_t tl_o_pre;

  // tlul_fifo_async #(
  //   .ReqDepth        (1),
  //   .RspDepth        (1)
  // ) u_asf_35 (
  //   .clk_h_i      (clk_main_i),
  //   .rst_h_ni     (rst_main_ni),
  //   .clk_d_i      (clk_fixed_i),
  //   .rst_d_ni     (rst_fixed_ni),
  //   .tl_h_i       (tl_asf_35_us_h2d),
  //   .tl_h_o       (tl_asf_35_us_d2h),
  //   .tl_d_o       (tl_asf_35_ds_h2d),
  //   .tl_d_i       (tl_asf_35_ds_d2h)
  // );
  tlul_adapter_reg #(
    .RegAw(AW),
    .RegDw(DW),
    .EnableDataIntgGen(0)
  ) u_reg_if (
    .clk_i,
    .rst_ni,

    .tl_i (host_ctrl_tl_req_i),
    .tl_o (tl_o_pre),

    .en_ifetch_i(prim_mubi_pkg::MuBi4False),
    .intg_error_o(),

    .we_o    (reg_we),
    .re_o    (reg_re),
    .addr_o  (reg_addr),
    .wdata_o (reg_wdata),
    .be_o    (reg_be),
    .busy_i  (1'b0),
    .rdata_i (reg_rdata),
    .error_i (reg_error)
  );


  tlul_rsp_intg_gen #(
    .EnableRspIntgGen(1),
    .EnableDataIntgGen(1)
  ) u_rsp_intg_gen (
    .tl_i(tl_o_pre),
    .tl_o(host_ctrl_tl_rsp_o)
  );

  integer fp;

  initial begin
    fp = $fopen("host_device.log", "w");
    if (fp == 0) begin
      $fatal("Failed to open fp");
    end
  end

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      reg_rdata <= '0;
      reg_error <= 1'b0;
    end else begin
      if (reg_re) begin
        // Read operation
        $fwrite(fp, "Read: addr=0x%08x\n", reg_addr);
      end else if (reg_we) begin
        $fwrite(fp, "Write: addr=0x%08x, wdata=0x%08x\n", reg_addr, reg_wdata);
      end
      $fflush(fp); // Flush to ensure data is written
    end
  end

  final begin
    $fclose(fp);
  end


endmodule
