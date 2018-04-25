/* DO NOT EDIT!  -*- buffer-read-only: t -*- vi:set ro:  */
/* Instruction opcode table for or1k.

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

#include "sysdep.h"
#include "ansidecl.h"
#include "bfd.h"
#include "symcat.h"
#include "or1k-desc.h"
#include "or1k-opc.h"
#include "libiberty.h"

/* -- opc.c */
/* -- */
/* The hash functions are recorded here to help keep assembler code out of
   the disassembler and vice versa.  */

static int asm_hash_insn_p        (const CGEN_INSN *);
static unsigned int asm_hash_insn (const char *);
static int dis_hash_insn_p        (const CGEN_INSN *);
static unsigned int dis_hash_insn (const char *, CGEN_INSN_INT);

/* Instruction formats.  */

#define F(f) & or1k_cgen_ifld_table[OR1K_##f]
static const CGEN_IFMT ifmt_empty ATTRIBUTE_UNUSED = {
  0, 0, 0x0, { { 0 } }
};

static const CGEN_IFMT ifmt_l_j ATTRIBUTE_UNUSED = {
  32, 32, 0xfc000000, { { F (F_OPCODE) }, { F (F_DISP26) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_adrp ATTRIBUTE_UNUSED = {
  32, 32, 0xfc000000, { { F (F_OPCODE) }, { F (F_R1) }, { F (F_DISP21) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_jr ATTRIBUTE_UNUSED = {
  32, 32, 0xffff07ff, { { F (F_OPCODE) }, { F (F_RESV_25_10) }, { F (F_R3) }, { F (F_RESV_10_11) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_trap ATTRIBUTE_UNUSED = {
  32, 32, 0xffff0000, { { F (F_OPCODE) }, { F (F_OP_25_5) }, { F (F_RESV_20_5) }, { F (F_UIMM16) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_msync ATTRIBUTE_UNUSED = {
  32, 32, 0xffffffff, { { F (F_OPCODE) }, { F (F_OP_25_5) }, { F (F_RESV_20_21) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_rfe ATTRIBUTE_UNUSED = {
  32, 32, 0xffffffff, { { F (F_OPCODE) }, { F (F_RESV_25_26) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_nop_imm ATTRIBUTE_UNUSED = {
  32, 32, 0xffff0000, { { F (F_OPCODE) }, { F (F_OP_25_2) }, { F (F_RESV_23_8) }, { F (F_UIMM16) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_movhi ATTRIBUTE_UNUSED = {
  32, 32, 0xfc1f0000, { { F (F_OPCODE) }, { F (F_R1) }, { F (F_RESV_20_4) }, { F (F_OP_16_1) }, { F (F_UIMM16) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_macrc ATTRIBUTE_UNUSED = {
  32, 32, 0xfc1fffff, { { F (F_OPCODE) }, { F (F_R1) }, { F (F_RESV_20_4) }, { F (F_OP_16_1) }, { F (F_UIMM16) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_mfspr ATTRIBUTE_UNUSED = {
  32, 32, 0xfc000000, { { F (F_OPCODE) }, { F (F_R1) }, { F (F_R2) }, { F (F_UIMM16) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_mtspr ATTRIBUTE_UNUSED = {
  32, 32, 0xfc000000, { { F (F_OPCODE) }, { F (F_R2) }, { F (F_R3) }, { F (F_UIMM16_SPLIT) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_lwz ATTRIBUTE_UNUSED = {
  32, 32, 0xfc000000, { { F (F_OPCODE) }, { F (F_R1) }, { F (F_R2) }, { F (F_SIMM16) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_sw ATTRIBUTE_UNUSED = {
  32, 32, 0xfc000000, { { F (F_OPCODE) }, { F (F_R2) }, { F (F_R3) }, { F (F_SIMM16_SPLIT) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_swa ATTRIBUTE_UNUSED = {
  32, 32, 0xfc000000, { { F (F_OPCODE) }, { F (F_R2) }, { F (F_R3) }, { F (F_SIMM16) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_sll ATTRIBUTE_UNUSED = {
  32, 32, 0xfc0007ff, { { F (F_OPCODE) }, { F (F_R1) }, { F (F_R2) }, { F (F_R3) }, { F (F_RESV_10_3) }, { F (F_OP_7_2) }, { F (F_RESV_5_2) }, { F (F_OP_3_4) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_slli ATTRIBUTE_UNUSED = {
  32, 32, 0xfc00ffc0, { { F (F_OPCODE) }, { F (F_R1) }, { F (F_R2) }, { F (F_RESV_15_8) }, { F (F_OP_7_2) }, { F (F_UIMM6) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_and ATTRIBUTE_UNUSED = {
  32, 32, 0xfc0007ff, { { F (F_OPCODE) }, { F (F_R1) }, { F (F_R2) }, { F (F_R3) }, { F (F_RESV_10_7) }, { F (F_OP_3_4) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_muld ATTRIBUTE_UNUSED = {
  32, 32, 0xffe007ff, { { F (F_OPCODE) }, { F (F_RESV_25_5) }, { F (F_R2) }, { F (F_R3) }, { F (F_RESV_10_7) }, { F (F_OP_3_4) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_exths ATTRIBUTE_UNUSED = {
  32, 32, 0xfc00ffff, { { F (F_OPCODE) }, { F (F_R1) }, { F (F_R2) }, { F (F_RESV_15_6) }, { F (F_OP_9_4) }, { F (F_RESV_5_2) }, { F (F_OP_3_4) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_cmov ATTRIBUTE_UNUSED = {
  32, 32, 0xfc0007ff, { { F (F_OPCODE) }, { F (F_R1) }, { F (F_R2) }, { F (F_R3) }, { F (F_RESV_10_1) }, { F (F_OP_9_2) }, { F (F_RESV_7_4) }, { F (F_OP_3_4) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_sfgts ATTRIBUTE_UNUSED = {
  32, 32, 0xffe007ff, { { F (F_OPCODE) }, { F (F_OP_25_5) }, { F (F_R2) }, { F (F_R3) }, { F (F_RESV_10_11) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_sfgtsi ATTRIBUTE_UNUSED = {
  32, 32, 0xffe00000, { { F (F_OPCODE) }, { F (F_OP_25_5) }, { F (F_R2) }, { F (F_SIMM16) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_mac ATTRIBUTE_UNUSED = {
  32, 32, 0xffe007ff, { { F (F_OPCODE) }, { F (F_OP_25_5) }, { F (F_R2) }, { F (F_R3) }, { F (F_RESV_10_7) }, { F (F_OP_3_4) }, { 0 } }
};

static const CGEN_IFMT ifmt_l_maci ATTRIBUTE_UNUSED = {
  32, 32, 0xffe00000, { { F (F_OPCODE) }, { F (F_RESV_25_5) }, { F (F_R2) }, { F (F_SIMM16) }, { 0 } }
};

static const CGEN_IFMT ifmt_ld_cmp_eq_b ATTRIBUTE_UNUSED = {
  32, 32, 0xfc0007ff, { { F (F_OPCODE) }, { F (F_R1) }, { F (F_R2) }, { F (F_R3) }, { F (F_RESV_10_3) }, { F (F_OP_7_4) }, { F (F_OP_3_4) }, { 0 } }
};

static const CGEN_IFMT ifmt_ld_all_eq_b ATTRIBUTE_UNUSED = {
  32, 32, 0xffe007ff, { { F (F_OPCODE) }, { F (F_RESV_25_5) }, { F (F_R2) }, { F (F_R3) }, { F (F_RESV_10_3) }, { F (F_OP_7_4) }, { F (F_OP_3_4) }, { 0 } }
};

static const CGEN_IFMT ifmt_ld_unpack_b ATTRIBUTE_UNUSED = {
  32, 32, 0xfc00ffff, { { F (F_OPCODE) }, { F (F_R1) }, { F (F_R2) }, { F (F_RESV_15_8) }, { F (F_OP_7_4) }, { F (F_OP_3_4) }, { 0 } }
};

static const CGEN_IFMT ifmt_ld_mul ATTRIBUTE_UNUSED = {
  32, 32, 0xfc0007fc, { { F (F_OPCODE) }, { F (F_R1) }, { F (F_R2) }, { F (F_R3) }, { F (F_RESV_10_3) }, { F (F_OP_7_5) }, { F (F_RESV_2_1) }, { F (F_UIMM1A) }, { F (F_UIMM1B) }, { 0 } }
};

static const CGEN_IFMT ifmt_ld_muls ATTRIBUTE_UNUSED = {
  32, 32, 0xfc0007fe, { { F (F_OPCODE) }, { F (F_R1) }, { F (F_R2) }, { F (F_R3) }, { F (F_RESV_10_3) }, { F (F_OP_7_5) }, { F (F_RESV_2_1) }, { F (F_RESV_1_1) }, { F (F_UIMM1B) }, { 0 } }
};

static const CGEN_IFMT ifmt_ld_move_b ATTRIBUTE_UNUSED = {
  32, 32, 0xfc0007e1, { { F (F_OPCODE) }, { F (F_R1) }, { F (F_R2) }, { F (F_R3) }, { F (F_RESV_10_3) }, { F (F_OP_7_3) }, { F (F_UIMM2S) }, { F (F_UIMM2D) }, { F (F_OP_0_1) }, { 0 } }
};

static const CGEN_IFMT ifmt_ld_move_h ATTRIBUTE_UNUSED = {
  32, 32, 0xfc0007eb, { { F (F_OPCODE) }, { F (F_R1) }, { F (F_R2) }, { F (F_R3) }, { F (F_RESV_10_3) }, { F (F_OP_7_3) }, { F (F_UIMM1S) }, { F (F_RESV_3_1) }, { F (F_UIMM1D) }, { F (F_RESV_1_1) }, { F (F_OP_0_1) }, { 0 } }
};

static const CGEN_IFMT ifmt_lf_add_s ATTRIBUTE_UNUSED = {
  32, 32, 0xfc0007ff, { { F (F_OPCODE) }, { F (F_R1) }, { F (F_R2) }, { F (F_R3) }, { F (F_RESV_10_3) }, { F (F_OP_7_8) }, { 0 } }
};

static const CGEN_IFMT ifmt_lf_add_d ATTRIBUTE_UNUSED = {
  32, 32, 0xfc0007ff, { { F (F_OPCODE) }, { F (F_R1) }, { F (F_R1) }, { F (F_R1) }, { F (F_RESV_10_3) }, { F (F_OP_7_8) }, { 0 } }
};

static const CGEN_IFMT ifmt_lf_itof_s ATTRIBUTE_UNUSED = {
  32, 32, 0xfc00ffff, { { F (F_OPCODE) }, { F (F_R1) }, { F (F_R2) }, { F (F_R3) }, { F (F_RESV_10_3) }, { F (F_OP_7_8) }, { 0 } }
};

static const CGEN_IFMT ifmt_lf_ftoi_s ATTRIBUTE_UNUSED = {
  32, 32, 0xfc00ffff, { { F (F_OPCODE) }, { F (F_R1) }, { F (F_R2) }, { F (F_R3) }, { F (F_RESV_10_3) }, { F (F_OP_7_8) }, { 0 } }
};

static const CGEN_IFMT ifmt_lf_ftoi_d ATTRIBUTE_UNUSED = {
  32, 32, 0xfc00ffff, { { F (F_OPCODE) }, { F (F_R1) }, { F (F_R1) }, { F (F_R3) }, { F (F_RESV_10_3) }, { F (F_OP_7_8) }, { 0 } }
};

static const CGEN_IFMT ifmt_lf_eq_s ATTRIBUTE_UNUSED = {
  32, 32, 0xffe007ff, { { F (F_OPCODE) }, { F (F_R1) }, { F (F_R2) }, { F (F_R3) }, { F (F_RESV_10_3) }, { F (F_OP_7_8) }, { 0 } }
};

static const CGEN_IFMT ifmt_lf_cust1_s ATTRIBUTE_UNUSED = {
  32, 32, 0xffe007ff, { { F (F_OPCODE) }, { F (F_RESV_25_5) }, { F (F_R2) }, { F (F_R3) }, { F (F_RESV_10_3) }, { F (F_OP_7_8) }, { 0 } }
};

static const CGEN_IFMT ifmt_lf_cust1_d ATTRIBUTE_UNUSED = {
  32, 32, 0xffe007ff, { { F (F_OPCODE) }, { F (F_RESV_25_5) }, { F (F_R1) }, { F (F_R1) }, { F (F_RESV_10_3) }, { F (F_OP_7_8) }, { 0 } }
};

#undef F

#define A(a) (1 << CGEN_INSN_##a)
#define OPERAND(op) OR1K_OPERAND_##op
#define MNEM CGEN_SYNTAX_MNEMONIC /* syntax value for mnemonic */
#define OP(field) CGEN_SYNTAX_MAKE_FIELD (OPERAND (field))

/* The instruction table.  */

static const CGEN_OPCODE or1k_cgen_insn_opcode_table[MAX_INSNS] =
{
  /* Special null first entry.
     A `num' value of zero is thus invalid.
     Also, the special `invalid' insn resides here.  */
  { { 0, 0, 0, 0 }, {{0}}, 0, {0}},
/* l.j ${disp26} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DISP26), 0 } },
    & ifmt_l_j, { 0x0 }
  },
/* l.adrp $rD,${disp21} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (DISP21), 0 } },
    & ifmt_l_adrp, { 0x8000000 }
  },
/* l.jal ${disp26} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DISP26), 0 } },
    & ifmt_l_j, { 0x4000000 }
  },
/* l.jr $rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RB), 0 } },
    & ifmt_l_jr, { 0x44000000 }
  },
/* l.jalr $rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RB), 0 } },
    & ifmt_l_jr, { 0x48000000 }
  },
/* l.bnf ${disp26} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DISP26), 0 } },
    & ifmt_l_j, { 0xc000000 }
  },
/* l.bf ${disp26} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (DISP26), 0 } },
    & ifmt_l_j, { 0x10000000 }
  },
/* l.trap ${uimm16} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (UIMM16), 0 } },
    & ifmt_l_trap, { 0x21000000 }
  },
/* l.sys ${uimm16} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (UIMM16), 0 } },
    & ifmt_l_trap, { 0x20000000 }
  },
/* l.msync */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_l_msync, { 0x22000000 }
  },
/* l.psync */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_l_msync, { 0x22800000 }
  },
/* l.csync */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_l_msync, { 0x23000000 }
  },
/* l.rfe */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_l_rfe, { 0x24000000 }
  },
/* l.nop ${uimm16} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (UIMM16), 0 } },
    & ifmt_l_nop_imm, { 0x15000000 }
  },
/* l.nop */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_l_nop_imm, { 0x15000000 }
  },
/* l.movhi $rD,$uimm16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (UIMM16), 0 } },
    & ifmt_l_movhi, { 0x18000000 }
  },
/* l.macrc $rD */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), 0 } },
    & ifmt_l_macrc, { 0x18010000 }
  },
/* l.mfspr $rD,$rA,${uimm16} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (UIMM16), 0 } },
    & ifmt_l_mfspr, { 0xb4000000 }
  },
/* l.mtspr $rA,$rB,${uimm16-split} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), ',', OP (UIMM16_SPLIT), 0 } },
    & ifmt_l_mtspr, { 0xc0000000 }
  },
/* l.lwz $rD,${simm16}($rA) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (SIMM16), '(', OP (RA), ')', 0 } },
    & ifmt_l_lwz, { 0x84000000 }
  },
/* l.lws $rD,${simm16}($rA) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (SIMM16), '(', OP (RA), ')', 0 } },
    & ifmt_l_lwz, { 0x88000000 }
  },
/* l.lwa $rD,${simm16}($rA) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (SIMM16), '(', OP (RA), ')', 0 } },
    & ifmt_l_lwz, { 0x6c000000 }
  },
/* l.lbz $rD,${simm16}($rA) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (SIMM16), '(', OP (RA), ')', 0 } },
    & ifmt_l_lwz, { 0x8c000000 }
  },
/* l.lbs $rD,${simm16}($rA) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (SIMM16), '(', OP (RA), ')', 0 } },
    & ifmt_l_lwz, { 0x90000000 }
  },
/* l.lhz $rD,${simm16}($rA) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (SIMM16), '(', OP (RA), ')', 0 } },
    & ifmt_l_lwz, { 0x94000000 }
  },
/* l.lhs $rD,${simm16}($rA) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (SIMM16), '(', OP (RA), ')', 0 } },
    & ifmt_l_lwz, { 0x98000000 }
  },
/* l.sw ${simm16-split}($rA),$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (SIMM16_SPLIT), '(', OP (RA), ')', ',', OP (RB), 0 } },
    & ifmt_l_sw, { 0xd4000000 }
  },
/* l.sb ${simm16-split}($rA),$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (SIMM16_SPLIT), '(', OP (RA), ')', ',', OP (RB), 0 } },
    & ifmt_l_sw, { 0xd8000000 }
  },
/* l.sh ${simm16-split}($rA),$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (SIMM16_SPLIT), '(', OP (RA), ')', ',', OP (RB), 0 } },
    & ifmt_l_sw, { 0xdc000000 }
  },
/* l.swa ${simm16-split}($rA),$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (SIMM16_SPLIT), '(', OP (RA), ')', ',', OP (RB), 0 } },
    & ifmt_l_swa, { 0xcc000000 }
  },
/* l.sll $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_sll, { 0xe0000008 }
  },
/* l.slli $rD,$rA,${uimm6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (UIMM6), 0 } },
    & ifmt_l_slli, { 0xb8000000 }
  },
/* l.srl $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_sll, { 0xe0000048 }
  },
/* l.srli $rD,$rA,${uimm6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (UIMM6), 0 } },
    & ifmt_l_slli, { 0xb8000040 }
  },
/* l.sra $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_sll, { 0xe0000088 }
  },
/* l.srai $rD,$rA,${uimm6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (UIMM6), 0 } },
    & ifmt_l_slli, { 0xb8000080 }
  },
/* l.ror $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_sll, { 0xe00000c8 }
  },
/* l.rori $rD,$rA,${uimm6} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (UIMM6), 0 } },
    & ifmt_l_slli, { 0xb80000c0 }
  },
/* l.and $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_and, { 0xe0000003 }
  },
/* l.or $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_and, { 0xe0000004 }
  },
/* l.xor $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_and, { 0xe0000005 }
  },
/* l.add $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_and, { 0xe0000000 }
  },
/* l.sub $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_and, { 0xe0000002 }
  },
/* l.addc $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_and, { 0xe0000001 }
  },
/* l.mul $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_and, { 0xe0000306 }
  },
/* l.muld $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_muld, { 0xe0000307 }
  },
/* l.mulu $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_and, { 0xe000030b }
  },
/* l.muldu $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_muld, { 0xe000030d }
  },
/* l.div $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_and, { 0xe0000309 }
  },
/* l.divu $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_and, { 0xe000030a }
  },
/* l.ff1 $rD,$rA */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), 0 } },
    & ifmt_l_and, { 0xe000000f }
  },
/* l.fl1 $rD,$rA */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), 0 } },
    & ifmt_l_and, { 0xe000010f }
  },
/* l.andi $rD,$rA,$uimm16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (UIMM16), 0 } },
    & ifmt_l_mfspr, { 0xa4000000 }
  },
/* l.ori $rD,$rA,$uimm16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (UIMM16), 0 } },
    & ifmt_l_mfspr, { 0xa8000000 }
  },
/* l.xori $rD,$rA,$simm16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (SIMM16), 0 } },
    & ifmt_l_lwz, { 0xac000000 }
  },
/* l.addi $rD,$rA,$simm16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (SIMM16), 0 } },
    & ifmt_l_lwz, { 0x9c000000 }
  },
/* l.addic $rD,$rA,$simm16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (SIMM16), 0 } },
    & ifmt_l_lwz, { 0xa0000000 }
  },
/* l.muli $rD,$rA,$simm16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (SIMM16), 0 } },
    & ifmt_l_lwz, { 0xb0000000 }
  },
/* l.exths $rD,$rA */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), 0 } },
    & ifmt_l_exths, { 0xe000000c }
  },
/* l.extbs $rD,$rA */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), 0 } },
    & ifmt_l_exths, { 0xe000004c }
  },
/* l.exthz $rD,$rA */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), 0 } },
    & ifmt_l_exths, { 0xe000008c }
  },
/* l.extbz $rD,$rA */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), 0 } },
    & ifmt_l_exths, { 0xe00000cc }
  },
/* l.extws $rD,$rA */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), 0 } },
    & ifmt_l_exths, { 0xe000000d }
  },
/* l.extwz $rD,$rA */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), 0 } },
    & ifmt_l_exths, { 0xe000004d }
  },
/* l.cmov $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_cmov, { 0xe000000e }
  },
/* l.sfgts $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_sfgts, { 0xe5400000 }
  },
/* l.sfgtsi $rA,$simm16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (SIMM16), 0 } },
    & ifmt_l_sfgtsi, { 0xbd400000 }
  },
/* l.sfgtu $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_sfgts, { 0xe4400000 }
  },
/* l.sfgtui $rA,$simm16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (SIMM16), 0 } },
    & ifmt_l_sfgtsi, { 0xbc400000 }
  },
/* l.sfges $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_sfgts, { 0xe5600000 }
  },
/* l.sfgesi $rA,$simm16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (SIMM16), 0 } },
    & ifmt_l_sfgtsi, { 0xbd600000 }
  },
/* l.sfgeu $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_sfgts, { 0xe4600000 }
  },
/* l.sfgeui $rA,$simm16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (SIMM16), 0 } },
    & ifmt_l_sfgtsi, { 0xbc600000 }
  },
/* l.sflts $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_sfgts, { 0xe5800000 }
  },
/* l.sfltsi $rA,$simm16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (SIMM16), 0 } },
    & ifmt_l_sfgtsi, { 0xbd800000 }
  },
/* l.sfltu $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_sfgts, { 0xe4800000 }
  },
/* l.sfltui $rA,$simm16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (SIMM16), 0 } },
    & ifmt_l_sfgtsi, { 0xbc800000 }
  },
/* l.sfles $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_sfgts, { 0xe5a00000 }
  },
/* l.sflesi $rA,$simm16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (SIMM16), 0 } },
    & ifmt_l_sfgtsi, { 0xbda00000 }
  },
/* l.sfleu $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_sfgts, { 0xe4a00000 }
  },
/* l.sfleui $rA,$simm16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (SIMM16), 0 } },
    & ifmt_l_sfgtsi, { 0xbca00000 }
  },
/* l.sfeq $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_sfgts, { 0xe4000000 }
  },
/* l.sfeqi $rA,$simm16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (SIMM16), 0 } },
    & ifmt_l_sfgtsi, { 0xbc000000 }
  },
/* l.sfne $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_sfgts, { 0xe4200000 }
  },
/* l.sfnei $rA,$simm16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (SIMM16), 0 } },
    & ifmt_l_sfgtsi, { 0xbc200000 }
  },
/* l.mac $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_mac, { 0xc4000001 }
  },
/* l.maci $rA,${simm16} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (SIMM16), 0 } },
    & ifmt_l_maci, { 0x4c000000 }
  },
/* l.macu $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_mac, { 0xc4000003 }
  },
/* l.msb $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_mac, { 0xc4000002 }
  },
/* l.msbu $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_l_mac, { 0xc4000004 }
  },
/* l.cust1 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_l_rfe, { 0x70000000 }
  },
/* l.cust2 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_l_rfe, { 0x74000000 }
  },
/* l.cust3 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_l_rfe, { 0x78000000 }
  },
/* l.cust4 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_l_rfe, { 0x7c000000 }
  },
/* l.cust5 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_l_rfe, { 0xf0000000 }
  },
/* l.cust6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_l_rfe, { 0xf4000000 }
  },
/* l.cust7 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_l_rfe, { 0xf8000000 }
  },
/* ld.cmp_eq.b $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc000010 }
  },
/* ld.cmp_ne.b $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc000012 }
  },
/* ld.cmp_ge.b $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc000018 }
  },
/* ld.cmp_gt.b $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc00001a }
  },
/* ld.cmp_le.b $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc00001c }
  },
/* ld.cmp_lt.b $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc00001e }
  },
/* ld.cmp_eq.h $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc000011 }
  },
/* ld.cmp_ne.h $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc000013 }
  },
/* ld.cmp_ge.h $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc000019 }
  },
/* ld.cmp_gt.h $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc00001b }
  },
/* ld.cmp_le.h $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc00001d }
  },
/* ld.cmp_lt.h $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc00001f }
  },
/* ld.all_eq.b $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_all_eq_b, { 0xfc000020 }
  },
/* ld.all_ne.b $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_all_eq_b, { 0xfc000022 }
  },
/* ld.all_ge.b $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_all_eq_b, { 0xfc000028 }
  },
/* ld.all_gt.b $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_all_eq_b, { 0xfc00002a }
  },
/* ld.all_le.b $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_all_eq_b, { 0xfc00002c }
  },
/* ld.all_lt.b $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_all_eq_b, { 0xfc00002e }
  },
/* ld.all_eq.h $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_all_eq_b, { 0xfc000021 }
  },
/* ld.all_ne.h $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_all_eq_b, { 0xfc000023 }
  },
/* ld.all_ge.h $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_all_eq_b, { 0xfc000029 }
  },
/* ld.all_gt.h $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_all_eq_b, { 0xfc00002b }
  },
/* ld.all_le.h $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_all_eq_b, { 0xfc00002d }
  },
/* ld.all_lt.h $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_all_eq_b, { 0xfc00002f }
  },
/* ld.any_eq.b $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_all_eq_b, { 0xfc000030 }
  },
/* ld.any_ne.b $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_all_eq_b, { 0xfc000032 }
  },
/* ld.any_ge.b $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_all_eq_b, { 0xfc000038 }
  },
/* ld.any_gt.b $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_all_eq_b, { 0xfc00003a }
  },
/* ld.any_le.b $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_all_eq_b, { 0xfc00003c }
  },
/* ld.any_lt.b $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_all_eq_b, { 0xfc00003e }
  },
/* ld.any_eq.h $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_all_eq_b, { 0xfc000031 }
  },
/* ld.any_ne.h $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_all_eq_b, { 0xfc000033 }
  },
/* ld.any_ge.h $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_all_eq_b, { 0xfc000039 }
  },
/* ld.any_gt.h $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_all_eq_b, { 0xfc00003b }
  },
/* ld.any_le.h $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_all_eq_b, { 0xfc00003d }
  },
/* ld.any_lt.h $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_all_eq_b, { 0xfc00003f }
  },
/* ld.add.b $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc000040 }
  },
/* ld.add.h $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc000041 }
  },
/* ld.sub.b $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc000048 }
  },
/* ld.sub.h $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc000049 }
  },
/* ld.adds.b $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc000042 }
  },
/* ld.adds.h $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc000043 }
  },
/* ld.subs.b $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc00004a }
  },
/* ld.subs.h $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc00004b }
  },
/* ld.addu.b $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc000044 }
  },
/* ld.addu.h $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc000045 }
  },
/* ld.subu.b $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc00004c }
  },
/* ld.subu.h $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc00004d }
  },
/* ld.addus.b $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc000046 }
  },
/* ld.addus.h $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc000047 }
  },
/* ld.subus.b $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc00004e }
  },
/* ld.subus.h $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc00004f }
  },
/* ld.avg.b $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc000050 }
  },
/* ld.avg.h $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc000051 }
  },
/* ld.avgu.b $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc000054 }
  },
/* ld.avgu.h $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc000055 }
  },
/* ld.min.b $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc000052 }
  },
/* ld.min.h $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc000053 }
  },
/* ld.minu.b $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc000056 }
  },
/* ld.minu.h $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc000057 }
  },
/* ld.max.b $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc00005a }
  },
/* ld.max.h $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc00005b }
  },
/* ld.maxu.b $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc00005e }
  },
/* ld.maxu.h $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc00005f }
  },
/* ld.merge.b $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc000058 }
  },
/* ld.merge.h $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc000059 }
  },
/* ld.pack.b $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc000060 }
  },
/* ld.pack.h $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc000061 }
  },
/* ld.packs.b $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc000062 }
  },
/* ld.packs.h $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc000063 }
  },
/* ld.packus.b $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc000064 }
  },
/* ld.packus.h $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc000065 }
  },
/* ld.unpack.b $rD,$rA */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), 0 } },
    & ifmt_ld_unpack_b, { 0xfc000066 }
  },
/* ld.unpack.h $rD,$rA */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), 0 } },
    & ifmt_ld_unpack_b, { 0xfc000067 }
  },
/* ld.rl.b $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc000068 }
  },
/* ld.rl.h $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc000069 }
  },
/* ld.sll.b $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc00006a }
  },
/* ld.sll.h $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc00006b }
  },
/* ld.sra.b $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc00006c }
  },
/* ld.sra.h $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc00006d }
  },
/* ld.srl.b $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc00006e }
  },
/* ld.srl.h $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc00006f }
  },
/* ld.nand $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc000070 }
  },
/* ld.nor $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc000072 }
  },
/* ld.madds.h $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_all_eq_b, { 0xfc000080 }
  },
/* ld.msubs.h $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_all_eq_b, { 0xfc000081 }
  },
/* ld.maddus.h $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_all_eq_b, { 0xfc000084 }
  },
/* ld.msubus.h $rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_all_eq_b, { 0xfc000085 }
  },
/* ld.muls.h $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc000082 }
  },
/* ld.mulh.h $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc000083 }
  },
/* ld.mulus.h $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc000086 }
  },
/* ld.muluh.h $rD,$rA,$rB */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), 0 } },
    & ifmt_ld_cmp_eq_b, { 0xfc000087 }
  },
/* ld.mul $rD,$rA $uimm1a,$rB $uimm1b */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ' ', OP (UIMM1A), ',', OP (RB), ' ', OP (UIMM1B), 0 } },
    & ifmt_ld_mul, { 0xfc000088 }
  },
/* ld.mulu $rD,$rA $uimm1a,$rB $uimm1b */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ' ', OP (UIMM1A), ',', OP (RB), ' ', OP (UIMM1B), 0 } },
    & ifmt_ld_mul, { 0xfc00008c }
  },
/* ld.muls $rD,$rA,$rB $uimm1b */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), ' ', OP (UIMM1B), 0 } },
    & ifmt_ld_muls, { 0xfc000090 }
  },
/* ld.mulh $rD,$rA,$rB $uimm1b */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), ' ', OP (UIMM1B), 0 } },
    & ifmt_ld_muls, { 0xfc000092 }
  },
