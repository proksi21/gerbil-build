#ifdef ___LINKER_INFO
; File: "hw.c", produced by Gambit v4.9.0
(
409000
(C)
"hw"
(("hw"))
(
"hw"
)
(
)
(
"hw#"
)
(
)
(
"println"
)
 ()
)
#else
#define ___VERSION 409000
#define ___MODULE_NAME "hw"
#define ___LINKER_ID ___LNK_hw
#define ___MH_PROC ___H_hw
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 1
#define ___GLOCOUNT 2
#define ___SUPCOUNT 1
#define ___SUBCOUNT 2
#define ___LBLCOUNT 3
#define ___MODDESCR ___REF_SUB(1)
#include "gambit.h"

___NEED_SYM(___S_hw)

___NEED_GLO(___G_hw_23_)
___NEED_GLO(___G_println)

___BEGIN_SYM
___DEF_SYM(0,___S_hw,"hw")
___END_SYM

#define ___SYM_hw ___SYM(0,___S_hw)

___BEGIN_GLO
___DEF_GLO(0,"hw#")
___DEF_GLO(1,"println")
___END_GLO

#define ___GLO_hw_23_ ___GLO(0,___G_hw_23_)
#define ___PRM_hw_23_ ___PRM(0,___G_hw_23_)
#define ___GLO_println ___GLO(1,___G_println)
#define ___PRM_println ___PRM(1,___G_println)

___DEF_SUB_STR(___X0,12UL)
               ___STR8(104,101,108,108,111,32,119,111)
               ___STR4(114,108,100,33)
___DEF_SUB_VEC(___X1,5UL)
               ___VEC1(___REF_SYM(0,___S_hw))
               ___VEC1(___REF_PRC(1))
               ___VEC1(___REF_FIX(1))
               ___VEC1(___REF_NUL)
               ___VEC1(___REF_FAL)
               ___VEC0

___BEGIN_SUB
 ___DEF_SUB(___X0)
,___DEF_SUB(___X1)
___END_SUB



#undef ___MD_ALL
#define ___MD_ALL ___D_FP ___D_R1 ___D_R4
#undef ___MR_ALL
#define ___MR_ALL ___R_FP ___R_R1 ___R_R4
#undef ___MW_ALL
#define ___MW_ALL ___W_R1 ___W_R4
___BEGIN_M_COD
___BEGIN_M_HLBL
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_hw_23_)
___DEF_M_HLBL(___L1_hw_23_)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H_hw_23_
#undef ___PH_LBL0
#define ___PH_LBL0 1
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R1 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R1 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_hw_23_)
___DEF_P_HLBL(___L1_hw_23_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_hw_23_)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_hw_23_)
   ___SET_R1(___SUB(0))
   ___POLL(1)
___DEF_SLBL(1,___L1_hw_23_)
   ___JUMPGLOSAFE(___SET_NARGS(1),1,___G_println)
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H_hw_23_,"hw#",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_hw_23_,0,-1)
,___DEF_LBL_RET(___H_hw_23_,___IFD(___RETI,0,0,0x3fL))
___END_LBL

___BEGIN_MOD_PRM
___DEF_MOD_PRM(0,___G_hw_23_,1)
___END_MOD_PRM

___BEGIN_MOD_C_INIT
___END_MOD_C_INIT

___BEGIN_MOD_GLO
___DEF_MOD_GLO(0,___G_hw_23_,1)
___END_MOD_GLO

___BEGIN_MOD_SYM_KEY
___DEF_MOD_SYM(0,___S_hw,"hw")
___END_MOD_SYM_KEY

#endif
