module RegisterFileFF(
  input         clock,
  input         reset,
  input         io_test_en_i, // @[playground/src/RegisterFileFF.scala 7:16]
  input         io_dumm_instr_id_i, // @[playground/src/RegisterFileFF.scala 7:16]
  input  [4:0]  io_raddr_a_i, // @[playground/src/RegisterFileFF.scala 7:16]
  output [31:0] io_rdata_a_o, // @[playground/src/RegisterFileFF.scala 7:16]
  input  [4:0]  io_raddr_b_i, // @[playground/src/RegisterFileFF.scala 7:16]
  output [31:0] io_rdata_b_o, // @[playground/src/RegisterFileFF.scala 7:16]
  input  [31:0] io_wdata_a_i, // @[playground/src/RegisterFileFF.scala 7:16]
  input  [4:0]  io_waddr_a_i, // @[playground/src/RegisterFileFF.scala 7:16]
  input         io_we_a_i // @[playground/src/RegisterFileFF.scala 7:16]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_17;
  reg [31:0] _RAND_18;
  reg [31:0] _RAND_19;
  reg [31:0] _RAND_20;
  reg [31:0] _RAND_21;
  reg [31:0] _RAND_22;
  reg [31:0] _RAND_23;
  reg [31:0] _RAND_24;
  reg [31:0] _RAND_25;
  reg [31:0] _RAND_26;
  reg [31:0] _RAND_27;
  reg [31:0] _RAND_28;
  reg [31:0] _RAND_29;
  reg [31:0] _RAND_30;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] rf_reg_1; // @[playground/src/RegisterFileFF.scala 24:25]
  reg [31:0] rf_reg_2; // @[playground/src/RegisterFileFF.scala 24:25]
  reg [31:0] rf_reg_3; // @[playground/src/RegisterFileFF.scala 24:25]
  reg [31:0] rf_reg_4; // @[playground/src/RegisterFileFF.scala 24:25]
  reg [31:0] rf_reg_5; // @[playground/src/RegisterFileFF.scala 24:25]
  reg [31:0] rf_reg_6; // @[playground/src/RegisterFileFF.scala 24:25]
  reg [31:0] rf_reg_7; // @[playground/src/RegisterFileFF.scala 24:25]
  reg [31:0] rf_reg_8; // @[playground/src/RegisterFileFF.scala 24:25]
  reg [31:0] rf_reg_9; // @[playground/src/RegisterFileFF.scala 24:25]
  reg [31:0] rf_reg_10; // @[playground/src/RegisterFileFF.scala 24:25]
  reg [31:0] rf_reg_11; // @[playground/src/RegisterFileFF.scala 24:25]
  reg [31:0] rf_reg_12; // @[playground/src/RegisterFileFF.scala 24:25]
  reg [31:0] rf_reg_13; // @[playground/src/RegisterFileFF.scala 24:25]
  reg [31:0] rf_reg_14; // @[playground/src/RegisterFileFF.scala 24:25]
  reg [31:0] rf_reg_15; // @[playground/src/RegisterFileFF.scala 24:25]
  reg [31:0] rf_reg_16; // @[playground/src/RegisterFileFF.scala 24:25]
  reg [31:0] rf_reg_17; // @[playground/src/RegisterFileFF.scala 24:25]
  reg [31:0] rf_reg_18; // @[playground/src/RegisterFileFF.scala 24:25]
  reg [31:0] rf_reg_19; // @[playground/src/RegisterFileFF.scala 24:25]
  reg [31:0] rf_reg_20; // @[playground/src/RegisterFileFF.scala 24:25]
  reg [31:0] rf_reg_21; // @[playground/src/RegisterFileFF.scala 24:25]
  reg [31:0] rf_reg_22; // @[playground/src/RegisterFileFF.scala 24:25]
  reg [31:0] rf_reg_23; // @[playground/src/RegisterFileFF.scala 24:25]
  reg [31:0] rf_reg_24; // @[playground/src/RegisterFileFF.scala 24:25]
  reg [31:0] rf_reg_25; // @[playground/src/RegisterFileFF.scala 24:25]
  reg [31:0] rf_reg_26; // @[playground/src/RegisterFileFF.scala 24:25]
  reg [31:0] rf_reg_27; // @[playground/src/RegisterFileFF.scala 24:25]
  reg [31:0] rf_reg_28; // @[playground/src/RegisterFileFF.scala 24:25]
  reg [31:0] rf_reg_29; // @[playground/src/RegisterFileFF.scala 24:25]
  reg [31:0] rf_reg_30; // @[playground/src/RegisterFileFF.scala 24:25]
  reg [31:0] rf_reg_31; // @[playground/src/RegisterFileFF.scala 24:25]
  wire  we_a_dec_1 = io_waddr_a_i == 5'h1 & io_we_a_i; // @[playground/src/RegisterFileFF.scala 28:46]
  wire  we_a_dec_2 = io_waddr_a_i == 5'h2 & io_we_a_i; // @[playground/src/RegisterFileFF.scala 28:46]
  wire  we_a_dec_3 = io_waddr_a_i == 5'h3 & io_we_a_i; // @[playground/src/RegisterFileFF.scala 28:46]
  wire  we_a_dec_4 = io_waddr_a_i == 5'h4 & io_we_a_i; // @[playground/src/RegisterFileFF.scala 28:46]
  wire  we_a_dec_5 = io_waddr_a_i == 5'h5 & io_we_a_i; // @[playground/src/RegisterFileFF.scala 28:46]
  wire  we_a_dec_6 = io_waddr_a_i == 5'h6 & io_we_a_i; // @[playground/src/RegisterFileFF.scala 28:46]
  wire  we_a_dec_7 = io_waddr_a_i == 5'h7 & io_we_a_i; // @[playground/src/RegisterFileFF.scala 28:46]
  wire  we_a_dec_8 = io_waddr_a_i == 5'h8 & io_we_a_i; // @[playground/src/RegisterFileFF.scala 28:46]
  wire  we_a_dec_9 = io_waddr_a_i == 5'h9 & io_we_a_i; // @[playground/src/RegisterFileFF.scala 28:46]
  wire  we_a_dec_10 = io_waddr_a_i == 5'ha & io_we_a_i; // @[playground/src/RegisterFileFF.scala 28:46]
  wire  we_a_dec_11 = io_waddr_a_i == 5'hb & io_we_a_i; // @[playground/src/RegisterFileFF.scala 28:46]
  wire  we_a_dec_12 = io_waddr_a_i == 5'hc & io_we_a_i; // @[playground/src/RegisterFileFF.scala 28:46]
  wire  we_a_dec_13 = io_waddr_a_i == 5'hd & io_we_a_i; // @[playground/src/RegisterFileFF.scala 28:46]
  wire  we_a_dec_14 = io_waddr_a_i == 5'he & io_we_a_i; // @[playground/src/RegisterFileFF.scala 28:46]
  wire  we_a_dec_15 = io_waddr_a_i == 5'hf & io_we_a_i; // @[playground/src/RegisterFileFF.scala 28:46]
  wire  we_a_dec_16 = io_waddr_a_i == 5'h10 & io_we_a_i; // @[playground/src/RegisterFileFF.scala 28:46]
  wire  we_a_dec_17 = io_waddr_a_i == 5'h11 & io_we_a_i; // @[playground/src/RegisterFileFF.scala 28:46]
  wire  we_a_dec_18 = io_waddr_a_i == 5'h12 & io_we_a_i; // @[playground/src/RegisterFileFF.scala 28:46]
  wire  we_a_dec_19 = io_waddr_a_i == 5'h13 & io_we_a_i; // @[playground/src/RegisterFileFF.scala 28:46]
  wire  we_a_dec_20 = io_waddr_a_i == 5'h14 & io_we_a_i; // @[playground/src/RegisterFileFF.scala 28:46]
  wire  we_a_dec_21 = io_waddr_a_i == 5'h15 & io_we_a_i; // @[playground/src/RegisterFileFF.scala 28:46]
  wire  we_a_dec_22 = io_waddr_a_i == 5'h16 & io_we_a_i; // @[playground/src/RegisterFileFF.scala 28:46]
  wire  we_a_dec_23 = io_waddr_a_i == 5'h17 & io_we_a_i; // @[playground/src/RegisterFileFF.scala 28:46]
  wire  we_a_dec_24 = io_waddr_a_i == 5'h18 & io_we_a_i; // @[playground/src/RegisterFileFF.scala 28:46]
  wire  we_a_dec_25 = io_waddr_a_i == 5'h19 & io_we_a_i; // @[playground/src/RegisterFileFF.scala 28:46]
  wire  we_a_dec_26 = io_waddr_a_i == 5'h1a & io_we_a_i; // @[playground/src/RegisterFileFF.scala 28:46]
  wire  we_a_dec_27 = io_waddr_a_i == 5'h1b & io_we_a_i; // @[playground/src/RegisterFileFF.scala 28:46]
  wire  we_a_dec_28 = io_waddr_a_i == 5'h1c & io_we_a_i; // @[playground/src/RegisterFileFF.scala 28:46]
  wire  we_a_dec_29 = io_waddr_a_i == 5'h1d & io_we_a_i; // @[playground/src/RegisterFileFF.scala 28:46]
  wire  we_a_dec_30 = io_waddr_a_i == 5'h1e & io_we_a_i; // @[playground/src/RegisterFileFF.scala 28:46]
  wire  we_a_dec_31 = io_waddr_a_i == 5'h1f & io_we_a_i; // @[playground/src/RegisterFileFF.scala 28:46]
  wire [31:0] _GEN_2 = 5'h1 == io_raddr_a_i ? rf_reg_1 : 32'h0; // @[playground/src/RegisterFileFF.scala 40:{18,18}]
  wire [31:0] _GEN_3 = 5'h2 == io_raddr_a_i ? rf_reg_2 : _GEN_2; // @[playground/src/RegisterFileFF.scala 40:{18,18}]
  wire [31:0] _GEN_4 = 5'h3 == io_raddr_a_i ? rf_reg_3 : _GEN_3; // @[playground/src/RegisterFileFF.scala 40:{18,18}]
  wire [31:0] _GEN_5 = 5'h4 == io_raddr_a_i ? rf_reg_4 : _GEN_4; // @[playground/src/RegisterFileFF.scala 40:{18,18}]
  wire [31:0] _GEN_6 = 5'h5 == io_raddr_a_i ? rf_reg_5 : _GEN_5; // @[playground/src/RegisterFileFF.scala 40:{18,18}]
  wire [31:0] _GEN_7 = 5'h6 == io_raddr_a_i ? rf_reg_6 : _GEN_6; // @[playground/src/RegisterFileFF.scala 40:{18,18}]
  wire [31:0] _GEN_8 = 5'h7 == io_raddr_a_i ? rf_reg_7 : _GEN_7; // @[playground/src/RegisterFileFF.scala 40:{18,18}]
  wire [31:0] _GEN_9 = 5'h8 == io_raddr_a_i ? rf_reg_8 : _GEN_8; // @[playground/src/RegisterFileFF.scala 40:{18,18}]
  wire [31:0] _GEN_10 = 5'h9 == io_raddr_a_i ? rf_reg_9 : _GEN_9; // @[playground/src/RegisterFileFF.scala 40:{18,18}]
  wire [31:0] _GEN_11 = 5'ha == io_raddr_a_i ? rf_reg_10 : _GEN_10; // @[playground/src/RegisterFileFF.scala 40:{18,18}]
  wire [31:0] _GEN_12 = 5'hb == io_raddr_a_i ? rf_reg_11 : _GEN_11; // @[playground/src/RegisterFileFF.scala 40:{18,18}]
  wire [31:0] _GEN_13 = 5'hc == io_raddr_a_i ? rf_reg_12 : _GEN_12; // @[playground/src/RegisterFileFF.scala 40:{18,18}]
  wire [31:0] _GEN_14 = 5'hd == io_raddr_a_i ? rf_reg_13 : _GEN_13; // @[playground/src/RegisterFileFF.scala 40:{18,18}]
  wire [31:0] _GEN_15 = 5'he == io_raddr_a_i ? rf_reg_14 : _GEN_14; // @[playground/src/RegisterFileFF.scala 40:{18,18}]
  wire [31:0] _GEN_16 = 5'hf == io_raddr_a_i ? rf_reg_15 : _GEN_15; // @[playground/src/RegisterFileFF.scala 40:{18,18}]
  wire [31:0] _GEN_17 = 5'h10 == io_raddr_a_i ? rf_reg_16 : _GEN_16; // @[playground/src/RegisterFileFF.scala 40:{18,18}]
  wire [31:0] _GEN_18 = 5'h11 == io_raddr_a_i ? rf_reg_17 : _GEN_17; // @[playground/src/RegisterFileFF.scala 40:{18,18}]
  wire [31:0] _GEN_19 = 5'h12 == io_raddr_a_i ? rf_reg_18 : _GEN_18; // @[playground/src/RegisterFileFF.scala 40:{18,18}]
  wire [31:0] _GEN_20 = 5'h13 == io_raddr_a_i ? rf_reg_19 : _GEN_19; // @[playground/src/RegisterFileFF.scala 40:{18,18}]
  wire [31:0] _GEN_21 = 5'h14 == io_raddr_a_i ? rf_reg_20 : _GEN_20; // @[playground/src/RegisterFileFF.scala 40:{18,18}]
  wire [31:0] _GEN_22 = 5'h15 == io_raddr_a_i ? rf_reg_21 : _GEN_21; // @[playground/src/RegisterFileFF.scala 40:{18,18}]
  wire [31:0] _GEN_23 = 5'h16 == io_raddr_a_i ? rf_reg_22 : _GEN_22; // @[playground/src/RegisterFileFF.scala 40:{18,18}]
  wire [31:0] _GEN_24 = 5'h17 == io_raddr_a_i ? rf_reg_23 : _GEN_23; // @[playground/src/RegisterFileFF.scala 40:{18,18}]
  wire [31:0] _GEN_25 = 5'h18 == io_raddr_a_i ? rf_reg_24 : _GEN_24; // @[playground/src/RegisterFileFF.scala 40:{18,18}]
  wire [31:0] _GEN_26 = 5'h19 == io_raddr_a_i ? rf_reg_25 : _GEN_25; // @[playground/src/RegisterFileFF.scala 40:{18,18}]
  wire [31:0] _GEN_27 = 5'h1a == io_raddr_a_i ? rf_reg_26 : _GEN_26; // @[playground/src/RegisterFileFF.scala 40:{18,18}]
  wire [31:0] _GEN_28 = 5'h1b == io_raddr_a_i ? rf_reg_27 : _GEN_27; // @[playground/src/RegisterFileFF.scala 40:{18,18}]
  wire [31:0] _GEN_29 = 5'h1c == io_raddr_a_i ? rf_reg_28 : _GEN_28; // @[playground/src/RegisterFileFF.scala 40:{18,18}]
  wire [31:0] _GEN_30 = 5'h1d == io_raddr_a_i ? rf_reg_29 : _GEN_29; // @[playground/src/RegisterFileFF.scala 40:{18,18}]
  wire [31:0] _GEN_31 = 5'h1e == io_raddr_a_i ? rf_reg_30 : _GEN_30; // @[playground/src/RegisterFileFF.scala 40:{18,18}]
  wire [31:0] _GEN_34 = 5'h1 == io_raddr_b_i ? rf_reg_1 : 32'h0; // @[playground/src/RegisterFileFF.scala 41:{18,18}]
  wire [31:0] _GEN_35 = 5'h2 == io_raddr_b_i ? rf_reg_2 : _GEN_34; // @[playground/src/RegisterFileFF.scala 41:{18,18}]
  wire [31:0] _GEN_36 = 5'h3 == io_raddr_b_i ? rf_reg_3 : _GEN_35; // @[playground/src/RegisterFileFF.scala 41:{18,18}]
  wire [31:0] _GEN_37 = 5'h4 == io_raddr_b_i ? rf_reg_4 : _GEN_36; // @[playground/src/RegisterFileFF.scala 41:{18,18}]
  wire [31:0] _GEN_38 = 5'h5 == io_raddr_b_i ? rf_reg_5 : _GEN_37; // @[playground/src/RegisterFileFF.scala 41:{18,18}]
  wire [31:0] _GEN_39 = 5'h6 == io_raddr_b_i ? rf_reg_6 : _GEN_38; // @[playground/src/RegisterFileFF.scala 41:{18,18}]
  wire [31:0] _GEN_40 = 5'h7 == io_raddr_b_i ? rf_reg_7 : _GEN_39; // @[playground/src/RegisterFileFF.scala 41:{18,18}]
  wire [31:0] _GEN_41 = 5'h8 == io_raddr_b_i ? rf_reg_8 : _GEN_40; // @[playground/src/RegisterFileFF.scala 41:{18,18}]
  wire [31:0] _GEN_42 = 5'h9 == io_raddr_b_i ? rf_reg_9 : _GEN_41; // @[playground/src/RegisterFileFF.scala 41:{18,18}]
  wire [31:0] _GEN_43 = 5'ha == io_raddr_b_i ? rf_reg_10 : _GEN_42; // @[playground/src/RegisterFileFF.scala 41:{18,18}]
  wire [31:0] _GEN_44 = 5'hb == io_raddr_b_i ? rf_reg_11 : _GEN_43; // @[playground/src/RegisterFileFF.scala 41:{18,18}]
  wire [31:0] _GEN_45 = 5'hc == io_raddr_b_i ? rf_reg_12 : _GEN_44; // @[playground/src/RegisterFileFF.scala 41:{18,18}]
  wire [31:0] _GEN_46 = 5'hd == io_raddr_b_i ? rf_reg_13 : _GEN_45; // @[playground/src/RegisterFileFF.scala 41:{18,18}]
  wire [31:0] _GEN_47 = 5'he == io_raddr_b_i ? rf_reg_14 : _GEN_46; // @[playground/src/RegisterFileFF.scala 41:{18,18}]
  wire [31:0] _GEN_48 = 5'hf == io_raddr_b_i ? rf_reg_15 : _GEN_47; // @[playground/src/RegisterFileFF.scala 41:{18,18}]
  wire [31:0] _GEN_49 = 5'h10 == io_raddr_b_i ? rf_reg_16 : _GEN_48; // @[playground/src/RegisterFileFF.scala 41:{18,18}]
  wire [31:0] _GEN_50 = 5'h11 == io_raddr_b_i ? rf_reg_17 : _GEN_49; // @[playground/src/RegisterFileFF.scala 41:{18,18}]
  wire [31:0] _GEN_51 = 5'h12 == io_raddr_b_i ? rf_reg_18 : _GEN_50; // @[playground/src/RegisterFileFF.scala 41:{18,18}]
  wire [31:0] _GEN_52 = 5'h13 == io_raddr_b_i ? rf_reg_19 : _GEN_51; // @[playground/src/RegisterFileFF.scala 41:{18,18}]
  wire [31:0] _GEN_53 = 5'h14 == io_raddr_b_i ? rf_reg_20 : _GEN_52; // @[playground/src/RegisterFileFF.scala 41:{18,18}]
  wire [31:0] _GEN_54 = 5'h15 == io_raddr_b_i ? rf_reg_21 : _GEN_53; // @[playground/src/RegisterFileFF.scala 41:{18,18}]
  wire [31:0] _GEN_55 = 5'h16 == io_raddr_b_i ? rf_reg_22 : _GEN_54; // @[playground/src/RegisterFileFF.scala 41:{18,18}]
  wire [31:0] _GEN_56 = 5'h17 == io_raddr_b_i ? rf_reg_23 : _GEN_55; // @[playground/src/RegisterFileFF.scala 41:{18,18}]
  wire [31:0] _GEN_57 = 5'h18 == io_raddr_b_i ? rf_reg_24 : _GEN_56; // @[playground/src/RegisterFileFF.scala 41:{18,18}]
  wire [31:0] _GEN_58 = 5'h19 == io_raddr_b_i ? rf_reg_25 : _GEN_57; // @[playground/src/RegisterFileFF.scala 41:{18,18}]
  wire [31:0] _GEN_59 = 5'h1a == io_raddr_b_i ? rf_reg_26 : _GEN_58; // @[playground/src/RegisterFileFF.scala 41:{18,18}]
  wire [31:0] _GEN_60 = 5'h1b == io_raddr_b_i ? rf_reg_27 : _GEN_59; // @[playground/src/RegisterFileFF.scala 41:{18,18}]
  wire [31:0] _GEN_61 = 5'h1c == io_raddr_b_i ? rf_reg_28 : _GEN_60; // @[playground/src/RegisterFileFF.scala 41:{18,18}]
  wire [31:0] _GEN_62 = 5'h1d == io_raddr_b_i ? rf_reg_29 : _GEN_61; // @[playground/src/RegisterFileFF.scala 41:{18,18}]
  wire [31:0] _GEN_63 = 5'h1e == io_raddr_b_i ? rf_reg_30 : _GEN_62; // @[playground/src/RegisterFileFF.scala 41:{18,18}]
  assign io_rdata_a_o = 5'h1f == io_raddr_a_i ? rf_reg_31 : _GEN_31; // @[playground/src/RegisterFileFF.scala 40:{18,18}]
  assign io_rdata_b_o = 5'h1f == io_raddr_b_i ? rf_reg_31 : _GEN_63; // @[playground/src/RegisterFileFF.scala 41:{18,18}]
  always @(posedge clock) begin
    if (reset) begin // @[playground/src/RegisterFileFF.scala 24:25]
      rf_reg_1 <= 32'h0; // @[playground/src/RegisterFileFF.scala 24:25]
    end else if (we_a_dec_1) begin // @[playground/src/RegisterFileFF.scala 31:25]
      rf_reg_1 <= io_wdata_a_i;
    end
    if (reset) begin // @[playground/src/RegisterFileFF.scala 24:25]
      rf_reg_2 <= 32'h0; // @[playground/src/RegisterFileFF.scala 24:25]
    end else if (we_a_dec_2) begin // @[playground/src/RegisterFileFF.scala 31:25]
      rf_reg_2 <= io_wdata_a_i;
    end
    if (reset) begin // @[playground/src/RegisterFileFF.scala 24:25]
      rf_reg_3 <= 32'h0; // @[playground/src/RegisterFileFF.scala 24:25]
    end else if (we_a_dec_3) begin // @[playground/src/RegisterFileFF.scala 31:25]
      rf_reg_3 <= io_wdata_a_i;
    end
    if (reset) begin // @[playground/src/RegisterFileFF.scala 24:25]
      rf_reg_4 <= 32'h0; // @[playground/src/RegisterFileFF.scala 24:25]
    end else if (we_a_dec_4) begin // @[playground/src/RegisterFileFF.scala 31:25]
      rf_reg_4 <= io_wdata_a_i;
    end
    if (reset) begin // @[playground/src/RegisterFileFF.scala 24:25]
      rf_reg_5 <= 32'h0; // @[playground/src/RegisterFileFF.scala 24:25]
    end else if (we_a_dec_5) begin // @[playground/src/RegisterFileFF.scala 31:25]
      rf_reg_5 <= io_wdata_a_i;
    end
    if (reset) begin // @[playground/src/RegisterFileFF.scala 24:25]
      rf_reg_6 <= 32'h0; // @[playground/src/RegisterFileFF.scala 24:25]
    end else if (we_a_dec_6) begin // @[playground/src/RegisterFileFF.scala 31:25]
      rf_reg_6 <= io_wdata_a_i;
    end
    if (reset) begin // @[playground/src/RegisterFileFF.scala 24:25]
      rf_reg_7 <= 32'h0; // @[playground/src/RegisterFileFF.scala 24:25]
    end else if (we_a_dec_7) begin // @[playground/src/RegisterFileFF.scala 31:25]
      rf_reg_7 <= io_wdata_a_i;
    end
    if (reset) begin // @[playground/src/RegisterFileFF.scala 24:25]
      rf_reg_8 <= 32'h0; // @[playground/src/RegisterFileFF.scala 24:25]
    end else if (we_a_dec_8) begin // @[playground/src/RegisterFileFF.scala 31:25]
      rf_reg_8 <= io_wdata_a_i;
    end
    if (reset) begin // @[playground/src/RegisterFileFF.scala 24:25]
      rf_reg_9 <= 32'h0; // @[playground/src/RegisterFileFF.scala 24:25]
    end else if (we_a_dec_9) begin // @[playground/src/RegisterFileFF.scala 31:25]
      rf_reg_9 <= io_wdata_a_i;
    end
    if (reset) begin // @[playground/src/RegisterFileFF.scala 24:25]
      rf_reg_10 <= 32'h0; // @[playground/src/RegisterFileFF.scala 24:25]
    end else if (we_a_dec_10) begin // @[playground/src/RegisterFileFF.scala 31:25]
      rf_reg_10 <= io_wdata_a_i;
    end
    if (reset) begin // @[playground/src/RegisterFileFF.scala 24:25]
      rf_reg_11 <= 32'h0; // @[playground/src/RegisterFileFF.scala 24:25]
    end else if (we_a_dec_11) begin // @[playground/src/RegisterFileFF.scala 31:25]
      rf_reg_11 <= io_wdata_a_i;
    end
    if (reset) begin // @[playground/src/RegisterFileFF.scala 24:25]
      rf_reg_12 <= 32'h0; // @[playground/src/RegisterFileFF.scala 24:25]
    end else if (we_a_dec_12) begin // @[playground/src/RegisterFileFF.scala 31:25]
      rf_reg_12 <= io_wdata_a_i;
    end
    if (reset) begin // @[playground/src/RegisterFileFF.scala 24:25]
      rf_reg_13 <= 32'h0; // @[playground/src/RegisterFileFF.scala 24:25]
    end else if (we_a_dec_13) begin // @[playground/src/RegisterFileFF.scala 31:25]
      rf_reg_13 <= io_wdata_a_i;
    end
    if (reset) begin // @[playground/src/RegisterFileFF.scala 24:25]
      rf_reg_14 <= 32'h0; // @[playground/src/RegisterFileFF.scala 24:25]
    end else if (we_a_dec_14) begin // @[playground/src/RegisterFileFF.scala 31:25]
      rf_reg_14 <= io_wdata_a_i;
    end
    if (reset) begin // @[playground/src/RegisterFileFF.scala 24:25]
      rf_reg_15 <= 32'h0; // @[playground/src/RegisterFileFF.scala 24:25]
    end else if (we_a_dec_15) begin // @[playground/src/RegisterFileFF.scala 31:25]
      rf_reg_15 <= io_wdata_a_i;
    end
    if (reset) begin // @[playground/src/RegisterFileFF.scala 24:25]
      rf_reg_16 <= 32'h0; // @[playground/src/RegisterFileFF.scala 24:25]
    end else if (we_a_dec_16) begin // @[playground/src/RegisterFileFF.scala 31:25]
      rf_reg_16 <= io_wdata_a_i;
    end
    if (reset) begin // @[playground/src/RegisterFileFF.scala 24:25]
      rf_reg_17 <= 32'h0; // @[playground/src/RegisterFileFF.scala 24:25]
    end else if (we_a_dec_17) begin // @[playground/src/RegisterFileFF.scala 31:25]
      rf_reg_17 <= io_wdata_a_i;
    end
    if (reset) begin // @[playground/src/RegisterFileFF.scala 24:25]
      rf_reg_18 <= 32'h0; // @[playground/src/RegisterFileFF.scala 24:25]
    end else if (we_a_dec_18) begin // @[playground/src/RegisterFileFF.scala 31:25]
      rf_reg_18 <= io_wdata_a_i;
    end
    if (reset) begin // @[playground/src/RegisterFileFF.scala 24:25]
      rf_reg_19 <= 32'h0; // @[playground/src/RegisterFileFF.scala 24:25]
    end else if (we_a_dec_19) begin // @[playground/src/RegisterFileFF.scala 31:25]
      rf_reg_19 <= io_wdata_a_i;
    end
    if (reset) begin // @[playground/src/RegisterFileFF.scala 24:25]
      rf_reg_20 <= 32'h0; // @[playground/src/RegisterFileFF.scala 24:25]
    end else if (we_a_dec_20) begin // @[playground/src/RegisterFileFF.scala 31:25]
      rf_reg_20 <= io_wdata_a_i;
    end
    if (reset) begin // @[playground/src/RegisterFileFF.scala 24:25]
      rf_reg_21 <= 32'h0; // @[playground/src/RegisterFileFF.scala 24:25]
    end else if (we_a_dec_21) begin // @[playground/src/RegisterFileFF.scala 31:25]
      rf_reg_21 <= io_wdata_a_i;
    end
    if (reset) begin // @[playground/src/RegisterFileFF.scala 24:25]
      rf_reg_22 <= 32'h0; // @[playground/src/RegisterFileFF.scala 24:25]
    end else if (we_a_dec_22) begin // @[playground/src/RegisterFileFF.scala 31:25]
      rf_reg_22 <= io_wdata_a_i;
    end
    if (reset) begin // @[playground/src/RegisterFileFF.scala 24:25]
      rf_reg_23 <= 32'h0; // @[playground/src/RegisterFileFF.scala 24:25]
    end else if (we_a_dec_23) begin // @[playground/src/RegisterFileFF.scala 31:25]
      rf_reg_23 <= io_wdata_a_i;
    end
    if (reset) begin // @[playground/src/RegisterFileFF.scala 24:25]
      rf_reg_24 <= 32'h0; // @[playground/src/RegisterFileFF.scala 24:25]
    end else if (we_a_dec_24) begin // @[playground/src/RegisterFileFF.scala 31:25]
      rf_reg_24 <= io_wdata_a_i;
    end
    if (reset) begin // @[playground/src/RegisterFileFF.scala 24:25]
      rf_reg_25 <= 32'h0; // @[playground/src/RegisterFileFF.scala 24:25]
    end else if (we_a_dec_25) begin // @[playground/src/RegisterFileFF.scala 31:25]
      rf_reg_25 <= io_wdata_a_i;
    end
    if (reset) begin // @[playground/src/RegisterFileFF.scala 24:25]
      rf_reg_26 <= 32'h0; // @[playground/src/RegisterFileFF.scala 24:25]
    end else if (we_a_dec_26) begin // @[playground/src/RegisterFileFF.scala 31:25]
      rf_reg_26 <= io_wdata_a_i;
    end
    if (reset) begin // @[playground/src/RegisterFileFF.scala 24:25]
      rf_reg_27 <= 32'h0; // @[playground/src/RegisterFileFF.scala 24:25]
    end else if (we_a_dec_27) begin // @[playground/src/RegisterFileFF.scala 31:25]
      rf_reg_27 <= io_wdata_a_i;
    end
    if (reset) begin // @[playground/src/RegisterFileFF.scala 24:25]
      rf_reg_28 <= 32'h0; // @[playground/src/RegisterFileFF.scala 24:25]
    end else if (we_a_dec_28) begin // @[playground/src/RegisterFileFF.scala 31:25]
      rf_reg_28 <= io_wdata_a_i;
    end
    if (reset) begin // @[playground/src/RegisterFileFF.scala 24:25]
      rf_reg_29 <= 32'h0; // @[playground/src/RegisterFileFF.scala 24:25]
    end else if (we_a_dec_29) begin // @[playground/src/RegisterFileFF.scala 31:25]
      rf_reg_29 <= io_wdata_a_i;
    end
    if (reset) begin // @[playground/src/RegisterFileFF.scala 24:25]
      rf_reg_30 <= 32'h0; // @[playground/src/RegisterFileFF.scala 24:25]
    end else if (we_a_dec_30) begin // @[playground/src/RegisterFileFF.scala 31:25]
      rf_reg_30 <= io_wdata_a_i;
    end
    if (reset) begin // @[playground/src/RegisterFileFF.scala 24:25]
      rf_reg_31 <= 32'h0; // @[playground/src/RegisterFileFF.scala 24:25]
    end else if (we_a_dec_31) begin // @[playground/src/RegisterFileFF.scala 31:25]
      rf_reg_31 <= io_wdata_a_i;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  rf_reg_1 = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  rf_reg_2 = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  rf_reg_3 = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  rf_reg_4 = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  rf_reg_5 = _RAND_4[31:0];
  _RAND_5 = {1{`RANDOM}};
  rf_reg_6 = _RAND_5[31:0];
  _RAND_6 = {1{`RANDOM}};
  rf_reg_7 = _RAND_6[31:0];
  _RAND_7 = {1{`RANDOM}};
  rf_reg_8 = _RAND_7[31:0];
  _RAND_8 = {1{`RANDOM}};
  rf_reg_9 = _RAND_8[31:0];
  _RAND_9 = {1{`RANDOM}};
  rf_reg_10 = _RAND_9[31:0];
  _RAND_10 = {1{`RANDOM}};
  rf_reg_11 = _RAND_10[31:0];
  _RAND_11 = {1{`RANDOM}};
  rf_reg_12 = _RAND_11[31:0];
  _RAND_12 = {1{`RANDOM}};
  rf_reg_13 = _RAND_12[31:0];
  _RAND_13 = {1{`RANDOM}};
  rf_reg_14 = _RAND_13[31:0];
  _RAND_14 = {1{`RANDOM}};
  rf_reg_15 = _RAND_14[31:0];
  _RAND_15 = {1{`RANDOM}};
  rf_reg_16 = _RAND_15[31:0];
  _RAND_16 = {1{`RANDOM}};
  rf_reg_17 = _RAND_16[31:0];
  _RAND_17 = {1{`RANDOM}};
  rf_reg_18 = _RAND_17[31:0];
  _RAND_18 = {1{`RANDOM}};
  rf_reg_19 = _RAND_18[31:0];
  _RAND_19 = {1{`RANDOM}};
  rf_reg_20 = _RAND_19[31:0];
  _RAND_20 = {1{`RANDOM}};
  rf_reg_21 = _RAND_20[31:0];
  _RAND_21 = {1{`RANDOM}};
  rf_reg_22 = _RAND_21[31:0];
  _RAND_22 = {1{`RANDOM}};
  rf_reg_23 = _RAND_22[31:0];
  _RAND_23 = {1{`RANDOM}};
  rf_reg_24 = _RAND_23[31:0];
  _RAND_24 = {1{`RANDOM}};
  rf_reg_25 = _RAND_24[31:0];
  _RAND_25 = {1{`RANDOM}};
  rf_reg_26 = _RAND_25[31:0];
  _RAND_26 = {1{`RANDOM}};
  rf_reg_27 = _RAND_26[31:0];
  _RAND_27 = {1{`RANDOM}};
  rf_reg_28 = _RAND_27[31:0];
  _RAND_28 = {1{`RANDOM}};
  rf_reg_29 = _RAND_28[31:0];
  _RAND_29 = {1{`RANDOM}};
  rf_reg_30 = _RAND_29[31:0];
  _RAND_30 = {1{`RANDOM}};
  rf_reg_31 = _RAND_30[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