/* ld.mulus $rD,$rA,$rB $uimm1b */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), ' ', OP (UIMM1B), 0 } },
    & ifmt_ld_muls, { 0xfc000094 }
  },
/* ld.muluh $rD,$rA,$rB $uimm1b */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), ',', OP (RB), ' ', OP (UIMM1B), 0 } },
    & ifmt_ld_muls, { 0xfc000096 }
  },
/* ld.move.b $rD $uimm2d,$rA,$rB $uimm2s */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ' ', OP (UIMM2D), ',', OP (RA), ',', OP (RB), ' ', OP (UIMM2S), 0 } },
    & ifmt_ld_move_b, { 0xfc0000a0 }
  },
/* ld.move.h $rD $uimm1d,$rA,$rB $uimm1s */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ' ', OP (UIMM1D), ',', OP (RA), ',', OP (RB), ' ', OP (UIMM1S), 0 } },
    & ifmt_ld_move_h, { 0xfc0000a1 }
  },
/* ld.extbh $rD,$rA */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), 0 } },
    & ifmt_ld_unpack_b, { 0xfc0000c0 }
  },
/* ld.extbw $rD,$rA */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), 0 } },
    & ifmt_ld_unpack_b, { 0xfc0000c1 }
  },
/* ld.exthw $rD,$rA */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), 0 } },
    & ifmt_ld_unpack_b, { 0xfc0000c3 }
  },
