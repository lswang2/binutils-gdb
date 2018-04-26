/* DO NOT EDIT!  -*- buffer-read-only: t -*- vi:set ro:  */
/* Instruction opcode header for or1k.

THIS FILE IS MACHINE GENERATED WITH CGEN.

Copyright (C) 1996-2018 Free Software Foundation, Inc.

This file is part of the GNU Binutils and/or GDB, the GNU debugger.

   This file is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   It is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   You should have received a copy of the GNU General Public License along
   with this program; if not, write to the Free Software Foundation, Inc.,
   51 Franklin Street - Fifth Floor, Boston, MA 02110-1301, USA.

*/

#ifndef OR1K_OPC_H
#define OR1K_OPC_H

#ifdef __cplusplus
extern "C" {
#endif

/* -- opc.h */

#undef  CGEN_DIS_HASH_SIZE
#define CGEN_DIS_HASH_SIZE 256
#undef  CGEN_DIS_HASH
#define CGEN_DIS_HASH(buffer, value) (((unsigned char *) (buffer))[0] >> 2)

/* -- */
/* Enum declaration for or1k instruction types.  */
typedef enum cgen_insn_type {
  OR1K_INSN_INVALID, OR1K_INSN_L_J, OR1K_INSN_L_ADRP, OR1K_INSN_L_JAL
 , OR1K_INSN_L_JR, OR1K_INSN_L_JALR, OR1K_INSN_L_BNF, OR1K_INSN_L_BF
 , OR1K_INSN_L_TRAP, OR1K_INSN_L_SYS, OR1K_INSN_L_MSYNC, OR1K_INSN_L_PSYNC
 , OR1K_INSN_L_CSYNC, OR1K_INSN_L_RFE, OR1K_INSN_L_NOP_IMM, OR1K_INSN_L_NOP
 , OR1K_INSN_L_MOVHI, OR1K_INSN_L_MACRC, OR1K_INSN_L_MFSPR, OR1K_INSN_L_MTSPR
 , OR1K_INSN_L_LWZ, OR1K_INSN_L_LWS, OR1K_INSN_L_LWA, OR1K_INSN_L_LBZ
 , OR1K_INSN_L_LBS, OR1K_INSN_L_LHZ, OR1K_INSN_L_LHS, OR1K_INSN_L_SW
 , OR1K_INSN_L_SB, OR1K_INSN_L_SH, OR1K_INSN_L_SWA, OR1K_INSN_L_SLL
 , OR1K_INSN_L_SLLI, OR1K_INSN_L_SRL, OR1K_INSN_L_SRLI, OR1K_INSN_L_SRA
 , OR1K_INSN_L_SRAI, OR1K_INSN_L_ROR, OR1K_INSN_L_RORI, OR1K_INSN_L_AND
 , OR1K_INSN_L_OR, OR1K_INSN_L_XOR, OR1K_INSN_L_ADD, OR1K_INSN_L_SUB
 , OR1K_INSN_L_ADDC, OR1K_INSN_L_MUL, OR1K_INSN_L_MULD, OR1K_INSN_L_MULU
 , OR1K_INSN_L_MULDU, OR1K_INSN_L_DIV, OR1K_INSN_L_DIVU, OR1K_INSN_L_FF1
 , OR1K_INSN_L_FL1, OR1K_INSN_L_ANDI, OR1K_INSN_L_ORI, OR1K_INSN_L_XORI
 , OR1K_INSN_L_ADDI, OR1K_INSN_L_ADDIC, OR1K_INSN_L_MULI, OR1K_INSN_L_EXTHS
 , OR1K_INSN_L_EXTBS, OR1K_INSN_L_EXTHZ, OR1K_INSN_L_EXTBZ, OR1K_INSN_L_EXTWS
 , OR1K_INSN_L_EXTWZ, OR1K_INSN_L_CMOV, OR1K_INSN_L_SFGTS, OR1K_INSN_L_SFGTSI
 , OR1K_INSN_L_SFGTU, OR1K_INSN_L_SFGTUI, OR1K_INSN_L_SFGES, OR1K_INSN_L_SFGESI
 , OR1K_INSN_L_SFGEU, OR1K_INSN_L_SFGEUI, OR1K_INSN_L_SFLTS, OR1K_INSN_L_SFLTSI
 , OR1K_INSN_L_SFLTU, OR1K_INSN_L_SFLTUI, OR1K_INSN_L_SFLES, OR1K_INSN_L_SFLESI
 , OR1K_INSN_L_SFLEU, OR1K_INSN_L_SFLEUI, OR1K_INSN_L_SFEQ, OR1K_INSN_L_SFEQI
 , OR1K_INSN_L_SFNE, OR1K_INSN_L_SFNEI, OR1K_INSN_L_MAC, OR1K_INSN_L_MACI
 , OR1K_INSN_L_MACU, OR1K_INSN_L_MSB, OR1K_INSN_L_MSBU, OR1K_INSN_L_CUST1
 , OR1K_INSN_L_CUST2, OR1K_INSN_L_CUST3, OR1K_INSN_L_CUST4, OR1K_INSN_L_CUST5
 , OR1K_INSN_L_CUST6, OR1K_INSN_L_CUST7, OR1K_INSN_LD_CMP_EQ_B, OR1K_INSN_LD_CMP_EQ_H
 , OR1K_INSN_LD_ALL_EQ_B, OR1K_INSN_LD_ALL_EQ_H, OR1K_INSN_LD_ANY_EQ_B, OR1K_INSN_LD_ANY_EQ_H
 , OR1K_INSN_LD_CMPU_EQ_B, OR1K_INSN_LD_CMPU_EQ_H, OR1K_INSN_LD_ALLU_EQ_B, OR1K_INSN_LD_ALLU_EQ_H
 , OR1K_INSN_LD_ANYU_EQ_B, OR1K_INSN_LD_ANYU_EQ_H, OR1K_INSN_LD_CMP_NE_B, OR1K_INSN_LD_CMP_NE_H
 , OR1K_INSN_LD_ALL_NE_B, OR1K_INSN_LD_ALL_NE_H, OR1K_INSN_LD_ANY_NE_B, OR1K_INSN_LD_ANY_NE_H
 , OR1K_INSN_LD_CMPU_NE_B, OR1K_INSN_LD_CMPU_NE_H, OR1K_INSN_LD_ALLU_NE_B, OR1K_INSN_LD_ALLU_NE_H
 , OR1K_INSN_LD_ANYU_NE_B, OR1K_INSN_LD_ANYU_NE_H, OR1K_INSN_LD_CMP_GE_B, OR1K_INSN_LD_CMP_GE_H
 , OR1K_INSN_LD_ALL_GE_B, OR1K_INSN_LD_ALL_GE_H, OR1K_INSN_LD_ANY_GE_B, OR1K_INSN_LD_ANY_GE_H
 , OR1K_INSN_LD_CMPU_GE_B, OR1K_INSN_LD_CMPU_GE_H, OR1K_INSN_LD_ALLU_GE_B, OR1K_INSN_LD_ALLU_GE_H
 , OR1K_INSN_LD_ANYU_GE_B, OR1K_INSN_LD_ANYU_GE_H, OR1K_INSN_LD_CMP_GT_B, OR1K_INSN_LD_CMP_GT_H
 , OR1K_INSN_LD_ALL_GT_B, OR1K_INSN_LD_ALL_GT_H, OR1K_INSN_LD_ANY_GT_B, OR1K_INSN_LD_ANY_GT_H
 , OR1K_INSN_LD_CMPU_GT_B, OR1K_INSN_LD_CMPU_GT_H, OR1K_INSN_LD_ALLU_GT_B, OR1K_INSN_LD_ALLU_GT_H
 , OR1K_INSN_LD_ANYU_GT_B, OR1K_INSN_LD_ANYU_GT_H, OR1K_INSN_LD_CMP_LE_B, OR1K_INSN_LD_CMP_LE_H
 , OR1K_INSN_LD_ALL_LE_B, OR1K_INSN_LD_ALL_LE_H, OR1K_INSN_LD_ANY_LE_B, OR1K_INSN_LD_ANY_LE_H
 , OR1K_INSN_LD_CMPU_LE_B, OR1K_INSN_LD_CMPU_LE_H, OR1K_INSN_LD_ALLU_LE_B, OR1K_INSN_LD_ALLU_LE_H
 , OR1K_INSN_LD_ANYU_LE_B, OR1K_INSN_LD_ANYU_LE_H, OR1K_INSN_LD_CMP_LT_B, OR1K_INSN_LD_CMP_LT_H
 , OR1K_INSN_LD_ALL_LT_B, OR1K_INSN_LD_ALL_LT_H, OR1K_INSN_LD_ANY_LT_B, OR1K_INSN_LD_ANY_LT_H
 , OR1K_INSN_LD_CMPU_LT_B, OR1K_INSN_LD_CMPU_LT_H, OR1K_INSN_LD_ALLU_LT_B, OR1K_INSN_LD_ALLU_LT_H
 , OR1K_INSN_LD_ANYU_LT_B, OR1K_INSN_LD_ANYU_LT_H, OR1K_INSN_LD_ADD_B, OR1K_INSN_LD_ADD_H
 , OR1K_INSN_LD_ADDS_B, OR1K_INSN_LD_ADDS_H, OR1K_INSN_LD_ADDU_B, OR1K_INSN_LD_ADDU_H
 , OR1K_INSN_LD_ADDUS_B, OR1K_INSN_LD_ADDUS_H, OR1K_INSN_LD_SUB_B, OR1K_INSN_LD_SUB_H
 , OR1K_INSN_LD_SUBS_B, OR1K_INSN_LD_SUBS_H, OR1K_INSN_LD_SUBU_B, OR1K_INSN_LD_SUBU_H
 , OR1K_INSN_LD_SUBUS_B, OR1K_INSN_LD_SUBUS_H, OR1K_INSN_LD_AVG_B, OR1K_INSN_LD_AVG_H
 , OR1K_INSN_LD_AVGU_B, OR1K_INSN_LD_AVGU_H, OR1K_INSN_LD_MIN_B, OR1K_INSN_LD_MIN_H
 , OR1K_INSN_LD_MINU_B, OR1K_INSN_LD_MINU_H, OR1K_INSN_LD_MAX_B, OR1K_INSN_LD_MAX_H
 , OR1K_INSN_LD_MAXU_B, OR1K_INSN_LD_MAXU_H, OR1K_INSN_LD_MERGE_B, OR1K_INSN_LD_MERGE_H
 , OR1K_INSN_LD_PACK_B, OR1K_INSN_LD_PACK_H, OR1K_INSN_LD_PACKS_B, OR1K_INSN_LD_PACKS_H
 , OR1K_INSN_LD_PACKUS_B, OR1K_INSN_LD_PACKUS_H, OR1K_INSN_LD_UNPACK_B, OR1K_INSN_LD_UNPACK_H
 , OR1K_INSN_LD_RL_B, OR1K_INSN_LD_RL_H, OR1K_INSN_LD_SLL_B, OR1K_INSN_LD_SLL_H
 , OR1K_INSN_LD_SRA_B, OR1K_INSN_LD_SRA_H, OR1K_INSN_LD_SRL_B, OR1K_INSN_LD_SRL_H
 , OR1K_INSN_LD_NAND, OR1K_INSN_LD_NOR, OR1K_INSN_LD_MADDS_H, OR1K_INSN_LD_MADDUS_H
 , OR1K_INSN_LD_MSUBS_H, OR1K_INSN_LD_MSUBUS_H, OR1K_INSN_LD_MULS_H, OR1K_INSN_LD_MULUS_H
 , OR1K_INSN_LD_MULH_H, OR1K_INSN_LD_MULUH_H, OR1K_INSN_LD_MUL, OR1K_INSN_LD_MULU
 , OR1K_INSN_LD_MULS, OR1K_INSN_LD_MULH, OR1K_INSN_LD_MULUS, OR1K_INSN_LD_MULUH
 , OR1K_INSN_LD_MOVE_B, OR1K_INSN_LD_MOVE_H, OR1K_INSN_LD_EXTBH, OR1K_INSN_LD_EXTBW
 , OR1K_INSN_LD_EXTHW, OR1K_INSN_LD_EXTUBH, OR1K_INSN_LD_EXTUBW, OR1K_INSN_LD_EXTUHW
 , OR1K_INSN_LD_REVH, OR1K_INSN_LD_REV, OR1K_INSN_LD_REVBH, OR1K_INSN_LD_REVB
 , OR1K_INSN_LF_ADD_S, OR1K_INSN_LF_ADD_D, OR1K_INSN_LF_SUB_S, OR1K_INSN_LF_SUB_D
 , OR1K_INSN_LF_MUL_S, OR1K_INSN_LF_MUL_D, OR1K_INSN_LF_DIV_S, OR1K_INSN_LF_DIV_D
 , OR1K_INSN_LF_REM_S, OR1K_INSN_LF_REM_D, OR1K_INSN_LF_ITOF_S, OR1K_INSN_LF_ITOF_D
 , OR1K_INSN_LF_FTOI_S, OR1K_INSN_LF_FTOI_D, OR1K_INSN_LF_EQ_S, OR1K_INSN_LF_EQ_D
 , OR1K_INSN_LF_NE_S, OR1K_INSN_LF_NE_D, OR1K_INSN_LF_GE_S, OR1K_INSN_LF_GE_D
 , OR1K_INSN_LF_GT_S, OR1K_INSN_LF_GT_D, OR1K_INSN_LF_LT_S, OR1K_INSN_LF_LT_D
 , OR1K_INSN_LF_LE_S, OR1K_INSN_LF_LE_D, OR1K_INSN_LF_MADD_S, OR1K_INSN_LF_MADD_D
 , OR1K_INSN_LF_CUST1_S, OR1K_INSN_LF_CUST1_D
} CGEN_INSN_TYPE;

/* Index of `invalid' insn place holder.  */
#define CGEN_INSN_INVALID OR1K_INSN_INVALID

/* Total number of insns in table.  */
#define MAX_INSNS ((int) OR1K_INSN_LF_CUST1_D + 1)

/* This struct records data prior to insertion or after extraction.  */
struct cgen_fields
{
  int length;
  long f_nil;
  long f_anyof;
  long f_opcode;
  long f_r1;
  long f_r2;
  long f_r3;
  long f_op_25_2;
  long f_op_25_5;
  long f_op_16_1;
  long f_op_7_5;
  long f_op_7_4;
  long f_op_7_3;
  long f_op_3_4;
  long f_op_9_2;
  long f_op_9_4;
  long f_op_7_8;
  long f_op_7_2;
  long f_op_3_1;
  long f_op_2_1;
  long f_op_1_1;
  long f_op_0_1;
  long f_resv_25_26;
  long f_resv_25_10;
  long f_resv_25_5;
  long f_resv_23_8;
  long f_resv_20_21;
  long f_resv_20_5;
  long f_resv_20_4;
  long f_resv_15_8;
  long f_resv_15_6;
  long f_resv_10_11;
  long f_resv_10_7;
  long f_resv_10_3;
  long f_resv_10_1;
  long f_resv_8_1;
  long f_resv_7_4;
  long f_resv_5_2;
  long f_resv_3_1;
  long f_resv_2_1;
  long f_resv_1_1;
  long f_imm16_25_5;
  long f_imm16_10_11;
  long f_disp26;
  long f_disp21;
  long f_uimm16;
  long f_simm16;
  long f_uimm6;
  long f_uimm2d;
  long f_uimm2s;
  long f_uimm1d;
  long f_uimm1s;
  long f_uimm1u;
  long f_uimm1a;
  long f_uimm1b;
  long f_uimm16_split;
  long f_simm16_split;
};

#define CGEN_INIT_PARSE(od) \
{\
}
#define CGEN_INIT_INSERT(od) \
{\
}
#define CGEN_INIT_EXTRACT(od) \
{\
}
#define CGEN_INIT_PRINT(od) \
{\
}


   #ifdef __cplusplus
   }
   #endif

#endif /* OR1K_OPC_H */
