module IbexMultDivFast(
  input         clock,
  input         reset,
  input         io_mult_en_i, // @[playground/src/ibex_multdiv_fast.scala 6:14]
  input         io_div_en_i, // @[playground/src/ibex_multdiv_fast.scala 6:14]
  input         io_mult_sel_i, // @[playground/src/ibex_multdiv_fast.scala 6:14]
  input         io_div_sel_i, // @[playground/src/ibex_multdiv_fast.scala 6:14]
  input  [1:0]  io_operator_i, // @[playground/src/ibex_multdiv_fast.scala 6:14]
  input  [1:0]  io_signed_mode_i, // @[playground/src/ibex_multdiv_fast.scala 6:14]
  input  [31:0] io_op_a_i, // @[playground/src/ibex_multdiv_fast.scala 6:14]
  input  [31:0] io_op_b_i, // @[playground/src/ibex_multdiv_fast.scala 6:14]
  input  [33:0] io_alu_adder_ext_i, // @[playground/src/ibex_multdiv_fast.scala 6:14]
  input  [31:0] io_alu_adder_i, // @[playground/src/ibex_multdiv_fast.scala 6:14]
  input         io_equal_to_zero_i, // @[playground/src/ibex_multdiv_fast.scala 6:14]
  input         io_data_ind_timing_i, // @[playground/src/ibex_multdiv_fast.scala 6:14]
  output [32:0] io_alu_operand_a_o, // @[playground/src/ibex_multdiv_fast.scala 6:14]
  output [32:0] io_alu_operand_b_o, // @[playground/src/ibex_multdiv_fast.scala 6:14]
  input  [33:0] io_imd_val_q_i_0, // @[playground/src/ibex_multdiv_fast.scala 6:14]
  input  [33:0] io_imd_val_q_i_1, // @[playground/src/ibex_multdiv_fast.scala 6:14]
  output [33:0] io_imd_val_d_o_0, // @[playground/src/ibex_multdiv_fast.scala 6:14]
  output [33:0] io_imd_val_d_o_1, // @[playground/src/ibex_multdiv_fast.scala 6:14]
  output        io_imd_val_we_o_0, // @[playground/src/ibex_multdiv_fast.scala 6:14]
  output        io_imd_val_we_o_1, // @[playground/src/ibex_multdiv_fast.scala 6:14]
  input         io_multdiv_ready_id_i, // @[playground/src/ibex_multdiv_fast.scala 6:14]
  output [31:0] io_multdiv_result_o, // @[playground/src/ibex_multdiv_fast.scala 6:14]
  output        io_valid_o // @[playground/src/ibex_multdiv_fast.scala 6:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
`endif // RANDOMIZE_REG_INIT
  reg  md_state_q; // @[playground/src/ibex_multdiv_fast.scala 38:27]
  wire  signed_mult = io_signed_mode_i != 2'h0; // @[playground/src/ibex_multdiv_fast.scala 50:38]
  reg [31:0] op_denominator_q; // @[playground/src/ibex_multdiv_fast.scala 63:33]
  reg [31:0] op_numerator_q; // @[playground/src/ibex_multdiv_fast.scala 64:31]
  reg [31:0] op_quotient_q; // @[playground/src/ibex_multdiv_fast.scala 65:30]
  reg  div_by_zero_q; // @[playground/src/ibex_multdiv_fast.scala 79:30]
  reg [4:0] div_counter_q; // @[playground/src/ibex_multdiv_fast.scala 83:30]
  wire  _mult_hold_T = ~io_multdiv_ready_id_i; // @[playground/src/ibex_multdiv_fast.scala 182:24]
  reg [1:0] mult_state_q_1; // @[playground/src/ibex_multdiv_fast.scala 210:31]
  wire  _T_8 = io_operator_i == 2'h0; // @[playground/src/ibex_multdiv_fast.scala 257:28]
  wire  _GEN_31 = io_operator_i == 2'h0 & _mult_hold_T; // @[playground/src/ibex_multdiv_fast.scala 223:21 257:51 264:24]
  wire  _GEN_42 = 2'h3 == mult_state_q_1 & _mult_hold_T; // @[playground/src/ibex_multdiv_fast.scala 223:21 224:25 282:22]
  wire  _GEN_51 = 2'h2 == mult_state_q_1 ? _GEN_31 : _GEN_42; // @[playground/src/ibex_multdiv_fast.scala 224:25]
  wire  _GEN_62 = 2'h1 == mult_state_q_1 ? 1'h0 : _GEN_51; // @[playground/src/ibex_multdiv_fast.scala 223:21 224:25]
  wire  mult_hold = 2'h0 == mult_state_q_1 ? 1'h0 : _GEN_62; // @[playground/src/ibex_multdiv_fast.scala 223:21 224:25]
  wire  mult_en_internal = io_mult_en_i & ~mult_hold; // @[playground/src/ibex_multdiv_fast.scala 87:36]
  wire [1:0] _GEN_144 = {{1'd0}, md_state_q}; // @[playground/src/ibex_multdiv_fast.scala 313:21]
  wire [2:0] _GEN_146 = {{2'd0}, md_state_q}; // @[playground/src/ibex_multdiv_fast.scala 313:21]
  wire  _GEN_93 = 3'h6 == _GEN_146 & _mult_hold_T; // @[playground/src/ibex_multdiv_fast.scala 313:21 375:16 311:22]
  wire  _GEN_99 = 3'h5 == _GEN_146 ? 1'h0 : _GEN_93; // @[playground/src/ibex_multdiv_fast.scala 313:21 311:22]
  wire  _GEN_105 = 3'h4 == _GEN_146 ? 1'h0 : _GEN_99; // @[playground/src/ibex_multdiv_fast.scala 313:21 311:22]
  wire  _GEN_112 = 2'h3 == _GEN_144 ? 1'h0 : _GEN_105; // @[playground/src/ibex_multdiv_fast.scala 313:21 311:22]
  wire  _GEN_121 = 2'h2 == _GEN_144 ? 1'h0 : _GEN_112; // @[playground/src/ibex_multdiv_fast.scala 313:21 311:22]
  wire  _GEN_131 = md_state_q ? 1'h0 : _GEN_121; // @[playground/src/ibex_multdiv_fast.scala 313:21 311:22]
  wire  div_hold = ~md_state_q ? 1'h0 : _GEN_131; // @[playground/src/ibex_multdiv_fast.scala 313:21 311:22]
  wire  div_en_internal = io_div_en_i & ~div_hold; // @[playground/src/ibex_multdiv_fast.scala 88:34]
  wire [15:0] mult1_op_a = io_op_a_i[15:0]; // @[playground/src/ibex_multdiv_fast.scala 149:30]
  wire [15:0] mult1_op_b = io_op_b_i[15:0]; // @[playground/src/ibex_multdiv_fast.scala 150:30]
  wire  _sign_b_T_2 = io_signed_mode_i[1] & io_op_b_i[31]; // @[playground/src/ibex_multdiv_fast.scala 145:35]
  wire  _GEN_35 = 2'h3 == mult_state_q_1 & _sign_b_T_2; // @[playground/src/ibex_multdiv_fast.scala 218:21 224:25 275:22]
  wire  _GEN_46 = 2'h2 == mult_state_q_1 ? 1'h0 : _GEN_35; // @[playground/src/ibex_multdiv_fast.scala 224:25 253:22]
  wire  _GEN_57 = 2'h1 == mult_state_q_1 ? _sign_b_T_2 : _GEN_46; // @[playground/src/ibex_multdiv_fast.scala 224:25 238:22]
  wire  sign_b = 2'h0 == mult_state_q_1 ? 1'h0 : _GEN_57; // @[playground/src/ibex_multdiv_fast.scala 224:25 229:22]
  wire [15:0] mult2_op_b = io_op_b_i[31:16]; // @[playground/src/ibex_multdiv_fast.scala 155:30]
  wire  _sign_a_T_2 = io_signed_mode_i[0] & io_op_a_i[31]; // @[playground/src/ibex_multdiv_fast.scala 144:35]
  wire  _GEN_34 = 2'h3 == mult_state_q_1 & _sign_a_T_2; // @[playground/src/ibex_multdiv_fast.scala 217:21 224:25 274:22]
  wire  _GEN_45 = 2'h2 == mult_state_q_1 ? _sign_a_T_2 : _GEN_34; // @[playground/src/ibex_multdiv_fast.scala 224:25 252:22]
  wire  _GEN_56 = 2'h1 == mult_state_q_1 ? 1'h0 : _GEN_45; // @[playground/src/ibex_multdiv_fast.scala 224:25 237:22]
  wire  sign_a = 2'h0 == mult_state_q_1 ? 1'h0 : _GEN_56; // @[playground/src/ibex_multdiv_fast.scala 224:25 228:22]
  wire [15:0] _accum_h_T_3 = signed_mult & io_imd_val_q_i_0[33] ? 16'hffff : 16'h0; // @[playground/src/ibex_multdiv_fast.scala 159:24]
  wire [17:0] _GEN_37 = 2'h3 == mult_state_q_1 ? {{2'd0}, _accum_h_T_3} : 18'h0; // @[playground/src/ibex_multdiv_fast.scala 224:25 277:22 44:25]
  wire [17:0] _GEN_53 = 2'h2 == mult_state_q_1 ? 18'h0 : _GEN_37; // @[playground/src/ibex_multdiv_fast.scala 224:25 44:25]
  wire [17:0] _GEN_64 = 2'h1 == mult_state_q_1 ? 18'h0 : _GEN_53; // @[playground/src/ibex_multdiv_fast.scala 224:25 44:25]
  wire [17:0] accum_h = 2'h0 == mult_state_q_1 ? 18'h0 : _GEN_64; // @[playground/src/ibex_multdiv_fast.scala 224:25 44:25]
  wire [17:0] _GEN_36 = 2'h3 == mult_state_q_1 ? io_imd_val_q_i_0[33:16] : 18'h0; // @[playground/src/ibex_multdiv_fast.scala 224:25 276:22 45:25]
  wire [17:0] _GEN_52 = 2'h2 == mult_state_q_1 ? 18'h0 : _GEN_36; // @[playground/src/ibex_multdiv_fast.scala 224:25 45:25]
  wire [17:0] _GEN_63 = 2'h1 == mult_state_q_1 ? 18'h0 : _GEN_52; // @[playground/src/ibex_multdiv_fast.scala 224:25 45:25]
  wire [17:0] _GEN_74 = 2'h0 == mult_state_q_1 ? 18'h0 : _GEN_63; // @[playground/src/ibex_multdiv_fast.scala 224:25 45:25]
  wire [15:0] accum_l = _GEN_74[15:0]; // @[playground/src/ibex_multdiv_fast.scala 45:25]
  wire [33:0] _accum_T = {accum_h,accum_l}; // @[playground/src/ibex_multdiv_fast.scala 160:18]
  wire [33:0] _accum_T_3 = {18'h0,io_imd_val_q_i_0[31:16]}; // @[playground/src/ibex_multdiv_fast.scala 239:28]
  wire [33:0] _GEN_27 = io_operator_i == 2'h0 ? _accum_T_3 : io_imd_val_q_i_0; // @[playground/src/ibex_multdiv_fast.scala 257:51 258:24 266:18]
  wire [33:0] _GEN_38 = 2'h3 == mult_state_q_1 ? _accum_T : io_imd_val_q_i_0; // @[playground/src/ibex_multdiv_fast.scala 219:21 224:25 278:22]
  wire [33:0] _GEN_47 = 2'h2 == mult_state_q_1 ? _GEN_27 : _GEN_38; // @[playground/src/ibex_multdiv_fast.scala 224:25]
  wire [33:0] _GEN_58 = 2'h1 == mult_state_q_1 ? _accum_T_3 : _GEN_47; // @[playground/src/ibex_multdiv_fast.scala 224:25 239:22]
  wire [15:0] _GEN_32 = 2'h3 == mult_state_q_1 ? io_op_a_i[31:16] : mult1_op_a; // @[playground/src/ibex_multdiv_fast.scala 215:21 224:25 272:22]
  wire [15:0] _GEN_43 = 2'h2 == mult_state_q_1 ? io_op_a_i[31:16] : _GEN_32; // @[playground/src/ibex_multdiv_fast.scala 224:25 250:22]
  wire [15:0] _GEN_54 = 2'h1 == mult_state_q_1 ? mult1_op_a : _GEN_43; // @[playground/src/ibex_multdiv_fast.scala 224:25 235:22]
  wire [15:0] mult_op_a = 2'h0 == mult_state_q_1 ? mult1_op_a : _GEN_54; // @[playground/src/ibex_multdiv_fast.scala 224:25 226:22]
  wire [16:0] _mac_res_signed_T_10 = {sign_a,mult_op_a}; // @[playground/src/ibex_multdiv_fast.scala 212:47]
  wire [15:0] _GEN_33 = 2'h3 == mult_state_q_1 ? mult2_op_b : mult1_op_b; // @[playground/src/ibex_multdiv_fast.scala 216:21 224:25 273:22]
  wire [15:0] _GEN_44 = 2'h2 == mult_state_q_1 ? mult1_op_b : _GEN_33; // @[playground/src/ibex_multdiv_fast.scala 224:25 251:22]
  wire [15:0] _GEN_55 = 2'h1 == mult_state_q_1 ? mult2_op_b : _GEN_44; // @[playground/src/ibex_multdiv_fast.scala 224:25 236:22]
  wire [15:0] mult_op_b = 2'h0 == mult_state_q_1 ? mult1_op_b : _GEN_55; // @[playground/src/ibex_multdiv_fast.scala 224:25 227:22]
  wire [16:0] _mac_res_signed_T_12 = {sign_b,mult_op_b}; // @[playground/src/ibex_multdiv_fast.scala 212:79]
  wire [33:0] _mac_res_signed_T_13 = $signed(_mac_res_signed_T_10) * $signed(_mac_res_signed_T_12); // @[playground/src/ibex_multdiv_fast.scala 212:54]
  wire [33:0] _mac_res_signed_T_14 = 2'h0 == mult_state_q_1 ? 34'h0 : _GEN_58; // @[playground/src/ibex_multdiv_fast.scala 212:93]
  wire [33:0] _mac_res_ext_T = $signed(_mac_res_signed_T_13) + $signed(_mac_res_signed_T_14); // @[playground/src/ibex_multdiv_fast.scala 141:35]
  wire [34:0] mac_res_ext = {{1'd0}, _mac_res_ext_T}; // @[playground/src/ibex_multdiv_fast.scala 42:29]
  wire [33:0] _mac_res_d_T_7 = {2'h0,mac_res_ext[15:0],io_imd_val_q_i_0[15:0]}; // @[playground/src/ibex_multdiv_fast.scala 243:28]
  wire [33:0] _GEN_26 = _T_8 ? _mac_res_d_T_7 : mac_res_ext[33:0]; // @[playground/src/ibex_multdiv_fast.scala 242:51 243:22 245:22]
  wire [1:0] _GEN_30 = io_operator_i == 2'h0 ? 2'h0 : 2'h3; // @[playground/src/ibex_multdiv_fast.scala 257:51 263:24 268:24]
  wire [1:0] _GEN_41 = 2'h3 == mult_state_q_1 ? 2'h0 : mult_state_q_1; // @[playground/src/ibex_multdiv_fast.scala 221:21 224:25 281:22]
  wire [33:0] _GEN_48 = 2'h2 == mult_state_q_1 ? _GEN_26 : mac_res_ext[33:0]; // @[playground/src/ibex_multdiv_fast.scala 224:25]
  wire  _GEN_49 = 2'h2 == mult_state_q_1 ? _T_8 : 2'h3 == mult_state_q_1; // @[playground/src/ibex_multdiv_fast.scala 224:25]
  wire [33:0] _GEN_59 = 2'h1 == mult_state_q_1 ? _GEN_26 : _GEN_48; // @[playground/src/ibex_multdiv_fast.scala 224:25]
  wire  _GEN_61 = 2'h1 == mult_state_q_1 ? 1'h0 : _GEN_49; // @[playground/src/ibex_multdiv_fast.scala 222:21 224:25]
  wire [33:0] mac_res_d = 2'h0 == mult_state_q_1 ? mac_res_ext[33:0] : _GEN_59; // @[playground/src/ibex_multdiv_fast.scala 224:25 231:22]
  wire  mult_valid = 2'h0 == mult_state_q_1 ? 1'h0 : _GEN_61; // @[playground/src/ibex_multdiv_fast.scala 222:21 224:25]
  wire [31:0] res_adder_h = io_alu_adder_ext_i[32:1]; // @[playground/src/ibex_multdiv_fast.scala 289:36]
  wire  is_greater_equal = ~(io_imd_val_q_i_0[31] ^ op_denominator_q[31]) ? ~res_adder_h[31] : io_imd_val_q_i_0[31]; // @[playground/src/ibex_multdiv_fast.scala 295:26]
  wire [31:0] next_remainder = is_greater_equal ? res_adder_h : io_imd_val_q_i_0[31:0]; // @[playground/src/ibex_multdiv_fast.scala 291:24]
  wire [32:0] _next_quotient_T_1 = {1'h0,op_quotient_q}; // @[playground/src/ibex_multdiv_fast.scala 292:53]
  wire [62:0] _one_shift_T_2 = 63'h1 << div_counter_q; // @[playground/src/ibex_multdiv_fast.scala 294:48]
  wire [31:0] one_shift = _one_shift_T_2[31:0]; // @[playground/src/ibex_multdiv_fast.scala 294:13 61:27]
  wire [32:0] _next_quotient_T_2 = {1'h0,one_shift}; // @[playground/src/ibex_multdiv_fast.scala 292:88]
  wire [32:0] _next_quotient_T_3 = _next_quotient_T_1 | _next_quotient_T_2; // @[playground/src/ibex_multdiv_fast.scala 292:83]
  wire [32:0] next_quotient = is_greater_equal ? _next_quotient_T_3 : _next_quotient_T_1; // @[playground/src/ibex_multdiv_fast.scala 292:24]
  wire  div_sign_a = io_op_a_i[31] & io_signed_mode_i[0]; // @[playground/src/ibex_multdiv_fast.scala 297:31]
  wire  div_sign_b = io_op_b_i[31] & io_signed_mode_i[1]; // @[playground/src/ibex_multdiv_fast.scala 298:31]
  wire  div_change_sign = (div_sign_a ^ div_sign_b) & ~div_by_zero_q; // @[playground/src/ibex_multdiv_fast.scala 299:48]
  wire [4:0] _div_counter_d_T_1 = div_counter_q - 5'h1; // @[playground/src/ibex_multdiv_fast.scala 302:39]
  wire [31:0] _io_alu_operand_b_o_T = ~io_op_b_i; // @[playground/src/ibex_multdiv_fast.scala 309:29]
  wire [32:0] _io_alu_operand_b_o_T_1 = {_io_alu_operand_b_o_T,1'h1}; // @[playground/src/ibex_multdiv_fast.scala 309:28]
  wire  _T_11 = io_operator_i == 2'h2; // @[playground/src/ibex_multdiv_fast.scala 315:26]
  wire [2:0] _md_state_d_T_2 = ~io_data_ind_timing_i & io_equal_to_zero_i ? 3'h6 : 3'h1; // @[playground/src/ibex_multdiv_fast.scala 317:26]
  wire [33:0] _op_remainder_d_T_2 = {2'h0,io_op_a_i}; // @[playground/src/ibex_multdiv_fast.scala 320:30]
  wire [33:0] _GEN_87 = io_operator_i == 2'h2 ? 34'hffffffff : _op_remainder_d_T_2; // @[playground/src/ibex_multdiv_fast.scala 315:48 316:24 320:24]
  wire [2:0] _GEN_88 = io_operator_i == 2'h2 ? _md_state_d_T_2 : _md_state_d_T_2; // @[playground/src/ibex_multdiv_fast.scala 315:48 317:20 321:20]
  wire [31:0] _io_alu_operand_b_o_T_2 = ~io_op_a_i; // @[playground/src/ibex_multdiv_fast.scala 324:33]
  wire [32:0] _io_alu_operand_b_o_T_3 = {_io_alu_operand_b_o_T_2,1'h1}; // @[playground/src/ibex_multdiv_fast.scala 324:32]
  wire [33:0] _op_remainder_d_T_5 = {33'h0,op_numerator_q[31]}; // @[playground/src/ibex_multdiv_fast.scala 336:28]
  wire [31:0] _op_denominator_d_T_1 = div_sign_a ? io_alu_adder_i : io_op_b_i; // @[playground/src/ibex_multdiv_fast.scala 337:30]
  wire [4:0] _GEN_117 = 2'h2 == _GEN_144 ? 5'h1f : _div_counter_d_T_1; // @[playground/src/ibex_multdiv_fast.scala 313:21 339:21 302:22]
  wire [4:0] _GEN_126 = md_state_q ? 5'h1f : _GEN_117; // @[playground/src/ibex_multdiv_fast.scala 313:21 331:21]
  wire [4:0] div_counter_d = ~md_state_q ? 5'h1f : _GEN_126; // @[playground/src/ibex_multdiv_fast.scala 313:21 325:21]
  wire [31:0] _op_remainder_d_T_7 = op_numerator_q >> div_counter_d; // @[playground/src/ibex_multdiv_fast.scala 345:80]
  wire [33:0] _op_remainder_d_T_9 = {1'h0,next_remainder,_op_remainder_d_T_7[0]}; // @[playground/src/ibex_multdiv_fast.scala 345:28]
  wire [2:0] _md_state_d_T_7 = div_counter_q == 5'h1 ? 3'h4 : 3'h3; // @[playground/src/ibex_multdiv_fast.scala 347:24]
  wire [32:0] _io_alu_operand_a_o_T_9 = {io_imd_val_q_i_0[31:0],1'h1}; // @[playground/src/ibex_multdiv_fast.scala 349:32]
  wire [31:0] _io_alu_operand_b_o_T_9 = ~op_denominator_q; // @[playground/src/ibex_multdiv_fast.scala 350:33]
  wire [32:0] _io_alu_operand_b_o_T_10 = {_io_alu_operand_b_o_T_9,1'h1}; // @[playground/src/ibex_multdiv_fast.scala 350:32]
  wire [33:0] _op_remainder_d_T_10 = {1'h0,next_quotient}; // @[playground/src/ibex_multdiv_fast.scala 354:30]
  wire [33:0] _op_remainder_d_T_13 = {2'h0,next_remainder}; // @[playground/src/ibex_multdiv_fast.scala 357:30]
  wire [33:0] _GEN_90 = _T_11 ? _op_remainder_d_T_10 : _op_remainder_d_T_13; // @[playground/src/ibex_multdiv_fast.scala 353:48 354:24 357:24]
  wire [33:0] _op_remainder_d_T_16 = {2'h0,io_alu_adder_i}; // @[playground/src/ibex_multdiv_fast.scala 366:59]
  wire [33:0] _op_remainder_d_T_17 = div_change_sign ? _op_remainder_d_T_16 : io_imd_val_q_i_0; // @[playground/src/ibex_multdiv_fast.scala 366:30]
  wire [33:0] _op_remainder_d_T_21 = div_sign_a ? _op_remainder_d_T_16 : io_imd_val_q_i_0; // @[playground/src/ibex_multdiv_fast.scala 368:30]
  wire [33:0] _GEN_91 = _T_11 ? _op_remainder_d_T_17 : _op_remainder_d_T_21; // @[playground/src/ibex_multdiv_fast.scala 365:48 366:24 368:24]
  wire [31:0] _io_alu_operand_b_o_T_15 = ~io_imd_val_q_i_0[31:0]; // @[playground/src/ibex_multdiv_fast.scala 371:33]
  wire [32:0] _io_alu_operand_b_o_T_16 = {_io_alu_operand_b_o_T_15,1'h1}; // @[playground/src/ibex_multdiv_fast.scala 371:32]
  wire  _GEN_92 = 3'h6 == _GEN_146 ? 1'h0 : md_state_q; // @[playground/src/ibex_multdiv_fast.scala 313:21 374:18 305:22]
  wire [2:0] _GEN_95 = 3'h5 == _GEN_146 ? 3'h6 : {{2'd0}, _GEN_92}; // @[playground/src/ibex_multdiv_fast.scala 313:21 364:18]
  wire [33:0] _GEN_96 = 3'h5 == _GEN_146 ? _GEN_91 : io_imd_val_q_i_0; // @[playground/src/ibex_multdiv_fast.scala 313:21 303:22]
  wire [32:0] _GEN_98 = 3'h5 == _GEN_146 ? _io_alu_operand_b_o_T_16 : _io_alu_operand_b_o_T_1; // @[playground/src/ibex_multdiv_fast.scala 313:21 309:22 371:26]
  wire  _GEN_100 = 3'h5 == _GEN_146 ? 1'h0 : 3'h6 == _GEN_146; // @[playground/src/ibex_multdiv_fast.scala 313:21 310:22]
  wire [33:0] _GEN_101 = 3'h4 == _GEN_146 ? _GEN_90 : _GEN_96; // @[playground/src/ibex_multdiv_fast.scala 313:21]
  wire [32:0] _GEN_102 = 3'h4 == _GEN_146 ? _io_alu_operand_a_o_T_9 : 33'h1; // @[playground/src/ibex_multdiv_fast.scala 313:21 359:26]
  wire [32:0] _GEN_103 = 3'h4 == _GEN_146 ? _io_alu_operand_b_o_T_10 : _GEN_98; // @[playground/src/ibex_multdiv_fast.scala 313:21 360:26]
  wire [2:0] _GEN_104 = 3'h4 == _GEN_146 ? 3'h5 : _GEN_95; // @[playground/src/ibex_multdiv_fast.scala 313:21 361:18]
  wire  _GEN_106 = 3'h4 == _GEN_146 ? 1'h0 : _GEN_100; // @[playground/src/ibex_multdiv_fast.scala 313:21 310:22]
  wire [33:0] _GEN_107 = 2'h3 == _GEN_144 ? _op_remainder_d_T_9 : _GEN_101; // @[playground/src/ibex_multdiv_fast.scala 313:21 345:22]
  wire [31:0] _GEN_108 = 2'h3 == _GEN_144 ? next_quotient[31:0] : op_quotient_q; // @[playground/src/ibex_multdiv_fast.scala 313:21 346:21 304:22]
  wire [2:0] _GEN_109 = 2'h3 == _GEN_144 ? _md_state_d_T_7 : _GEN_104; // @[playground/src/ibex_multdiv_fast.scala 313:21 347:18]
  wire [32:0] _GEN_110 = 2'h3 == _GEN_144 ? _io_alu_operand_a_o_T_9 : _GEN_102; // @[playground/src/ibex_multdiv_fast.scala 313:21 349:26]
  wire [32:0] _GEN_111 = 2'h3 == _GEN_144 ? _io_alu_operand_b_o_T_10 : _GEN_103; // @[playground/src/ibex_multdiv_fast.scala 313:21 350:26]
  wire  _GEN_113 = 2'h3 == _GEN_144 ? 1'h0 : _GEN_106; // @[playground/src/ibex_multdiv_fast.scala 313:21 310:22]
  wire [33:0] _GEN_114 = 2'h2 == _GEN_144 ? _op_remainder_d_T_5 : _GEN_107; // @[playground/src/ibex_multdiv_fast.scala 313:21 336:22]
  wire [31:0] _GEN_115 = 2'h2 == _GEN_144 ? _op_denominator_d_T_1 : op_denominator_q; // @[playground/src/ibex_multdiv_fast.scala 313:21 307:22 337:24]
  wire [2:0] _GEN_116 = 2'h2 == _GEN_144 ? 3'h3 : _GEN_109; // @[playground/src/ibex_multdiv_fast.scala 313:21 338:18]
  wire [32:0] _GEN_118 = 2'h2 == _GEN_144 ? 33'h1 : _GEN_110; // @[playground/src/ibex_multdiv_fast.scala 313:21 340:26]
  wire [32:0] _GEN_119 = 2'h2 == _GEN_144 ? _io_alu_operand_b_o_T_1 : _GEN_111; // @[playground/src/ibex_multdiv_fast.scala 313:21 341:26]
  wire  _GEN_122 = 2'h2 == _GEN_144 ? 1'h0 : _GEN_113; // @[playground/src/ibex_multdiv_fast.scala 313:21 310:22]
  wire [2:0] _GEN_125 = md_state_q ? 3'h2 : _GEN_116; // @[playground/src/ibex_multdiv_fast.scala 313:21 330:18]
  wire [32:0] _GEN_127 = md_state_q ? 33'h1 : _GEN_118; // @[playground/src/ibex_multdiv_fast.scala 313:21 332:26]
  wire [32:0] _GEN_128 = md_state_q ? _io_alu_operand_b_o_T_3 : _GEN_119; // @[playground/src/ibex_multdiv_fast.scala 313:21 333:26]
  wire [33:0] _GEN_129 = md_state_q ? io_imd_val_q_i_0 : _GEN_114; // @[playground/src/ibex_multdiv_fast.scala 313:21 303:22]
  wire [31:0] _GEN_130 = md_state_q ? op_denominator_q : _GEN_115; // @[playground/src/ibex_multdiv_fast.scala 313:21 307:22]
  wire  _GEN_132 = md_state_q ? 1'h0 : _GEN_122; // @[playground/src/ibex_multdiv_fast.scala 313:21 310:22]
  wire [33:0] op_remainder_d = ~md_state_q ? _GEN_87 : _GEN_129; // @[playground/src/ibex_multdiv_fast.scala 313:21]
  wire [2:0] _GEN_134 = ~md_state_q ? _GEN_88 : _GEN_125; // @[playground/src/ibex_multdiv_fast.scala 313:21]
  wire [31:0] op_denominator_d = ~md_state_q ? op_denominator_q : _GEN_130; // @[playground/src/ibex_multdiv_fast.scala 313:21 307:22]
  wire  div_valid = ~md_state_q ? 1'h0 : _GEN_132; // @[playground/src/ibex_multdiv_fast.scala 313:21 310:22]
  wire  md_state_d = _GEN_134[0]; // @[playground/src/ibex_multdiv_fast.scala 39:28]
  assign io_alu_operand_a_o = ~md_state_q ? 33'h1 : _GEN_127; // @[playground/src/ibex_multdiv_fast.scala 313:21 323:26]
  assign io_alu_operand_b_o = ~md_state_q ? _io_alu_operand_b_o_T_3 : _GEN_128; // @[playground/src/ibex_multdiv_fast.scala 313:21 324:26]
  assign io_imd_val_d_o_0 = io_div_sel_i ? op_remainder_d : mac_res_d; // @[playground/src/ibex_multdiv_fast.scala 386:27]
  assign io_imd_val_d_o_1 = {2'h0,op_denominator_d}; // @[playground/src/ibex_multdiv_fast.scala 387:27]
  assign io_imd_val_we_o_0 = mult_en_internal | div_en_internal; // @[playground/src/ibex_multdiv_fast.scala 96:34]
  assign io_imd_val_we_o_1 = io_div_en_i & ~div_hold; // @[playground/src/ibex_multdiv_fast.scala 88:34]
  assign io_multdiv_result_o = io_div_en_i ? io_imd_val_q_i_0[31:0] : mac_res_d[31:0]; // @[playground/src/ibex_multdiv_fast.scala 383:29]
  assign io_valid_o = mult_valid | div_valid; // @[playground/src/ibex_multdiv_fast.scala 385:29]
  always @(posedge clock) begin
    if (reset) begin // @[playground/src/ibex_multdiv_fast.scala 38:27]
      md_state_q <= 1'h0; // @[playground/src/ibex_multdiv_fast.scala 38:27]
    end else begin
      md_state_q <= md_state_d; // @[playground/src/ibex_multdiv_fast.scala 94:14]
    end
    if (reset) begin // @[playground/src/ibex_multdiv_fast.scala 63:33]
      op_denominator_q <= 32'h0; // @[playground/src/ibex_multdiv_fast.scala 63:33]
    end else begin
      op_denominator_q <= io_imd_val_q_i_1[31:0]; // @[playground/src/ibex_multdiv_fast.scala 98:20]
    end
    if (reset) begin // @[playground/src/ibex_multdiv_fast.scala 64:31]
      op_numerator_q <= 32'h0; // @[playground/src/ibex_multdiv_fast.scala 64:31]
    end else if (!(~md_state_q)) begin // @[playground/src/ibex_multdiv_fast.scala 313:21]
      if (md_state_q) begin // @[playground/src/ibex_multdiv_fast.scala 313:21]
        if (div_sign_a) begin // @[playground/src/ibex_multdiv_fast.scala 329:28]
          op_numerator_q <= io_alu_adder_i;
        end else begin
          op_numerator_q <= io_op_a_i;
        end
      end
    end
    if (reset) begin // @[playground/src/ibex_multdiv_fast.scala 65:30]
      op_quotient_q <= 32'h0; // @[playground/src/ibex_multdiv_fast.scala 65:30]
    end else if (!(~md_state_q)) begin // @[playground/src/ibex_multdiv_fast.scala 313:21]
      if (md_state_q) begin // @[playground/src/ibex_multdiv_fast.scala 313:21]
        op_quotient_q <= 32'h0; // @[playground/src/ibex_multdiv_fast.scala 328:21]
      end else if (!(2'h2 == _GEN_144)) begin // @[playground/src/ibex_multdiv_fast.scala 313:21]
        op_quotient_q <= _GEN_108;
      end
    end
    if (reset) begin // @[playground/src/ibex_multdiv_fast.scala 79:30]
      div_by_zero_q <= 1'h0; // @[playground/src/ibex_multdiv_fast.scala 79:30]
    end else if (~md_state_q) begin // @[playground/src/ibex_multdiv_fast.scala 313:21]
      if (io_operator_i == 2'h2) begin // @[playground/src/ibex_multdiv_fast.scala 315:48]
        div_by_zero_q <= io_equal_to_zero_i; // @[playground/src/ibex_multdiv_fast.scala 318:23]
      end
    end
    if (reset) begin // @[playground/src/ibex_multdiv_fast.scala 83:30]
      div_counter_q <= 5'h0; // @[playground/src/ibex_multdiv_fast.scala 83:30]
    end else if (~md_state_q) begin // @[playground/src/ibex_multdiv_fast.scala 313:21]
      div_counter_q <= 5'h1f; // @[playground/src/ibex_multdiv_fast.scala 325:21]
    end else if (md_state_q) begin // @[playground/src/ibex_multdiv_fast.scala 313:21]
      div_counter_q <= 5'h1f; // @[playground/src/ibex_multdiv_fast.scala 331:21]
    end else if (2'h2 == _GEN_144) begin // @[playground/src/ibex_multdiv_fast.scala 313:21]
      div_counter_q <= 5'h1f; // @[playground/src/ibex_multdiv_fast.scala 339:21]
    end else begin
      div_counter_q <= _div_counter_d_T_1; // @[playground/src/ibex_multdiv_fast.scala 302:22]
    end
    if (reset) begin // @[playground/src/ibex_multdiv_fast.scala 210:31]
      mult_state_q_1 <= 2'h0; // @[playground/src/ibex_multdiv_fast.scala 210:31]
    end else if (2'h0 == mult_state_q_1) begin // @[playground/src/ibex_multdiv_fast.scala 224:25]
      mult_state_q_1 <= 2'h1; // @[playground/src/ibex_multdiv_fast.scala 232:22]
    end else if (2'h1 == mult_state_q_1) begin // @[playground/src/ibex_multdiv_fast.scala 224:25]
      mult_state_q_1 <= 2'h2; // @[playground/src/ibex_multdiv_fast.scala 247:22]
    end else if (2'h2 == mult_state_q_1) begin // @[playground/src/ibex_multdiv_fast.scala 224:25]
      mult_state_q_1 <= _GEN_30;
    end else begin
      mult_state_q_1 <= _GEN_41;
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
  md_state_q = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  op_denominator_q = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  op_numerator_q = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  op_quotient_q = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  div_by_zero_q = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  div_counter_q = _RAND_5[4:0];
  _RAND_6 = {1{`RANDOM}};
  mult_state_q_1 = _RAND_6[1:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