/* ld.extubh $rD,$rA */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), 0 } },
    & ifmt_ld_unpack_b, { 0xfc0000c4 }
  },
/* ld.extubw $rD,$rA */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), 0 } },
    & ifmt_ld_unpack_b, { 0xfc0000c5 }
  },
/* ld.extuhw $rD,$rA */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), 0 } },
    & ifmt_ld_unpack_b, { 0xfc0000c7 }
  },
/* ld.revh $rD,$rA */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), 0 } },
    & ifmt_ld_unpack_b, { 0xfc0000c8 }
  },
/* ld.rev $rD,$rA */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), 0 } },
    & ifmt_ld_unpack_b, { 0xfc0000c9 }
  },
/* ld.revbh $rD,$rA */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), 0 } },
    & ifmt_ld_unpack_b, { 0xfc0000cb }
  },
/* ld.revb $rD,$rA */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RA), 0 } },
    & ifmt_ld_unpack_b, { 0xfc0000ca }
  },
/* lf.add.s $rDSF,$rASF,$rBSF */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RDSF), ',', OP (RASF), ',', OP (RBSF), 0 } },
    & ifmt_lf_add_s, { 0xc8000000 }
  },
/* lf.add.d $rDDF,$rADF,$rBDF */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RDDF), ',', OP (RADF), ',', OP (RBDF), 0 } },
    & ifmt_lf_add_d, { 0xc8000010 }
  },
