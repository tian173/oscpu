module ibex_multdiv_slow(
  input         clk_i,
  input         rst_ni,
  input         mult_en_i, // @[playground/src/ibex_multdiv_slow.scala 6:14]
  input         div_en_i, // @[playground/src/ibex_multdiv_slow.scala 6:14]
  input         mult_sel_i, // @[playground/src/ibex_multdiv_slow.scala 6:14]
  input         div_sel_i, // @[playground/src/ibex_multdiv_slow.scala 6:14]
  input  [1:0]  operator_i, // @[playground/src/ibex_multdiv_slow.scala 6:14]
  input  [1:0]  signed_mode_i, // @[playground/src/ibex_multdiv_slow.scala 6:14]
  input  [31:0] op_a_i, // @[playground/src/ibex_multdiv_slow.scala 6:14]
  input  [31:0] op_b_i, // @[playground/src/ibex_multdiv_slow.scala 6:14]
  input  [33:0] alu_adder_ext_i, // @[playground/src/ibex_multdiv_slow.scala 6:14]
  input  [31:0] alu_adder_i, // @[playground/src/ibex_multdiv_slow.scala 6:14]
  input         equal_to_zero_i, // @[playground/src/ibex_multdiv_slow.scala 6:14]
  input         data_ind_timing_i, // @[playground/src/ibex_multdiv_slow.scala 6:14]
  output [32:0] alu_operand_a_o, // @[playground/src/ibex_multdiv_slow.scala 6:14]
  output [32:0] alu_operand_b_o, // @[playground/src/ibex_multdiv_slow.scala 6:14]
  input  [33:0] imd_val_q_i_0, // @[playground/src/ibex_multdiv_slow.scala 6:14]
  input  [33:0] imd_val_q_i_1, // @[playground/src/ibex_multdiv_slow.scala 6:14]
  output [33:0] imd_val_d_o_0, // @[playground/src/ibex_multdiv_slow.scala 6:14]
  output [33:0] imd_val_d_o_1, // @[playground/src/ibex_multdiv_slow.scala 6:14]
  output        imd_val_we_o_0, // @[playground/src/ibex_multdiv_slow.scala 6:14]
  output        imd_val_we_o_1, // @[playground/src/ibex_multdiv_slow.scala 6:14]
  input         multdiv_ready_id_i, // @[playground/src/ibex_multdiv_slow.scala 6:14]
  output [31:0] multdiv_result_o, // @[playground/src/ibex_multdiv_slow.scala 6:14]
  output        valid_o // @[playground/src/ibex_multdiv_slow.scala 6:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [63:0] _RAND_2;
  reg [63:0] _RAND_3;
  reg [31:0] _RAND_4;
`endif // RANDOMIZE_REG_INIT
  reg [2:0] md_state_q; // @[playground/src/ibex_multdiv_slow.scala 32:24]
  reg [4:0] multdiv_count_q; // @[playground/src/ibex_multdiv_slow.scala 38:30]
  reg [32:0] op_b_shift_q; // @[playground/src/ibex_multdiv_slow.scala 40:27]
  reg [32:0] op_a_shift_q; // @[playground/src/ibex_multdiv_slow.scala 42:27]
  reg  div_by_zero_q; // @[playground/src/ibex_multdiv_slow.scala 60:28]
  wire [32:0] res_adder_l = alu_adder_ext_i[32:0]; // @[playground/src/ibex_multdiv_slow.scala 64:34]
  wire [32:0] res_adder_h = alu_adder_ext_i[33:1]; // @[playground/src/ibex_multdiv_slow.scala 65:34]
  wire  _T_10 = 3'h0 == md_state_q; // @[playground/src/ibex_multdiv_slow.scala 131:23]
  wire  _T_11 = 2'h0 == operator_i; // @[playground/src/ibex_multdiv_slow.scala 133:34]
  wire  sign_a = op_a_i[31] & signed_mode_i[0]; // @[playground/src/ibex_multdiv_slow.scala 109:28]
  wire [32:0] op_a_ext = {sign_a,op_a_i}; // @[playground/src/ibex_multdiv_slow.scala 112:17]
  wire  _accum_window_d_T_3 = ~(op_a_ext[32] & op_b_i[0]); // @[playground/src/ibex_multdiv_slow.scala 136:51]
  wire [31:0] _accum_window_d_T_7 = op_b_i[0] ? 32'hffffffff : 32'h0; // @[playground/src/ibex_multdiv_slow.scala 136:106]
  wire [31:0] _accum_window_d_T_8 = op_a_ext[31:0] & _accum_window_d_T_7; // @[playground/src/ibex_multdiv_slow.scala 136:100]
  wire [32:0] _accum_window_d_T_9 = {_accum_window_d_T_3,_accum_window_d_T_8}; // @[playground/src/ibex_multdiv_slow.scala 136:42]
  wire  _T_12 = 2'h1 == operator_i; // @[playground/src/ibex_multdiv_slow.scala 133:34]
  wire [30:0] _accum_window_d_T_17 = op_b_i[0] ? 31'h7fffffff : 31'h0; // @[playground/src/ibex_multdiv_slow.scala 142:120]
  wire [30:0] _accum_window_d_T_18 = op_a_ext[31:1] & _accum_window_d_T_17; // @[playground/src/ibex_multdiv_slow.scala 142:114]
  wire [32:0] _accum_window_d_T_19 = {1'h1,_accum_window_d_T_3,_accum_window_d_T_18}; // @[playground/src/ibex_multdiv_slow.scala 142:42]
  wire  _T_13 = 2'h2 == operator_i; // @[playground/src/ibex_multdiv_slow.scala 133:34]
  wire  _T_14 = 2'h3 == operator_i; // @[playground/src/ibex_multdiv_slow.scala 133:34]
  wire [32:0] accum_window_q = imd_val_q_i_0[32:0]; // @[playground/src/ibex_multdiv_slow.scala 69:36]
  wire [32:0] _GEN_14 = 2'h3 == operator_i ? op_a_ext : accum_window_q; // @[playground/src/ibex_multdiv_slow.scala 123:19 133:34 153:36]
  wire [32:0] _GEN_16 = 2'h2 == operator_i ? 33'h1ffffffff : _GEN_14; // @[playground/src/ibex_multdiv_slow.scala 133:34 147:36]
  wire [32:0] _GEN_20 = 2'h1 == operator_i ? _accum_window_d_T_19 : _GEN_16; // @[playground/src/ibex_multdiv_slow.scala 133:34 142:36]
  wire [32:0] _GEN_25 = 2'h0 == operator_i ? _accum_window_d_T_9 : _GEN_20; // @[playground/src/ibex_multdiv_slow.scala 133:34 136:36]
  wire  _T_15 = 3'h1 == md_state_q; // @[playground/src/ibex_multdiv_slow.scala 131:23]
  wire  _T_16 = 3'h2 == md_state_q; // @[playground/src/ibex_multdiv_slow.scala 131:23]
  wire [31:0] op_numerator_q = imd_val_q_i_1[31:0]; // @[playground/src/ibex_multdiv_slow.scala 73:36]
  wire [32:0] _accum_window_d_T_23 = {32'h0,op_numerator_q[31]}; // @[playground/src/ibex_multdiv_slow.scala 165:34]
  wire  _T_22 = _T_13 | _T_14; // @[playground/src/ibex_multdiv_slow.scala 171:34]
  wire  is_greater_equal = accum_window_q[31] == op_b_shift_q[31] ? ~res_adder_h[31] : accum_window_q[31]; // @[playground/src/ibex_multdiv_slow.scala 115:24]
  wire [31:0] next_remainder = is_greater_equal ? res_adder_h[31:0] : accum_window_q[31:0]; // @[playground/src/ibex_multdiv_slow.scala 117:23]
  wire [4:0] _multdiv_count_d_T_1 = multdiv_count_q - 5'h1; // @[playground/src/ibex_multdiv_slow.scala 170:48]
  wire [4:0] _GEN_76 = 3'h3 == md_state_q ? _multdiv_count_d_T_1 : multdiv_count_q; // @[playground/src/ibex_multdiv_slow.scala 122:19 131:23 170:29]
  wire [4:0] _GEN_87 = 3'h2 == md_state_q ? multdiv_count_q : _GEN_76; // @[playground/src/ibex_multdiv_slow.scala 122:19 131:23]
  wire [4:0] _GEN_97 = 3'h1 == md_state_q ? multdiv_count_q : _GEN_87; // @[playground/src/ibex_multdiv_slow.scala 122:19 131:23]
  wire [4:0] _GEN_106 = 3'h0 == md_state_q ? 5'h1f : _GEN_97; // @[playground/src/ibex_multdiv_slow.scala 131:23 157:31]
  wire [4:0] multdiv_count_d = mult_sel_i | div_sel_i ? _GEN_106 : multdiv_count_q; // @[playground/src/ibex_multdiv_slow.scala 122:19 130:37]
  wire [31:0] _accum_window_d_T_25 = op_numerator_q >> multdiv_count_d; // @[playground/src/ibex_multdiv_slow.scala 185:79]
  wire [32:0] _accum_window_d_T_27 = {next_remainder,_accum_window_d_T_25[0]}; // @[playground/src/ibex_multdiv_slow.scala 185:41]
  wire [32:0] _GEN_29 = _T_13 | _T_14 ? _accum_window_d_T_27 : accum_window_q; // @[playground/src/ibex_multdiv_slow.scala 123:19 171:34 185:36]
  wire [32:0] _GEN_34 = _T_12 ? res_adder_h : _GEN_29; // @[playground/src/ibex_multdiv_slow.scala 171:34 179:36]
  wire [32:0] _GEN_40 = _T_11 ? res_adder_l : _GEN_34; // @[playground/src/ibex_multdiv_slow.scala 171:34 173:36]
  wire [63:0] _one_shift_T_2 = 64'h1 << multdiv_count_q; // @[playground/src/ibex_multdiv_slow.scala 116:47]
  wire [32:0] one_shift = _one_shift_T_2[32:0]; // @[playground/src/ibex_multdiv_slow.scala 116:12 46:21]
  wire [32:0] _next_quotient_T_1 = op_a_shift_q | one_shift; // @[playground/src/ibex_multdiv_slow.scala 118:62]
  wire [32:0] next_quotient = is_greater_equal ? _next_quotient_T_1 : op_a_shift_q; // @[playground/src/ibex_multdiv_slow.scala 118:22]
  wire [32:0] _accum_window_d_T_29 = {1'h0,next_remainder}; // @[playground/src/ibex_multdiv_slow.scala 212:42]
  wire [32:0] _GEN_46 = _T_14 ? _accum_window_d_T_29 : accum_window_q; // @[playground/src/ibex_multdiv_slow.scala 123:19 194:34 212:36]
  wire [32:0] _GEN_50 = _T_13 ? next_quotient : _GEN_46; // @[playground/src/ibex_multdiv_slow.scala 194:34 206:36]
  wire [32:0] _GEN_54 = _T_12 ? res_adder_l : _GEN_50; // @[playground/src/ibex_multdiv_slow.scala 194:34 201:36]
  wire [32:0] _GEN_59 = _T_11 ? res_adder_l : _GEN_54; // @[playground/src/ibex_multdiv_slow.scala 194:34 196:36]
  wire  _T_28 = 3'h5 == md_state_q; // @[playground/src/ibex_multdiv_slow.scala 131:23]
  wire  sign_b = op_b_i[31] & signed_mode_i[1]; // @[playground/src/ibex_multdiv_slow.scala 110:28]
  wire  div_change_sign = (sign_a ^ sign_b) & ~div_by_zero_q; // @[playground/src/ibex_multdiv_slow.scala 119:40]
  wire [32:0] _accum_window_d_T_31 = {1'h0,alu_adder_i}; // @[playground/src/ibex_multdiv_slow.scala 223:71]
  wire [32:0] _accum_window_d_T_32 = div_change_sign ? _accum_window_d_T_31 : accum_window_q; // @[playground/src/ibex_multdiv_slow.scala 223:42]
  wire [32:0] _accum_window_d_T_35 = sign_a ? _accum_window_d_T_31 : accum_window_q; // @[playground/src/ibex_multdiv_slow.scala 226:42]
  wire [32:0] _GEN_64 = _T_14 ? _accum_window_d_T_35 : accum_window_q; // @[playground/src/ibex_multdiv_slow.scala 123:19 221:34 226:36]
  wire [32:0] _GEN_65 = _T_13 ? _accum_window_d_T_32 : _GEN_64; // @[playground/src/ibex_multdiv_slow.scala 221:34 223:36]
  wire [32:0] _GEN_69 = 3'h5 == md_state_q ? _GEN_65 : accum_window_q; // @[playground/src/ibex_multdiv_slow.scala 123:19 131:23]
  wire [32:0] _GEN_71 = 3'h4 == md_state_q ? _GEN_59 : _GEN_69; // @[playground/src/ibex_multdiv_slow.scala 131:23]
  wire [32:0] _GEN_77 = 3'h3 == md_state_q ? _GEN_40 : _GEN_71; // @[playground/src/ibex_multdiv_slow.scala 131:23]
  wire [32:0] _GEN_84 = 3'h2 == md_state_q ? _accum_window_d_T_23 : _GEN_77; // @[playground/src/ibex_multdiv_slow.scala 131:23 165:28]
  wire [32:0] _GEN_95 = 3'h1 == md_state_q ? accum_window_q : _GEN_84; // @[playground/src/ibex_multdiv_slow.scala 123:19 131:23]
  wire [32:0] _GEN_102 = 3'h0 == md_state_q ? _GEN_25 : _GEN_95; // @[playground/src/ibex_multdiv_slow.scala 131:23]
  wire [32:0] accum_window_d = mult_sel_i | div_sel_i ? _GEN_102 : accum_window_q; // @[playground/src/ibex_multdiv_slow.scala 123:19 130:37]
  wire  _multdiv_hold_T = ~multdiv_ready_id_i; // @[playground/src/ibex_multdiv_slow.scala 198:37]
  wire  _GEN_56 = _T_12 & _multdiv_hold_T; // @[playground/src/ibex_multdiv_slow.scala 128:19 194:34 203:34]
  wire  _GEN_61 = _T_11 ? ~multdiv_ready_id_i : _GEN_56; // @[playground/src/ibex_multdiv_slow.scala 194:34 198:34]
  wire  _GEN_67 = 3'h6 == md_state_q & _multdiv_hold_T; // @[playground/src/ibex_multdiv_slow.scala 128:19 131:23 232:26]
  wire  _GEN_70 = 3'h5 == md_state_q ? 1'h0 : _GEN_67; // @[playground/src/ibex_multdiv_slow.scala 128:19 131:23]
  wire  _GEN_73 = 3'h4 == md_state_q ? _GEN_61 : _GEN_70; // @[playground/src/ibex_multdiv_slow.scala 131:23]
  wire  _GEN_83 = 3'h3 == md_state_q ? 1'h0 : _GEN_73; // @[playground/src/ibex_multdiv_slow.scala 128:19 131:23]
  wire  _GEN_91 = 3'h2 == md_state_q ? 1'h0 : _GEN_83; // @[playground/src/ibex_multdiv_slow.scala 128:19 131:23]
  wire  _GEN_100 = 3'h1 == md_state_q ? 1'h0 : _GEN_91; // @[playground/src/ibex_multdiv_slow.scala 128:19 131:23]
  wire  _GEN_110 = 3'h0 == md_state_q ? 1'h0 : _GEN_100; // @[playground/src/ibex_multdiv_slow.scala 128:19 131:23]
  wire  multdiv_hold = (mult_sel_i | div_sel_i) & _GEN_110; // @[playground/src/ibex_multdiv_slow.scala 128:19 130:37]
  wire  _imd_val_we_o_0_T = ~multdiv_hold; // @[playground/src/ibex_multdiv_slow.scala 68:23]
  wire [31:0] _op_numerator_d_T_1 = sign_a ? alu_adder_i : op_a_i; // @[playground/src/ibex_multdiv_slow.scala 161:33]
  wire [31:0] _GEN_93 = 3'h1 == md_state_q ? _op_numerator_d_T_1 : op_numerator_q; // @[playground/src/ibex_multdiv_slow.scala 126:19 131:23 161:28]
  wire [31:0] _GEN_107 = 3'h0 == md_state_q ? op_numerator_q : _GEN_93; // @[playground/src/ibex_multdiv_slow.scala 126:19 131:23]
  wire [31:0] op_numerator_d = mult_sel_i | div_sel_i ? _GEN_107 : op_numerator_q; // @[playground/src/ibex_multdiv_slow.scala 126:19 130:37]
  wire [31:0] _alu_operand_b_o_T_1 = ~op_b_shift_q[31:0]; // @[playground/src/ibex_multdiv_slow.scala 76:27]
  wire [32:0] _alu_operand_b_o_T_2 = {_alu_operand_b_o_T_1,1'h1}; // @[playground/src/ibex_multdiv_slow.scala 76:26]
  wire  _alu_operand_b_o_T_3 = md_state_q == 3'h4; // @[playground/src/ibex_multdiv_slow.scala 82:46]
  wire  _op_a_bw_last_pp_T_2 = op_a_shift_q[32] & op_b_shift_q[0]; // @[playground/src/ibex_multdiv_slow.scala 107:48]
  wire [31:0] b_0 = op_b_shift_q[0] ? 32'hffffffff : 32'h0; // @[playground/src/ibex_multdiv_slow.scala 105:16]
  wire [31:0] _op_a_bw_last_pp_T_4 = op_a_shift_q[31:0] & b_0; // @[playground/src/ibex_multdiv_slow.scala 107:90]
  wire [31:0] _op_a_bw_last_pp_T_5 = ~_op_a_bw_last_pp_T_4; // @[playground/src/ibex_multdiv_slow.scala 107:68]
  wire [32:0] op_a_bw_last_pp = {_op_a_bw_last_pp_T_2,_op_a_bw_last_pp_T_5}; // @[playground/src/ibex_multdiv_slow.scala 107:22]
  wire  _op_a_bw_pp_T_3 = ~_op_a_bw_last_pp_T_2; // @[playground/src/ibex_multdiv_slow.scala 106:26]
  wire [32:0] op_a_bw_pp = {_op_a_bw_pp_T_3,_op_a_bw_last_pp_T_4}; // @[playground/src/ibex_multdiv_slow.scala 106:17]
  wire [32:0] _alu_operand_b_o_T_4 = md_state_q == 3'h4 ? op_a_bw_last_pp : op_a_bw_pp; // @[playground/src/ibex_multdiv_slow.scala 82:34]
  wire [31:0] _alu_operand_b_o_T_5 = ~op_b_i; // @[playground/src/ibex_multdiv_slow.scala 88:43]
  wire [32:0] _alu_operand_b_o_T_6 = {_alu_operand_b_o_T_5,1'h1}; // @[playground/src/ibex_multdiv_slow.scala 88:42]
  wire [31:0] _alu_operand_b_o_T_7 = ~op_a_i; // @[playground/src/ibex_multdiv_slow.scala 92:43]
  wire [32:0] _alu_operand_b_o_T_8 = {_alu_operand_b_o_T_7,1'h1}; // @[playground/src/ibex_multdiv_slow.scala 92:42]
  wire [31:0] _alu_operand_b_o_T_12 = ~accum_window_q[31:0]; // @[playground/src/ibex_multdiv_slow.scala 100:43]
  wire [32:0] _alu_operand_b_o_T_13 = {_alu_operand_b_o_T_12,1'h1}; // @[playground/src/ibex_multdiv_slow.scala 100:42]
  wire [32:0] _GEN_0 = _T_28 ? 33'h1 : accum_window_q; // @[playground/src/ibex_multdiv_slow.scala 75:20 85:27 99:36]
  wire [32:0] _GEN_1 = _T_28 ? _alu_operand_b_o_T_13 : _alu_operand_b_o_T_2; // @[playground/src/ibex_multdiv_slow.scala 85:27 100:36 76:20]
  wire [32:0] _GEN_2 = _T_16 ? 33'h1 : _GEN_0; // @[playground/src/ibex_multdiv_slow.scala 85:27 95:36]
  wire [32:0] _GEN_3 = _T_16 ? _alu_operand_b_o_T_6 : _GEN_1; // @[playground/src/ibex_multdiv_slow.scala 85:27 96:36]
  wire [32:0] _GEN_4 = _T_15 ? 33'h1 : _GEN_2; // @[playground/src/ibex_multdiv_slow.scala 85:27 91:36]
  wire [32:0] _GEN_5 = _T_15 ? _alu_operand_b_o_T_8 : _GEN_3; // @[playground/src/ibex_multdiv_slow.scala 85:27 92:36]
  wire [32:0] _GEN_6 = _T_10 ? 33'h1 : _GEN_4; // @[playground/src/ibex_multdiv_slow.scala 85:27 87:36]
  wire [32:0] _GEN_7 = _T_10 ? _alu_operand_b_o_T_6 : _GEN_5; // @[playground/src/ibex_multdiv_slow.scala 85:27 88:36]
  wire [32:0] _GEN_8 = _T_22 ? _GEN_6 : accum_window_q; // @[playground/src/ibex_multdiv_slow.scala 75:20 77:22]
  wire [32:0] _GEN_9 = _T_22 ? _GEN_7 : _alu_operand_b_o_T_2; // @[playground/src/ibex_multdiv_slow.scala 76:20 77:22]
  wire [32:0] _GEN_10 = _T_12 ? _alu_operand_b_o_T_4 : _GEN_9; // @[playground/src/ibex_multdiv_slow.scala 77:22 82:28]
  wire [32:0] _GEN_11 = _T_12 ? accum_window_q : _GEN_8; // @[playground/src/ibex_multdiv_slow.scala 75:20 77:22]
  wire [32:0] _GEN_12 = _T_11 ? op_a_bw_pp : _GEN_10; // @[playground/src/ibex_multdiv_slow.scala 77:22 79:28]
  wire [32:0] _GEN_13 = _T_11 ? accum_window_q : _GEN_11; // @[playground/src/ibex_multdiv_slow.scala 75:20 77:22]
  wire [32:0] op_b_ext = {sign_b,op_b_i}; // @[playground/src/ibex_multdiv_slow.scala 113:17]
  wire [33:0] _op_a_shift_d_T = {op_a_ext, 1'h0}; // @[playground/src/ibex_multdiv_slow.scala 135:46]
  wire [32:0] _op_b_shift_d_T = {{1'd0}, op_b_ext[32:1]}; // @[playground/src/ibex_multdiv_slow.scala 137:46]
  wire  _md_state_d_T = ~data_ind_timing_i; // @[playground/src/ibex_multdiv_slow.scala 138:39]
  wire [2:0] _md_state_d_T_4 = ~data_ind_timing_i & _op_b_shift_d_T == 33'h0 ? 3'h4 : 3'h3; // @[playground/src/ibex_multdiv_slow.scala 138:38]
  wire [2:0] _md_state_d_T_7 = _md_state_d_T & equal_to_zero_i ? 3'h6 : 3'h1; // @[playground/src/ibex_multdiv_slow.scala 148:38]
  wire [2:0] _GEN_15 = 2'h3 == operator_i ? _md_state_d_T_7 : md_state_q; // @[playground/src/ibex_multdiv_slow.scala 127:19 133:34 154:32]
  wire [2:0] _GEN_17 = 2'h2 == operator_i ? _md_state_d_T_7 : _GEN_15; // @[playground/src/ibex_multdiv_slow.scala 133:34 148:32]
  wire  _GEN_18 = 2'h2 == operator_i ? equal_to_zero_i : div_by_zero_q; // @[playground/src/ibex_multdiv_slow.scala 129:19 133:34 149:36]
  wire [32:0] _GEN_19 = 2'h1 == operator_i ? op_a_ext : op_a_shift_q; // @[playground/src/ibex_multdiv_slow.scala 125:19 133:34 141:34]
  wire [32:0] _GEN_21 = 2'h1 == operator_i ? _op_b_shift_d_T : op_b_shift_q; // @[playground/src/ibex_multdiv_slow.scala 124:19 133:34 143:34]
  wire [2:0] _GEN_22 = 2'h1 == operator_i ? 3'h3 : _GEN_17; // @[playground/src/ibex_multdiv_slow.scala 133:34 144:32]
  wire  _GEN_23 = 2'h1 == operator_i ? div_by_zero_q : _GEN_18; // @[playground/src/ibex_multdiv_slow.scala 129:19 133:34]
  wire [33:0] _GEN_24 = 2'h0 == operator_i ? _op_a_shift_d_T : {{1'd0}, _GEN_19}; // @[playground/src/ibex_multdiv_slow.scala 133:34 135:34]
  wire [32:0] _GEN_26 = 2'h0 == operator_i ? _op_b_shift_d_T : _GEN_21; // @[playground/src/ibex_multdiv_slow.scala 133:34 137:34]
  wire [2:0] _GEN_27 = 2'h0 == operator_i ? _md_state_d_T_4 : _GEN_22; // @[playground/src/ibex_multdiv_slow.scala 133:34 138:32]
  wire  _GEN_28 = 2'h0 == operator_i ? div_by_zero_q : _GEN_23; // @[playground/src/ibex_multdiv_slow.scala 129:19 133:34]
  wire [32:0] _op_b_shift_d_T_4 = {1'h0,op_b_i}; // @[playground/src/ibex_multdiv_slow.scala 166:86]
  wire [32:0] _op_b_shift_d_T_5 = sign_b ? _accum_window_d_T_31 : _op_b_shift_d_T_4; // @[playground/src/ibex_multdiv_slow.scala 166:31]
  wire [33:0] _op_a_shift_d_T_1 = {op_a_shift_q, 1'h0}; // @[playground/src/ibex_multdiv_slow.scala 174:52]
  wire [32:0] _op_b_shift_d_T_6 = {{1'd0}, op_b_shift_q[32:1]}; // @[playground/src/ibex_multdiv_slow.scala 175:52]
  wire [32:0] _GEN_36 = _T_12 ? _op_b_shift_d_T_6 : op_b_shift_q; // @[playground/src/ibex_multdiv_slow.scala 124:19 171:34 181:36]
  wire [32:0] _GEN_42 = _T_11 ? _op_b_shift_d_T_6 : _GEN_36; // @[playground/src/ibex_multdiv_slow.scala 171:34 175:36]
  wire [32:0] _GEN_79 = 3'h3 == md_state_q ? _GEN_42 : op_b_shift_q; // @[playground/src/ibex_multdiv_slow.scala 124:19 131:23]
  wire [32:0] _GEN_85 = 3'h2 == md_state_q ? _op_b_shift_d_T_5 : _GEN_79; // @[playground/src/ibex_multdiv_slow.scala 131:23 166:26]
  wire [32:0] _GEN_96 = 3'h1 == md_state_q ? op_b_shift_q : _GEN_85; // @[playground/src/ibex_multdiv_slow.scala 124:19 131:23]
  wire [32:0] _GEN_103 = 3'h0 == md_state_q ? _GEN_26 : _GEN_96; // @[playground/src/ibex_multdiv_slow.scala 131:23]
  wire [32:0] op_b_shift_d = mult_sel_i | div_sel_i ? _GEN_103 : op_b_shift_q; // @[playground/src/ibex_multdiv_slow.scala 124:19 130:37]
  wire  _md_state_d_T_14 = multdiv_count_q == 5'h1; // @[playground/src/ibex_multdiv_slow.scala 176:111]
  wire [2:0] _md_state_d_T_16 = _md_state_d_T & op_b_shift_d == 33'h0 | multdiv_count_q == 5'h1 ? 3'h4 : 3'h3; // @[playground/src/ibex_multdiv_slow.scala 176:42]
  wire [2:0] _md_state_d_T_18 = _md_state_d_T_14 ? 3'h4 : 3'h3; // @[playground/src/ibex_multdiv_slow.scala 182:42]
  wire [32:0] _alu_operand_a_o_T_9 = {accum_window_q[31:0],1'h1}; // @[playground/src/ibex_multdiv_slow.scala 188:46]
  wire [32:0] _GEN_30 = _T_13 | _T_14 ? next_quotient : op_a_shift_q; // @[playground/src/ibex_multdiv_slow.scala 125:19 171:34 186:36]
  wire [2:0] _GEN_31 = _T_13 | _T_14 ? _md_state_d_T_18 : md_state_q; // @[playground/src/ibex_multdiv_slow.scala 127:19 171:34 187:32]
  wire [32:0] _GEN_32 = _T_13 | _T_14 ? _alu_operand_a_o_T_9 : _GEN_13; // @[playground/src/ibex_multdiv_slow.scala 171:34 188:40]
  wire [32:0] _GEN_33 = _T_13 | _T_14 ? _alu_operand_b_o_T_2 : _GEN_12; // @[playground/src/ibex_multdiv_slow.scala 171:34 189:40]
  wire [32:0] _GEN_35 = _T_12 ? op_a_shift_q : _GEN_30; // @[playground/src/ibex_multdiv_slow.scala 171:34 180:36]
  wire [2:0] _GEN_37 = _T_12 ? _md_state_d_T_18 : _GEN_31; // @[playground/src/ibex_multdiv_slow.scala 171:34 182:36]
  wire [32:0] _GEN_38 = _T_12 ? _GEN_13 : _GEN_32; // @[playground/src/ibex_multdiv_slow.scala 171:34]
  wire [32:0] _GEN_39 = _T_12 ? _GEN_12 : _GEN_33; // @[playground/src/ibex_multdiv_slow.scala 171:34]
  wire [33:0] _GEN_41 = _T_11 ? _op_a_shift_d_T_1 : {{1'd0}, _GEN_35}; // @[playground/src/ibex_multdiv_slow.scala 171:34 174:36]
  wire [2:0] _GEN_43 = _T_11 ? _md_state_d_T_16 : _GEN_37; // @[playground/src/ibex_multdiv_slow.scala 171:34 176:36]
  wire [32:0] _GEN_44 = _T_11 ? _GEN_13 : _GEN_38; // @[playground/src/ibex_multdiv_slow.scala 171:34]
  wire [32:0] _GEN_45 = _T_11 ? _GEN_12 : _GEN_39; // @[playground/src/ibex_multdiv_slow.scala 171:34]
  wire [2:0] _GEN_47 = _T_14 ? 3'h5 : md_state_q; // @[playground/src/ibex_multdiv_slow.scala 127:19 194:34 213:32]
  wire [32:0] _GEN_48 = _T_14 ? _alu_operand_a_o_T_9 : _GEN_13; // @[playground/src/ibex_multdiv_slow.scala 194:34 214:40]
  wire [32:0] _GEN_49 = _T_14 ? _alu_operand_b_o_T_2 : _GEN_12; // @[playground/src/ibex_multdiv_slow.scala 194:34 215:40]
  wire [2:0] _GEN_51 = _T_13 ? 3'h5 : _GEN_47; // @[playground/src/ibex_multdiv_slow.scala 194:34 207:32]
  wire [32:0] _GEN_52 = _T_13 ? _alu_operand_a_o_T_9 : _GEN_48; // @[playground/src/ibex_multdiv_slow.scala 194:34 208:40]
  wire [32:0] _GEN_53 = _T_13 ? _alu_operand_b_o_T_2 : _GEN_49; // @[playground/src/ibex_multdiv_slow.scala 194:34 209:40]
  wire [2:0] _GEN_55 = _T_12 ? 3'h0 : _GEN_51; // @[playground/src/ibex_multdiv_slow.scala 194:34 202:32]
  wire [32:0] _GEN_57 = _T_12 ? _GEN_13 : _GEN_52; // @[playground/src/ibex_multdiv_slow.scala 194:34]
  wire [32:0] _GEN_58 = _T_12 ? _GEN_12 : _GEN_53; // @[playground/src/ibex_multdiv_slow.scala 194:34]
  wire [2:0] _GEN_60 = _T_11 ? 3'h0 : _GEN_55; // @[playground/src/ibex_multdiv_slow.scala 194:34 197:32]
  wire [32:0] _GEN_62 = _T_11 ? _GEN_13 : _GEN_57; // @[playground/src/ibex_multdiv_slow.scala 194:34]
  wire [32:0] _GEN_63 = _T_11 ? _GEN_12 : _GEN_58; // @[playground/src/ibex_multdiv_slow.scala 194:34]
  wire [2:0] _GEN_66 = 3'h6 == md_state_q ? 3'h0 : md_state_q; // @[playground/src/ibex_multdiv_slow.scala 127:19 131:23 231:24]
  wire [2:0] _GEN_68 = 3'h5 == md_state_q ? 3'h6 : _GEN_66; // @[playground/src/ibex_multdiv_slow.scala 131:23 220:24]
  wire [2:0] _GEN_72 = 3'h4 == md_state_q ? _GEN_60 : _GEN_68; // @[playground/src/ibex_multdiv_slow.scala 131:23]
  wire [32:0] _GEN_74 = 3'h4 == md_state_q ? _GEN_62 : _GEN_13; // @[playground/src/ibex_multdiv_slow.scala 131:23]
  wire [32:0] _GEN_75 = 3'h4 == md_state_q ? _GEN_63 : _GEN_12; // @[playground/src/ibex_multdiv_slow.scala 131:23]
  wire [33:0] _GEN_78 = 3'h3 == md_state_q ? _GEN_41 : {{1'd0}, op_a_shift_q}; // @[playground/src/ibex_multdiv_slow.scala 125:19 131:23]
  wire [2:0] _GEN_80 = 3'h3 == md_state_q ? _GEN_43 : _GEN_72; // @[playground/src/ibex_multdiv_slow.scala 131:23]
  wire [32:0] _GEN_81 = 3'h3 == md_state_q ? _GEN_44 : _GEN_74; // @[playground/src/ibex_multdiv_slow.scala 131:23]
  wire [32:0] _GEN_82 = 3'h3 == md_state_q ? _GEN_45 : _GEN_75; // @[playground/src/ibex_multdiv_slow.scala 131:23]
  wire [2:0] _GEN_86 = 3'h2 == md_state_q ? 3'h3 : _GEN_80; // @[playground/src/ibex_multdiv_slow.scala 131:23 167:24]
  wire [33:0] _GEN_88 = 3'h2 == md_state_q ? {{1'd0}, op_a_shift_q} : _GEN_78; // @[playground/src/ibex_multdiv_slow.scala 125:19 131:23]
  wire [32:0] _GEN_89 = 3'h2 == md_state_q ? _GEN_13 : _GEN_81; // @[playground/src/ibex_multdiv_slow.scala 131:23]
  wire [32:0] _GEN_90 = 3'h2 == md_state_q ? _GEN_12 : _GEN_82; // @[playground/src/ibex_multdiv_slow.scala 131:23]
  wire [33:0] _GEN_92 = 3'h1 == md_state_q ? 34'h0 : _GEN_88; // @[playground/src/ibex_multdiv_slow.scala 131:23 160:26]
  wire [2:0] _GEN_94 = 3'h1 == md_state_q ? 3'h2 : _GEN_86; // @[playground/src/ibex_multdiv_slow.scala 131:23 162:24]
  wire [32:0] _GEN_98 = 3'h1 == md_state_q ? _GEN_13 : _GEN_89; // @[playground/src/ibex_multdiv_slow.scala 131:23]
  wire [32:0] _GEN_99 = 3'h1 == md_state_q ? _GEN_12 : _GEN_90; // @[playground/src/ibex_multdiv_slow.scala 131:23]
  wire [33:0] _GEN_101 = 3'h0 == md_state_q ? _GEN_24 : _GEN_92; // @[playground/src/ibex_multdiv_slow.scala 131:23]
  wire [32:0] _GEN_108 = 3'h0 == md_state_q ? _GEN_13 : _GEN_98; // @[playground/src/ibex_multdiv_slow.scala 131:23]
  wire [32:0] _GEN_109 = 3'h0 == md_state_q ? _GEN_12 : _GEN_99; // @[playground/src/ibex_multdiv_slow.scala 131:23]
  wire [33:0] _GEN_111 = mult_sel_i | div_sel_i ? _GEN_101 : {{1'd0}, op_a_shift_q}; // @[playground/src/ibex_multdiv_slow.scala 125:19 130:37]
  wire  multdiv_en = (mult_en_i | div_en_i) & _imd_val_we_o_0_T; // @[playground/src/ibex_multdiv_slow.scala 236:48]
  wire [32:0] op_a_shift_d = _GEN_111[32:0]; // @[playground/src/ibex_multdiv_slow.scala 43:24]
  wire  _valid_o_T_3 = operator_i == 2'h1; // @[playground/src/ibex_multdiv_slow.scala 247:33]
  wire  _valid_o_T_4 = operator_i == 2'h0 | _valid_o_T_3; // @[playground/src/ibex_multdiv_slow.scala 246:63]
  wire  _valid_o_T_5 = _alu_operand_b_o_T_3 & _valid_o_T_4; // @[playground/src/ibex_multdiv_slow.scala 245:60]
  assign alu_operand_a_o = mult_sel_i | div_sel_i ? _GEN_108 : _GEN_13; // @[playground/src/ibex_multdiv_slow.scala 130:37]
  assign alu_operand_b_o = mult_sel_i | div_sel_i ? _GEN_109 : _GEN_12; // @[playground/src/ibex_multdiv_slow.scala 130:37]
  assign imd_val_d_o_0 = {1'h0,accum_window_d}; // @[playground/src/ibex_multdiv_slow.scala 67:25]
  assign imd_val_d_o_1 = {2'h0,op_numerator_d}; // @[playground/src/ibex_multdiv_slow.scala 71:25]
  assign imd_val_we_o_0 = ~multdiv_hold; // @[playground/src/ibex_multdiv_slow.scala 68:23]
  assign imd_val_we_o_1 = (mult_en_i | div_en_i) & _imd_val_we_o_0_T; // @[playground/src/ibex_multdiv_slow.scala 236:48]
  assign multdiv_result_o = div_en_i ? accum_window_q[31:0] : res_adder_l[31:0]; // @[playground/src/ibex_multdiv_slow.scala 248:31]
  assign valid_o = md_state_q == 3'h6 | _valid_o_T_5; // @[playground/src/ibex_multdiv_slow.scala 244:61]
   always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin // @[playground/src/ibex_multdiv_slow.scala 32:24]
      md_state_q <= 3'h0; // @[playground/src/ibex_multdiv_slow.scala 32:24]
    end else if (multdiv_en) begin // @[playground/src/ibex_multdiv_slow.scala 237:21]
      if (mult_sel_i | div_sel_i) begin // @[playground/src/ibex_multdiv_slow.scala 130:37]
        if (3'h0 == md_state_q) begin // @[playground/src/ibex_multdiv_slow.scala 131:23]
          md_state_q <= _GEN_27;
        end else begin
          md_state_q <= _GEN_94;
        end
      end
    end
    if (!rst_ni) begin // @[playground/src/ibex_multdiv_slow.scala 38:30]
      multdiv_count_q <= 5'h0; // @[playground/src/ibex_multdiv_slow.scala 38:30]
    end else if (multdiv_en) begin // @[playground/src/ibex_multdiv_slow.scala 237:21]
      if (mult_sel_i | div_sel_i) begin // @[playground/src/ibex_multdiv_slow.scala 130:37]
        if (3'h0 == md_state_q) begin // @[playground/src/ibex_multdiv_slow.scala 131:23]
          multdiv_count_q <= 5'h1f; // @[playground/src/ibex_multdiv_slow.scala 157:31]
        end else begin
          multdiv_count_q <= _GEN_97;
        end
      end
    end
    if (!rst_ni) begin // @[playground/src/ibex_multdiv_slow.scala 40:27]
      op_b_shift_q <= 33'h0; // @[playground/src/ibex_multdiv_slow.scala 40:27]
    end else if (multdiv_en) begin // @[playground/src/ibex_multdiv_slow.scala 237:21]
      if (mult_sel_i | div_sel_i) begin // @[playground/src/ibex_multdiv_slow.scala 130:37]
        if (3'h0 == md_state_q) begin // @[playground/src/ibex_multdiv_slow.scala 131:23]
          op_b_shift_q <= _GEN_26;
        end else begin
          op_b_shift_q <= _GEN_96;
        end
      end
    end
    if (!rst_ni) begin // @[playground/src/ibex_multdiv_slow.scala 42:27]
      op_a_shift_q <= 33'h0; // @[playground/src/ibex_multdiv_slow.scala 42:27]
    end else if (multdiv_en) begin // @[playground/src/ibex_multdiv_slow.scala 237:21]
      op_a_shift_q <= op_a_shift_d; // @[playground/src/ibex_multdiv_slow.scala 240:26]
    end
    if (!rst_ni) begin // @[playground/src/ibex_multdiv_slow.scala 60:28]
      div_by_zero_q <= 1'h0; // @[playground/src/ibex_multdiv_slow.scala 60:28]
    end else if (multdiv_en) begin // @[playground/src/ibex_multdiv_slow.scala 237:21]
      if (mult_sel_i | div_sel_i) begin // @[playground/src/ibex_multdiv_slow.scala 130:37]
        if (3'h0 == md_state_q) begin // @[playground/src/ibex_multdiv_slow.scala 131:23]
          div_by_zero_q <= _GEN_28;
        end
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
  multdiv_count_q = _RAND_1[4:0];
  _RAND_2 = {2{`RANDOM}};
  op_b_shift_q = _RAND_2[32:0];
  _RAND_3 = {2{`RANDOM}};
  op_a_shift_q = _RAND_3[32:0];
  _RAND_4 = {1{`RANDOM}};
  div_by_zero_q = _RAND_4[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
