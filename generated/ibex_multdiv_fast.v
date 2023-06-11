module ibex_multdiv_fast(
  input         clk_i,
  input         rst_ni,
  input         mult_en_i, // @[playground/src/ibex_multdiv_fast.scala 6:14]
  input         div_en_i, // @[playground/src/ibex_multdiv_fast.scala 6:14]
  input         mult_sel_i, // @[playground/src/ibex_multdiv_fast.scala 6:14]
  input         div_sel_i, // @[playground/src/ibex_multdiv_fast.scala 6:14]
  input  [1:0]  operator_i, // @[playground/src/ibex_multdiv_fast.scala 6:14]
  input  [1:0]  signed_mode_i, // @[playground/src/ibex_multdiv_fast.scala 6:14]
  input  [31:0] op_a_i, // @[playground/src/ibex_multdiv_fast.scala 6:14]
  input  [31:0] op_b_i, // @[playground/src/ibex_multdiv_fast.scala 6:14]
  input  [33:0] alu_adder_ext_i, // @[playground/src/ibex_multdiv_fast.scala 6:14]
  input  [31:0] alu_adder_i, // @[playground/src/ibex_multdiv_fast.scala 6:14]
  input         equal_to_zero_i, // @[playground/src/ibex_multdiv_fast.scala 6:14]
  input         data_ind_timing_i, // @[playground/src/ibex_multdiv_fast.scala 6:14]
  output [32:0] alu_operand_a_o, // @[playground/src/ibex_multdiv_fast.scala 6:14]
  output [32:0] alu_operand_b_o, // @[playground/src/ibex_multdiv_fast.scala 6:14]
  input  [33:0] imd_val_q_i_0, // @[playground/src/ibex_multdiv_fast.scala 6:14]
  input  [33:0] imd_val_q_i_1, // @[playground/src/ibex_multdiv_fast.scala 6:14]
  output [33:0] imd_val_d_o_0, // @[playground/src/ibex_multdiv_fast.scala 6:14]
  output [33:0] imd_val_d_o_1, // @[playground/src/ibex_multdiv_fast.scala 6:14]
  output        imd_val_we_o_0, // @[playground/src/ibex_multdiv_fast.scala 6:14]
  output        imd_val_we_o_1, // @[playground/src/ibex_multdiv_fast.scala 6:14]
  input         multdiv_ready_id_i, // @[playground/src/ibex_multdiv_fast.scala 6:14]
  output [31:0] multdiv_result_o, // @[playground/src/ibex_multdiv_fast.scala 6:14]
  output        valid_o // @[playground/src/ibex_multdiv_fast.scala 6:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
`endif // RANDOMIZE_REG_INIT
  reg [2:0] md_state_q; // @[playground/src/ibex_multdiv_fast.scala 32:27]
  wire  signed_mult = signed_mode_i != 2'h0; // @[playground/src/ibex_multdiv_fast.scala 44:38]
  reg [31:0] op_numerator_q; // @[playground/src/ibex_multdiv_fast.scala 58:31]
  reg [31:0] op_quotient_q; // @[playground/src/ibex_multdiv_fast.scala 59:30]
  reg  div_by_zero_q; // @[playground/src/ibex_multdiv_fast.scala 73:30]
  reg [4:0] div_counter_q; // @[playground/src/ibex_multdiv_fast.scala 77:30]
  wire  _mult_hold_T = ~multdiv_ready_id_i; // @[playground/src/ibex_multdiv_fast.scala 178:24]
  reg [1:0] mult_state_q_1; // @[playground/src/ibex_multdiv_fast.scala 204:31]
  wire  _T_8 = operator_i == 2'h0; // @[playground/src/ibex_multdiv_fast.scala 248:28]
  wire  _GEN_36 = operator_i == 2'h0 & _mult_hold_T; // @[playground/src/ibex_multdiv_fast.scala 217:21 248:56 255:24]
  wire  _GEN_47 = 2'h3 == mult_state_q_1 & _mult_hold_T; // @[playground/src/ibex_multdiv_fast.scala 217:21 218:25 273:22]
  wire  _GEN_56 = 2'h2 == mult_state_q_1 ? _GEN_36 : _GEN_47; // @[playground/src/ibex_multdiv_fast.scala 218:25]
  wire  _GEN_67 = 2'h1 == mult_state_q_1 ? 1'h0 : _GEN_56; // @[playground/src/ibex_multdiv_fast.scala 217:21 218:25]
  wire  mult_hold = 2'h0 == mult_state_q_1 ? 1'h0 : _GEN_67; // @[playground/src/ibex_multdiv_fast.scala 217:21 218:25]
  wire  mult_en_internal = mult_en_i & ~mult_hold; // @[playground/src/ibex_multdiv_fast.scala 81:36]
  wire  _GEN_98 = 3'h6 == md_state_q & _mult_hold_T; // @[playground/src/ibex_multdiv_fast.scala 304:21 366:16 302:22]
  wire  _GEN_104 = 3'h5 == md_state_q ? 1'h0 : _GEN_98; // @[playground/src/ibex_multdiv_fast.scala 304:21 302:22]
  wire  _GEN_110 = 3'h4 == md_state_q ? 1'h0 : _GEN_104; // @[playground/src/ibex_multdiv_fast.scala 304:21 302:22]
  wire  _GEN_117 = 3'h3 == md_state_q ? 1'h0 : _GEN_110; // @[playground/src/ibex_multdiv_fast.scala 304:21 302:22]
  wire  _GEN_126 = 3'h2 == md_state_q ? 1'h0 : _GEN_117; // @[playground/src/ibex_multdiv_fast.scala 304:21 302:22]
  wire  _GEN_136 = 3'h1 == md_state_q ? 1'h0 : _GEN_126; // @[playground/src/ibex_multdiv_fast.scala 304:21 302:22]
  wire  div_hold = 3'h0 == md_state_q ? 1'h0 : _GEN_136; // @[playground/src/ibex_multdiv_fast.scala 304:21 302:22]
  wire  div_en_internal = div_en_i & ~div_hold; // @[playground/src/ibex_multdiv_fast.scala 82:34]
  wire [4:0] _div_counter_d_T_1 = div_counter_q - 5'h1; // @[playground/src/ibex_multdiv_fast.scala 293:39]
  wire [4:0] _GEN_122 = 3'h2 == md_state_q ? 5'h1f : _div_counter_d_T_1; // @[playground/src/ibex_multdiv_fast.scala 304:21 330:21 293:22]
  wire [4:0] _GEN_131 = 3'h1 == md_state_q ? 5'h1f : _GEN_122; // @[playground/src/ibex_multdiv_fast.scala 304:21 322:21]
  wire [4:0] div_counter_d = 3'h0 == md_state_q ? 5'h1f : _GEN_131; // @[playground/src/ibex_multdiv_fast.scala 304:21 316:21]
  wire  div_sign_a = op_a_i[31] & signed_mode_i[0]; // @[playground/src/ibex_multdiv_fast.scala 288:31]
  wire [31:0] _op_numerator_d_T_1 = div_sign_a ? alu_adder_i : op_a_i; // @[playground/src/ibex_multdiv_fast.scala 320:28]
  wire [31:0] op_denominator_q = imd_val_q_i_1[31:0]; // @[playground/src/ibex_multdiv_fast.scala 96:40]
  wire [31:0] res_adder_h = alu_adder_ext_i[32:1]; // @[playground/src/ibex_multdiv_fast.scala 280:36]
  wire  is_greater_equal = ~(imd_val_q_i_0[31] ^ op_denominator_q[31]) ? ~res_adder_h[31] : imd_val_q_i_0[31]; // @[playground/src/ibex_multdiv_fast.scala 286:26]
  wire [32:0] _next_quotient_T_1 = {1'h0,op_quotient_q}; // @[playground/src/ibex_multdiv_fast.scala 283:53]
  wire [62:0] _one_shift_T_2 = 63'h1 << div_counter_q; // @[playground/src/ibex_multdiv_fast.scala 285:48]
  wire [31:0] one_shift = _one_shift_T_2[31:0]; // @[playground/src/ibex_multdiv_fast.scala 285:13 55:23]
  wire [32:0] _next_quotient_T_2 = {1'h0,one_shift}; // @[playground/src/ibex_multdiv_fast.scala 283:88]
  wire [32:0] _next_quotient_T_3 = _next_quotient_T_1 | _next_quotient_T_2; // @[playground/src/ibex_multdiv_fast.scala 283:83]
  wire [32:0] next_quotient = is_greater_equal ? _next_quotient_T_3 : _next_quotient_T_1; // @[playground/src/ibex_multdiv_fast.scala 283:24]
  wire [31:0] _GEN_113 = 3'h3 == md_state_q ? next_quotient[31:0] : op_quotient_q; // @[playground/src/ibex_multdiv_fast.scala 304:21 337:21 295:22]
  wire [31:0] _GEN_125 = 3'h2 == md_state_q ? op_quotient_q : _GEN_113; // @[playground/src/ibex_multdiv_fast.scala 304:21 295:22]
  wire  _T_11 = operator_i == 2'h2; // @[playground/src/ibex_multdiv_fast.scala 306:26]
  wire [2:0] _md_state_d_T_2 = ~data_ind_timing_i & equal_to_zero_i ? 3'h6 : 3'h1; // @[playground/src/ibex_multdiv_fast.scala 308:26]
  wire [2:0] _md_state_d_T_7 = div_counter_q == 5'h1 ? 3'h4 : 3'h3; // @[playground/src/ibex_multdiv_fast.scala 338:24]
  wire [2:0] _GEN_97 = 3'h6 == md_state_q ? 3'h0 : md_state_q; // @[playground/src/ibex_multdiv_fast.scala 304:21 365:18 296:22]
  wire [2:0] _GEN_100 = 3'h5 == md_state_q ? 3'h6 : _GEN_97; // @[playground/src/ibex_multdiv_fast.scala 304:21 355:18]
  wire [2:0] _GEN_109 = 3'h4 == md_state_q ? 3'h5 : _GEN_100; // @[playground/src/ibex_multdiv_fast.scala 304:21 352:18]
  wire [2:0] _GEN_114 = 3'h3 == md_state_q ? _md_state_d_T_7 : _GEN_109; // @[playground/src/ibex_multdiv_fast.scala 304:21 338:18]
  wire [2:0] _GEN_121 = 3'h2 == md_state_q ? 3'h3 : _GEN_114; // @[playground/src/ibex_multdiv_fast.scala 304:21 329:18]
  wire [15:0] mult1_op_a = op_a_i[15:0]; // @[playground/src/ibex_multdiv_fast.scala 145:30]
  wire [15:0] mult1_op_b = op_b_i[15:0]; // @[playground/src/ibex_multdiv_fast.scala 146:30]
  wire  _sign_b_T_2 = signed_mode_i[1] & op_b_i[31]; // @[playground/src/ibex_multdiv_fast.scala 141:35]
  wire  _GEN_40 = 2'h3 == mult_state_q_1 & _sign_b_T_2; // @[playground/src/ibex_multdiv_fast.scala 212:21 218:25 266:22]
  wire  _GEN_51 = 2'h2 == mult_state_q_1 ? 1'h0 : _GEN_40; // @[playground/src/ibex_multdiv_fast.scala 218:25 246:22]
  wire  _GEN_62 = 2'h1 == mult_state_q_1 ? _sign_b_T_2 : _GEN_51; // @[playground/src/ibex_multdiv_fast.scala 218:25 232:22]
  wire  sign_b = 2'h0 == mult_state_q_1 ? 1'h0 : _GEN_62; // @[playground/src/ibex_multdiv_fast.scala 218:25 223:22]
  wire [15:0] mult2_op_b = op_b_i[31:16]; // @[playground/src/ibex_multdiv_fast.scala 151:30]
  wire  _sign_a_T_2 = signed_mode_i[0] & op_a_i[31]; // @[playground/src/ibex_multdiv_fast.scala 140:35]
  wire  _GEN_39 = 2'h3 == mult_state_q_1 & _sign_a_T_2; // @[playground/src/ibex_multdiv_fast.scala 211:21 218:25 265:22]
  wire  _GEN_50 = 2'h2 == mult_state_q_1 ? _sign_a_T_2 : _GEN_39; // @[playground/src/ibex_multdiv_fast.scala 218:25 245:22]
  wire  _GEN_61 = 2'h1 == mult_state_q_1 ? 1'h0 : _GEN_50; // @[playground/src/ibex_multdiv_fast.scala 218:25 231:22]
  wire  sign_a = 2'h0 == mult_state_q_1 ? 1'h0 : _GEN_61; // @[playground/src/ibex_multdiv_fast.scala 218:25 222:22]
  wire [15:0] _accum_h_T_3 = signed_mult & imd_val_q_i_0[33] ? 16'hffff : 16'h0; // @[playground/src/ibex_multdiv_fast.scala 155:24]
  wire [17:0] _GEN_42 = 2'h3 == mult_state_q_1 ? {{2'd0}, _accum_h_T_3} : 18'h0; // @[playground/src/ibex_multdiv_fast.scala 218:25 268:22 38:25]
  wire [17:0] _GEN_58 = 2'h2 == mult_state_q_1 ? 18'h0 : _GEN_42; // @[playground/src/ibex_multdiv_fast.scala 218:25 38:25]
  wire [17:0] _GEN_69 = 2'h1 == mult_state_q_1 ? 18'h0 : _GEN_58; // @[playground/src/ibex_multdiv_fast.scala 218:25 38:25]
  wire [17:0] accum_h = 2'h0 == mult_state_q_1 ? 18'h0 : _GEN_69; // @[playground/src/ibex_multdiv_fast.scala 218:25 38:25]
  wire [17:0] _GEN_41 = 2'h3 == mult_state_q_1 ? imd_val_q_i_0[33:16] : 18'h0; // @[playground/src/ibex_multdiv_fast.scala 218:25 267:22 39:25]
  wire [17:0] _GEN_57 = 2'h2 == mult_state_q_1 ? 18'h0 : _GEN_41; // @[playground/src/ibex_multdiv_fast.scala 218:25 39:25]
  wire [17:0] _GEN_68 = 2'h1 == mult_state_q_1 ? 18'h0 : _GEN_57; // @[playground/src/ibex_multdiv_fast.scala 218:25 39:25]
  wire [17:0] _GEN_79 = 2'h0 == mult_state_q_1 ? 18'h0 : _GEN_68; // @[playground/src/ibex_multdiv_fast.scala 218:25 39:25]
  wire [15:0] accum_l = _GEN_79[15:0]; // @[playground/src/ibex_multdiv_fast.scala 39:25]
  wire [33:0] _accum_T = {accum_h,accum_l}; // @[playground/src/ibex_multdiv_fast.scala 156:18]
  wire [33:0] _accum_T_3 = {18'h0,imd_val_q_i_0[31:16]}; // @[playground/src/ibex_multdiv_fast.scala 233:28]
  wire [33:0] _GEN_32 = operator_i == 2'h0 ? _accum_T_3 : imd_val_q_i_0; // @[playground/src/ibex_multdiv_fast.scala 248:56 249:24 257:18]
  wire [33:0] _GEN_43 = 2'h3 == mult_state_q_1 ? _accum_T : imd_val_q_i_0; // @[playground/src/ibex_multdiv_fast.scala 213:21 218:25 269:22]
  wire [33:0] _GEN_52 = 2'h2 == mult_state_q_1 ? _GEN_32 : _GEN_43; // @[playground/src/ibex_multdiv_fast.scala 218:25]
  wire [33:0] _GEN_63 = 2'h1 == mult_state_q_1 ? _accum_T_3 : _GEN_52; // @[playground/src/ibex_multdiv_fast.scala 218:25 233:22]
  wire [15:0] _GEN_37 = 2'h3 == mult_state_q_1 ? op_a_i[31:16] : mult1_op_a; // @[playground/src/ibex_multdiv_fast.scala 209:21 218:25 263:22]
  wire [15:0] _GEN_48 = 2'h2 == mult_state_q_1 ? op_a_i[31:16] : _GEN_37; // @[playground/src/ibex_multdiv_fast.scala 218:25 243:22]
  wire [15:0] _GEN_59 = 2'h1 == mult_state_q_1 ? mult1_op_a : _GEN_48; // @[playground/src/ibex_multdiv_fast.scala 218:25 229:22]
  wire [15:0] mult_op_a = 2'h0 == mult_state_q_1 ? mult1_op_a : _GEN_59; // @[playground/src/ibex_multdiv_fast.scala 218:25 220:22]
  wire [16:0] _mac_res_signed_T_10 = {sign_a,mult_op_a}; // @[playground/src/ibex_multdiv_fast.scala 206:47]
  wire [15:0] _GEN_38 = 2'h3 == mult_state_q_1 ? mult2_op_b : mult1_op_b; // @[playground/src/ibex_multdiv_fast.scala 210:21 218:25 264:22]
  wire [15:0] _GEN_49 = 2'h2 == mult_state_q_1 ? mult1_op_b : _GEN_38; // @[playground/src/ibex_multdiv_fast.scala 218:25 244:22]
  wire [15:0] _GEN_60 = 2'h1 == mult_state_q_1 ? mult2_op_b : _GEN_49; // @[playground/src/ibex_multdiv_fast.scala 218:25 230:22]
  wire [15:0] mult_op_b = 2'h0 == mult_state_q_1 ? mult1_op_b : _GEN_60; // @[playground/src/ibex_multdiv_fast.scala 218:25 221:22]
  wire [16:0] _mac_res_signed_T_12 = {sign_b,mult_op_b}; // @[playground/src/ibex_multdiv_fast.scala 206:79]
  wire [33:0] _mac_res_signed_T_13 = $signed(_mac_res_signed_T_10) * $signed(_mac_res_signed_T_12); // @[playground/src/ibex_multdiv_fast.scala 206:54]
  wire [33:0] _mac_res_signed_T_14 = 2'h0 == mult_state_q_1 ? 34'h0 : _GEN_63; // @[playground/src/ibex_multdiv_fast.scala 206:93]
  wire [33:0] _mac_res_ext_T = $signed(_mac_res_signed_T_13) + $signed(_mac_res_signed_T_14); // @[playground/src/ibex_multdiv_fast.scala 137:35]
  wire [34:0] mac_res_ext = {{1'd0}, _mac_res_ext_T}; // @[playground/src/ibex_multdiv_fast.scala 36:25]
  wire [33:0] _mac_res_d_T_7 = {2'h0,mac_res_ext[15:0],imd_val_q_i_0[15:0]}; // @[playground/src/ibex_multdiv_fast.scala 236:28]
  wire [33:0] _GEN_31 = _T_8 ? _mac_res_d_T_7 : mac_res_ext[33:0]; // @[playground/src/ibex_multdiv_fast.scala 235:56 236:22 238:22]
  wire [1:0] _GEN_35 = operator_i == 2'h0 ? 2'h0 : 2'h3; // @[playground/src/ibex_multdiv_fast.scala 248:56 254:24 259:24]
  wire [1:0] _GEN_46 = 2'h3 == mult_state_q_1 ? 2'h0 : mult_state_q_1; // @[playground/src/ibex_multdiv_fast.scala 215:21 218:25 272:22]
  wire [33:0] _GEN_53 = 2'h2 == mult_state_q_1 ? _GEN_31 : mac_res_ext[33:0]; // @[playground/src/ibex_multdiv_fast.scala 218:25]
  wire  _GEN_54 = 2'h2 == mult_state_q_1 ? _T_8 : 2'h3 == mult_state_q_1; // @[playground/src/ibex_multdiv_fast.scala 218:25]
  wire [1:0] _GEN_55 = 2'h2 == mult_state_q_1 ? _GEN_35 : _GEN_46; // @[playground/src/ibex_multdiv_fast.scala 218:25]
  wire [33:0] _GEN_64 = 2'h1 == mult_state_q_1 ? _GEN_31 : _GEN_53; // @[playground/src/ibex_multdiv_fast.scala 218:25]
  wire  _GEN_66 = 2'h1 == mult_state_q_1 ? 1'h0 : _GEN_54; // @[playground/src/ibex_multdiv_fast.scala 216:21 218:25]
  wire [33:0] mac_res_d = 2'h0 == mult_state_q_1 ? mac_res_ext[33:0] : _GEN_64; // @[playground/src/ibex_multdiv_fast.scala 218:25 225:22]
  wire  mult_valid = 2'h0 == mult_state_q_1 ? 1'h0 : _GEN_66; // @[playground/src/ibex_multdiv_fast.scala 216:21 218:25]
  wire [31:0] next_remainder = is_greater_equal ? res_adder_h : imd_val_q_i_0[31:0]; // @[playground/src/ibex_multdiv_fast.scala 282:24]
  wire  div_sign_b = op_b_i[31] & signed_mode_i[1]; // @[playground/src/ibex_multdiv_fast.scala 289:31]
  wire  div_change_sign = (div_sign_a ^ div_sign_b) & ~div_by_zero_q; // @[playground/src/ibex_multdiv_fast.scala 290:48]
  wire [31:0] _alu_operand_b_o_T = ~op_b_i; // @[playground/src/ibex_multdiv_fast.scala 300:29]
  wire [32:0] _alu_operand_b_o_T_1 = {_alu_operand_b_o_T,1'h1}; // @[playground/src/ibex_multdiv_fast.scala 300:28]
  wire [33:0] _op_remainder_d_T_2 = {2'h0,op_a_i}; // @[playground/src/ibex_multdiv_fast.scala 311:30]
  wire [33:0] _GEN_92 = operator_i == 2'h2 ? 34'hffffffff : _op_remainder_d_T_2; // @[playground/src/ibex_multdiv_fast.scala 306:53 307:24 311:24]
  wire [31:0] _alu_operand_b_o_T_4 = ~op_a_i; // @[playground/src/ibex_multdiv_fast.scala 324:33]
  wire [32:0] _alu_operand_b_o_T_5 = {_alu_operand_b_o_T_4,1'h1}; // @[playground/src/ibex_multdiv_fast.scala 324:32]
  wire [33:0] _op_remainder_d_T_5 = {33'h0,op_numerator_q[31]}; // @[playground/src/ibex_multdiv_fast.scala 327:28]
  wire [31:0] _op_denominator_d_T_1 = div_sign_b ? alu_adder_i : op_b_i; // @[playground/src/ibex_multdiv_fast.scala 328:30]
  wire [31:0] _op_remainder_d_T_7 = op_numerator_q >> div_counter_d; // @[playground/src/ibex_multdiv_fast.scala 336:80]
  wire [33:0] _op_remainder_d_T_9 = {1'h0,next_remainder,_op_remainder_d_T_7[0]}; // @[playground/src/ibex_multdiv_fast.scala 336:28]
  wire [32:0] _alu_operand_a_o_T_9 = {imd_val_q_i_0[31:0],1'h1}; // @[playground/src/ibex_multdiv_fast.scala 340:32]
  wire [31:0] _alu_operand_b_o_T_9 = ~op_denominator_q; // @[playground/src/ibex_multdiv_fast.scala 341:33]
  wire [32:0] _alu_operand_b_o_T_10 = {_alu_operand_b_o_T_9,1'h1}; // @[playground/src/ibex_multdiv_fast.scala 341:32]
  wire [33:0] _op_remainder_d_T_10 = {1'h0,next_quotient}; // @[playground/src/ibex_multdiv_fast.scala 345:30]
  wire [33:0] _op_remainder_d_T_13 = {2'h0,next_remainder}; // @[playground/src/ibex_multdiv_fast.scala 348:30]
  wire [33:0] _GEN_95 = _T_11 ? _op_remainder_d_T_10 : _op_remainder_d_T_13; // @[playground/src/ibex_multdiv_fast.scala 344:53 345:24 348:24]
  wire [33:0] _op_remainder_d_T_16 = {2'h0,alu_adder_i}; // @[playground/src/ibex_multdiv_fast.scala 357:59]
  wire [33:0] _op_remainder_d_T_17 = div_change_sign ? _op_remainder_d_T_16 : imd_val_q_i_0; // @[playground/src/ibex_multdiv_fast.scala 357:30]
  wire [33:0] _op_remainder_d_T_21 = div_sign_a ? _op_remainder_d_T_16 : imd_val_q_i_0; // @[playground/src/ibex_multdiv_fast.scala 359:30]
  wire [33:0] _GEN_96 = _T_11 ? _op_remainder_d_T_17 : _op_remainder_d_T_21; // @[playground/src/ibex_multdiv_fast.scala 356:53 357:24 359:24]
  wire [31:0] _alu_operand_b_o_T_15 = ~imd_val_q_i_0[31:0]; // @[playground/src/ibex_multdiv_fast.scala 362:33]
  wire [32:0] _alu_operand_b_o_T_16 = {_alu_operand_b_o_T_15,1'h1}; // @[playground/src/ibex_multdiv_fast.scala 362:32]
  wire [33:0] _GEN_101 = 3'h5 == md_state_q ? _GEN_96 : imd_val_q_i_0; // @[playground/src/ibex_multdiv_fast.scala 304:21 294:22]
  wire [32:0] _GEN_103 = 3'h5 == md_state_q ? _alu_operand_b_o_T_16 : _alu_operand_b_o_T_1; // @[playground/src/ibex_multdiv_fast.scala 304:21 300:22 362:26]
  wire  _GEN_105 = 3'h5 == md_state_q ? 1'h0 : 3'h6 == md_state_q; // @[playground/src/ibex_multdiv_fast.scala 304:21 301:22]
  wire [33:0] _GEN_106 = 3'h4 == md_state_q ? _GEN_95 : _GEN_101; // @[playground/src/ibex_multdiv_fast.scala 304:21]
  wire [32:0] _GEN_107 = 3'h4 == md_state_q ? _alu_operand_a_o_T_9 : 33'h1; // @[playground/src/ibex_multdiv_fast.scala 304:21 350:26]
  wire [32:0] _GEN_108 = 3'h4 == md_state_q ? _alu_operand_b_o_T_10 : _GEN_103; // @[playground/src/ibex_multdiv_fast.scala 304:21 351:26]
  wire  _GEN_111 = 3'h4 == md_state_q ? 1'h0 : _GEN_105; // @[playground/src/ibex_multdiv_fast.scala 304:21 301:22]
  wire [33:0] _GEN_112 = 3'h3 == md_state_q ? _op_remainder_d_T_9 : _GEN_106; // @[playground/src/ibex_multdiv_fast.scala 304:21 336:22]
  wire [32:0] _GEN_115 = 3'h3 == md_state_q ? _alu_operand_a_o_T_9 : _GEN_107; // @[playground/src/ibex_multdiv_fast.scala 304:21 340:26]
  wire [32:0] _GEN_116 = 3'h3 == md_state_q ? _alu_operand_b_o_T_10 : _GEN_108; // @[playground/src/ibex_multdiv_fast.scala 304:21 341:26]
  wire  _GEN_118 = 3'h3 == md_state_q ? 1'h0 : _GEN_111; // @[playground/src/ibex_multdiv_fast.scala 304:21 301:22]
  wire [33:0] _GEN_119 = 3'h2 == md_state_q ? _op_remainder_d_T_5 : _GEN_112; // @[playground/src/ibex_multdiv_fast.scala 304:21 327:22]
  wire [31:0] _GEN_120 = 3'h2 == md_state_q ? _op_denominator_d_T_1 : op_denominator_q; // @[playground/src/ibex_multdiv_fast.scala 304:21 298:22 328:24]
  wire [32:0] _GEN_123 = 3'h2 == md_state_q ? 33'h1 : _GEN_115; // @[playground/src/ibex_multdiv_fast.scala 304:21 331:26]
  wire [32:0] _GEN_124 = 3'h2 == md_state_q ? _alu_operand_b_o_T_1 : _GEN_116; // @[playground/src/ibex_multdiv_fast.scala 304:21 332:26]
  wire  _GEN_127 = 3'h2 == md_state_q ? 1'h0 : _GEN_118; // @[playground/src/ibex_multdiv_fast.scala 304:21 301:22]
  wire [32:0] _GEN_132 = 3'h1 == md_state_q ? 33'h1 : _GEN_123; // @[playground/src/ibex_multdiv_fast.scala 304:21 323:26]
  wire [32:0] _GEN_133 = 3'h1 == md_state_q ? _alu_operand_b_o_T_5 : _GEN_124; // @[playground/src/ibex_multdiv_fast.scala 304:21 324:26]
  wire [33:0] _GEN_134 = 3'h1 == md_state_q ? imd_val_q_i_0 : _GEN_119; // @[playground/src/ibex_multdiv_fast.scala 304:21 294:22]
  wire [31:0] _GEN_135 = 3'h1 == md_state_q ? op_denominator_q : _GEN_120; // @[playground/src/ibex_multdiv_fast.scala 304:21 298:22]
  wire  _GEN_137 = 3'h1 == md_state_q ? 1'h0 : _GEN_127; // @[playground/src/ibex_multdiv_fast.scala 304:21 301:22]
  wire [33:0] op_remainder_d = 3'h0 == md_state_q ? _GEN_92 : _GEN_134; // @[playground/src/ibex_multdiv_fast.scala 304:21]
  wire [31:0] op_denominator_d = 3'h0 == md_state_q ? op_denominator_q : _GEN_135; // @[playground/src/ibex_multdiv_fast.scala 304:21 298:22]
  wire  div_valid = 3'h0 == md_state_q ? 1'h0 : _GEN_137; // @[playground/src/ibex_multdiv_fast.scala 304:21 301:22]
  assign alu_operand_a_o = 3'h0 == md_state_q ? 33'h1 : _GEN_132; // @[playground/src/ibex_multdiv_fast.scala 304:21 314:26]
  assign alu_operand_b_o = 3'h0 == md_state_q ? _alu_operand_b_o_T_1 : _GEN_133; // @[playground/src/ibex_multdiv_fast.scala 304:21 315:26]
  assign imd_val_d_o_0 = div_sel_i ? op_remainder_d : mac_res_d; // @[playground/src/ibex_multdiv_fast.scala 377:27]
  assign imd_val_d_o_1 = {2'h0,op_denominator_d}; // @[playground/src/ibex_multdiv_fast.scala 378:27]
  assign imd_val_we_o_0 = mult_en_internal | div_en_internal; // @[playground/src/ibex_multdiv_fast.scala 94:34]
  assign imd_val_we_o_1 = div_en_i & ~div_hold; // @[playground/src/ibex_multdiv_fast.scala 82:34]
  assign multdiv_result_o = div_en_i ? imd_val_q_i_0[31:0] : mac_res_d[31:0]; // @[playground/src/ibex_multdiv_fast.scala 374:29]
  assign valid_o = mult_valid | div_valid; // @[playground/src/ibex_multdiv_fast.scala 376:29]
  always @(posedge clk_i) begin
    if (!rst_ni) begin // @[playground/src/ibex_multdiv_fast.scala 32:27]
      md_state_q <= 3'h0; // @[playground/src/ibex_multdiv_fast.scala 32:27]
    end else if (div_en_internal) begin // @[playground/src/ibex_multdiv_fast.scala 84:24]
      if (3'h0 == md_state_q) begin // @[playground/src/ibex_multdiv_fast.scala 304:21]
        if (operator_i == 2'h2) begin // @[playground/src/ibex_multdiv_fast.scala 306:53]
          md_state_q <= _md_state_d_T_2; // @[playground/src/ibex_multdiv_fast.scala 308:20]
        end else begin
          md_state_q <= _md_state_d_T_2; // @[playground/src/ibex_multdiv_fast.scala 312:20]
        end
      end else if (3'h1 == md_state_q) begin // @[playground/src/ibex_multdiv_fast.scala 304:21]
        md_state_q <= 3'h2; // @[playground/src/ibex_multdiv_fast.scala 321:18]
      end else begin
        md_state_q <= _GEN_121;
      end
    end
    if (!rst_ni) begin // @[playground/src/ibex_multdiv_fast.scala 58:31]
      op_numerator_q <= 32'h0; // @[playground/src/ibex_multdiv_fast.scala 58:31]
    end else if (div_en_internal) begin // @[playground/src/ibex_multdiv_fast.scala 84:24]
      if (!(3'h0 == md_state_q)) begin // @[playground/src/ibex_multdiv_fast.scala 304:21]
        if (3'h1 == md_state_q) begin // @[playground/src/ibex_multdiv_fast.scala 304:21]
          op_numerator_q <= _op_numerator_d_T_1; // @[playground/src/ibex_multdiv_fast.scala 320:22]
        end
      end
    end
    if (!rst_ni) begin // @[playground/src/ibex_multdiv_fast.scala 59:30]
      op_quotient_q <= 32'h0; // @[playground/src/ibex_multdiv_fast.scala 59:30]
    end else if (div_en_internal) begin // @[playground/src/ibex_multdiv_fast.scala 84:24]
      if (!(3'h0 == md_state_q)) begin // @[playground/src/ibex_multdiv_fast.scala 304:21]
        if (3'h1 == md_state_q) begin // @[playground/src/ibex_multdiv_fast.scala 304:21]
          op_quotient_q <= 32'h0; // @[playground/src/ibex_multdiv_fast.scala 319:21]
        end else begin
          op_quotient_q <= _GEN_125;
        end
      end
    end
    if (!rst_ni) begin // @[playground/src/ibex_multdiv_fast.scala 73:30]
      div_by_zero_q <= 1'h0; // @[playground/src/ibex_multdiv_fast.scala 73:30]
    end else if (div_en_internal) begin // @[playground/src/ibex_multdiv_fast.scala 84:24]
      if (3'h0 == md_state_q) begin // @[playground/src/ibex_multdiv_fast.scala 304:21]
        if (operator_i == 2'h2) begin // @[playground/src/ibex_multdiv_fast.scala 306:53]
          div_by_zero_q <= equal_to_zero_i; // @[playground/src/ibex_multdiv_fast.scala 309:23]
        end
      end
    end
    if (!rst_ni) begin // @[playground/src/ibex_multdiv_fast.scala 77:30]
      div_counter_q <= 5'h0; // @[playground/src/ibex_multdiv_fast.scala 77:30]
    end else if (div_en_internal) begin // @[playground/src/ibex_multdiv_fast.scala 84:24]
      if (3'h0 == md_state_q) begin // @[playground/src/ibex_multdiv_fast.scala 304:21]
        div_counter_q <= 5'h1f; // @[playground/src/ibex_multdiv_fast.scala 316:21]
      end else if (3'h1 == md_state_q) begin // @[playground/src/ibex_multdiv_fast.scala 304:21]
        div_counter_q <= 5'h1f; // @[playground/src/ibex_multdiv_fast.scala 322:21]
      end else begin
        div_counter_q <= _GEN_122;
      end
    end
    if (!rst_ni) begin // @[playground/src/ibex_multdiv_fast.scala 204:31]
      mult_state_q_1 <= 2'h0; // @[playground/src/ibex_multdiv_fast.scala 204:31]
    end else if (mult_en_internal) begin // @[playground/src/ibex_multdiv_fast.scala 277:24]
      if (2'h0 == mult_state_q_1) begin // @[playground/src/ibex_multdiv_fast.scala 218:25]
        mult_state_q_1 <= 2'h1; // @[playground/src/ibex_multdiv_fast.scala 226:22]
      end else if (2'h1 == mult_state_q_1) begin // @[playground/src/ibex_multdiv_fast.scala 218:25]
        mult_state_q_1 <= 2'h2; // @[playground/src/ibex_multdiv_fast.scala 240:22]
      end else begin
        mult_state_q_1 <= _GEN_55;
      end
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
  md_state_q = _RAND_0[2:0];
  _RAND_1 = {1{`RANDOM}};
  op_numerator_q = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  op_quotient_q = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  div_by_zero_q = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  div_counter_q = _RAND_4[4:0];
  _RAND_5 = {1{`RANDOM}};
  mult_state_q_1 = _RAND_5[1:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