/* lf.sub.s $rDSF,$rASF,$rBSF */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RDSF), ',', OP (RASF), ',', OP (RBSF), 0 } },
    & ifmt_lf_add_s, { 0xc8000001 }
  },
/* lf.sub.d $rDDF,$rADF,$rBDF */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RDDF), ',', OP (RADF), ',', OP (RBDF), 0 } },
    & ifmt_lf_add_d, { 0xc8000011 }
  },
/* lf.mul.s $rDSF,$rASF,$rBSF */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RDSF), ',', OP (RASF), ',', OP (RBSF), 0 } },
    & ifmt_lf_add_s, { 0xc8000002 }
  },
/* lf.mul.d $rDDF,$rADF,$rBDF */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RDDF), ',', OP (RADF), ',', OP (RBDF), 0 } },
    & ifmt_lf_add_d, { 0xc8000012 }
  },
/* lf.div.s $rDSF,$rASF,$rBSF */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RDSF), ',', OP (RASF), ',', OP (RBSF), 0 } },
    & ifmt_lf_add_s, { 0xc8000003 }
  },
/* lf.div.d $rDDF,$rADF,$rBDF */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RDDF), ',', OP (RADF), ',', OP (RBDF), 0 } },
    & ifmt_lf_add_d, { 0xc8000013 }
  },
/* lf.rem.s $rDSF,$rASF,$rBSF */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RDSF), ',', OP (RASF), ',', OP (RBSF), 0 } },
    & ifmt_lf_add_s, { 0xc8000006 }
  },
/* lf.rem.d $rDDF,$rADF,$rBDF */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RDDF), ',', OP (RADF), ',', OP (RBDF), 0 } },
    & ifmt_lf_add_d, { 0xc8000016 }
  },
/* lf.itof.s $rDSF,$rA */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RDSF), ',', OP (RA), 0 } },
    & ifmt_lf_itof_s, { 0xc8000004 }
  },
/* lf.itof.d $rDSF,$rA */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RDSF), ',', OP (RA), 0 } },
    & ifmt_lf_itof_s, { 0xc8000014 }
  },
/* lf.ftoi.s $rD,$rASF */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RASF), 0 } },
    & ifmt_lf_ftoi_s, { 0xc8000005 }
  },
/* lf.ftoi.d $rD,$rADF */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RADF), 0 } },
    & ifmt_lf_ftoi_d, { 0xc8000015 }
  },
/* lf.sfeq.s $rASF,$rBSF */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RASF), ',', OP (RBSF), 0 } },
    & ifmt_lf_eq_s, { 0xc8000008 }
  },
/* lf.sfeq.d $rASF,$rBSF */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RASF), ',', OP (RBSF), 0 } },
    & ifmt_lf_eq_s, { 0xc8000018 }
  },
/* lf.sfne.s $rASF,$rBSF */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RASF), ',', OP (RBSF), 0 } },
    & ifmt_lf_eq_s, { 0xc8000009 }
  },
/* lf.sfne.d $rASF,$rBSF */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RASF), ',', OP (RBSF), 0 } },
    & ifmt_lf_eq_s, { 0xc8000019 }
  },
/* lf.sfge.s $rASF,$rBSF */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RASF), ',', OP (RBSF), 0 } },
    & ifmt_lf_eq_s, { 0xc800000b }
  },
/* lf.sfge.d $rASF,$rBSF */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RASF), ',', OP (RBSF), 0 } },
    & ifmt_lf_eq_s, { 0xc800001b }
  },
/* lf.sfgt.s $rASF,$rBSF */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RASF), ',', OP (RBSF), 0 } },
    & ifmt_lf_eq_s, { 0xc800000a }
  },
/* lf.sfgt.d $rASF,$rBSF */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RASF), ',', OP (RBSF), 0 } },
    & ifmt_lf_eq_s, { 0xc800001a }
  },
/* lf.sflt.s $rASF,$rBSF */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RASF), ',', OP (RBSF), 0 } },
    & ifmt_lf_eq_s, { 0xc800000c }
  },
/* lf.sflt.d $rASF,$rBSF */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RASF), ',', OP (RBSF), 0 } },
    & ifmt_lf_eq_s, { 0xc800001c }
  },
/* lf.sfle.s $rASF,$rBSF */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RASF), ',', OP (RBSF), 0 } },
    & ifmt_lf_eq_s, { 0xc800000d }
  },
/* lf.sfle.d $rASF,$rBSF */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RASF), ',', OP (RBSF), 0 } },
    & ifmt_lf_eq_s, { 0xc800001d }
  },
/* lf.madd.s $rDSF,$rASF,$rBSF */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RDSF), ',', OP (RASF), ',', OP (RBSF), 0 } },
    & ifmt_lf_add_s, { 0xc8000007 }
  },
/* lf.madd.d $rDDF,$rADF,$rBDF */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RDDF), ',', OP (RADF), ',', OP (RBDF), 0 } },
    & ifmt_lf_add_d, { 0xc8000017 }
  },
/* lf.cust1.s $rASF,$rBSF */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RASF), ',', OP (RBSF), 0 } },
    & ifmt_lf_cust1_s, { 0xc80000d0 }
  },
/* lf.cust1.d */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_lf_cust1_d, { 0xc80000e0 }
  },
};

#undef A
#undef OPERAND
#undef MNEM
#undef OP

/* Formats for ALIAS macro-insns.  */

#define F(f) & or1k_cgen_ifld_table[OR1K_##f]
#undef F

/* Each non-simple macro entry points to an array of expansion possibilities.  */

#define A(a) (1 << CGEN_INSN_##a)
#define OPERAND(op) OR1K_OPERAND_##op
#define MNEM CGEN_SYNTAX_MNEMONIC /* syntax value for mnemonic */
#define OP(field) CGEN_SYNTAX_MAKE_FIELD (OPERAND (field))

/* The macro instruction table.  */

static const CGEN_IBASE or1k_cgen_macro_insn_table[] =
{
};

/* The macro instruction opcode table.  */

static const CGEN_OPCODE or1k_cgen_macro_insn_opcode_table[] =
{
};

#undef A
#undef OPERAND
#undef MNEM
#undef OP

#ifndef CGEN_ASM_HASH_P
#define CGEN_ASM_HASH_P(insn) 1
#endif

#ifndef CGEN_DIS_HASH_P
#define CGEN_DIS_HASH_P(insn) 1
#endif

/* Return non-zero if INSN is to be added to the hash table.
   Targets are free to override CGEN_{ASM,DIS}_HASH_P in the .opc file.  */

static int
asm_hash_insn_p (const CGEN_INSN *insn ATTRIBUTE_UNUSED)
{
  return CGEN_ASM_HASH_P (insn);
}

static int
dis_hash_insn_p (const CGEN_INSN *insn)
{
  /* If building the hash table and the NO-DIS attribute is present,
     ignore.  */
  if (CGEN_INSN_ATTR_VALUE (insn, CGEN_INSN_NO_DIS))
    return 0;
  return CGEN_DIS_HASH_P (insn);
}

#ifndef CGEN_ASM_HASH
#define CGEN_ASM_HASH_SIZE 127
#ifdef CGEN_MNEMONIC_OPERANDS
#define CGEN_ASM_HASH(mnem) (*(unsigned char *) (mnem) % CGEN_ASM_HASH_SIZE)
#else
#define CGEN_ASM_HASH(mnem) (*(unsigned char *) (mnem) % CGEN_ASM_HASH_SIZE) /*FIXME*/
#endif
#endif

/* It doesn't make much sense to provide a default here,
   but while this is under development we do.
   BUFFER is a pointer to the bytes of the insn, target order.
   VALUE is the first base_insn_bitsize bits as an int in host order.  */

#ifndef CGEN_DIS_HASH
#define CGEN_DIS_HASH_SIZE 256
#define CGEN_DIS_HASH(buf, value) (*(unsigned char *) (buf))
#endif

/* The result is the hash value of the insn.
   Targets are free to override CGEN_{ASM,DIS}_HASH in the .opc file.  */

static unsigned int
asm_hash_insn (const char *mnem)
{
  return CGEN_ASM_HASH (mnem);
}

/* BUF is a pointer to the bytes of the insn, target order.
   VALUE is the first base_insn_bitsize bits as an int in host order.  */

static unsigned int
dis_hash_insn (const char *buf ATTRIBUTE_UNUSED,
		     CGEN_INSN_INT value ATTRIBUTE_UNUSED)
{
  return CGEN_DIS_HASH (buf, value);
}

/* Set the recorded length of the insn in the CGEN_FIELDS struct.  */

static void
set_fields_bitsize (CGEN_FIELDS *fields, int size)
{
  CGEN_FIELDS_BITSIZE (fields) = size;
}

/* Function to call before using the operand instance table.
   This plugs the opcode entries and macro instructions into the cpu table.  */

void
or1k_cgen_init_opcode_table (CGEN_CPU_DESC cd)
{
  int i;
  int num_macros = (sizeof (or1k_cgen_macro_insn_table) /
		    sizeof (or1k_cgen_macro_insn_table[0]));
  const CGEN_IBASE *ib = & or1k_cgen_macro_insn_table[0];
  const CGEN_OPCODE *oc = & or1k_cgen_macro_insn_opcode_table[0];
  CGEN_INSN *insns = xmalloc (num_macros * sizeof (CGEN_INSN));

  /* This test has been added to avoid a warning generated
     if memset is called with a third argument of value zero.  */
  if (num_macros >= 1)
    memset (insns, 0, num_macros * sizeof (CGEN_INSN));
  for (i = 0; i < num_macros; ++i)
    {
      insns[i].base = &ib[i];
      insns[i].opcode = &oc[i];
      or1k_cgen_build_insn_regex (& insns[i]);
    }
  cd->macro_insn_table.init_entries = insns;
  cd->macro_insn_table.entry_size = sizeof (CGEN_IBASE);
  cd->macro_insn_table.num_init_entries = num_macros;

  oc = & or1k_cgen_insn_opcode_table[0];
  insns = (CGEN_INSN *) cd->insn_table.init_entries;
  for (i = 0; i < MAX_INSNS; ++i)
    {
      insns[i].opcode = &oc[i];
      or1k_cgen_build_insn_regex (& insns[i]);
    }

  cd->sizeof_fields = sizeof (CGEN_FIELDS);
  cd->set_fields_bitsize = set_fields_bitsize;

  cd->asm_hash_p = asm_hash_insn_p;
  cd->asm_hash = asm_hash_insn;
  cd->asm_hash_size = CGEN_ASM_HASH_SIZE;

  cd->dis_hash_p = dis_hash_insn_p;
  cd->dis_hash = dis_hash_insn;
  cd->dis_hash_size = CGEN_DIS_HASH_SIZE;
}
