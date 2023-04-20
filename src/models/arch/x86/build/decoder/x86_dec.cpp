#include"x86_dec.h"
#include"../../../../inst_model/rt_instr.h"
DECODER_X86::DECODER_X86(): DECODER_BASE(){
     decodeStorage.insert({"JMP$R$R", (MOP_BASE*)(new MOP_JMP__R_R())});
     decodeStorage.insert({"JMP$M$R", (MOP_BASE*)(new MOP_JMP__M_R())});
     decodeStorage.insert({"JMP$I$R", (MOP_BASE*)(new MOP_JMP__I_R())});
     decodeStorage.insert({"JMP$RR$R", (MOP_BASE*)(new MOP_JMP_R_R_R())});
     decodeStorage.insert({"JMP$RM$R", (MOP_BASE*)(new MOP_JMP_R_M_R())});
     decodeStorage.insert({"JMP$RI$R", (MOP_BASE*)(new MOP_JMP_R_I_R())});
     decodeStorage.insert({"JE$R$R", (MOP_BASE*)(new MOP_JMP__R_R())});
     decodeStorage.insert({"JE$M$R", (MOP_BASE*)(new MOP_JMP__M_R())});
     decodeStorage.insert({"JE$I$R", (MOP_BASE*)(new MOP_JMP__I_R())});
     decodeStorage.insert({"JE$RR$R", (MOP_BASE*)(new MOP_JMP_R_R_R())});
     decodeStorage.insert({"JE$RM$R", (MOP_BASE*)(new MOP_JMP_R_M_R())});
     decodeStorage.insert({"JE$RI$R", (MOP_BASE*)(new MOP_JMP_R_I_R())});
     decodeStorage.insert({"JNE$R$R", (MOP_BASE*)(new MOP_JMP__R_R())});
     decodeStorage.insert({"JNE$M$R", (MOP_BASE*)(new MOP_JMP__M_R())});
     decodeStorage.insert({"JNE$I$R", (MOP_BASE*)(new MOP_JMP__I_R())});
     decodeStorage.insert({"JNE$RR$R", (MOP_BASE*)(new MOP_JMP_R_R_R())});
     decodeStorage.insert({"JNE$RM$R", (MOP_BASE*)(new MOP_JMP_R_M_R())});
     decodeStorage.insert({"JNE$RI$R", (MOP_BASE*)(new MOP_JMP_R_I_R())});
     decodeStorage.insert({"JZ$R$R", (MOP_BASE*)(new MOP_JMP__R_R())});
     decodeStorage.insert({"JZ$M$R", (MOP_BASE*)(new MOP_JMP__M_R())});
     decodeStorage.insert({"JZ$I$R", (MOP_BASE*)(new MOP_JMP__I_R())});
     decodeStorage.insert({"JZ$RR$R", (MOP_BASE*)(new MOP_JMP_R_R_R())});
     decodeStorage.insert({"JZ$RM$R", (MOP_BASE*)(new MOP_JMP_R_M_R())});
     decodeStorage.insert({"JZ$RI$R", (MOP_BASE*)(new MOP_JMP_R_I_R())});
     decodeStorage.insert({"JNZ$R$R", (MOP_BASE*)(new MOP_JMP__R_R())});
     decodeStorage.insert({"JNZ$M$R", (MOP_BASE*)(new MOP_JMP__M_R())});
     decodeStorage.insert({"JNZ$I$R", (MOP_BASE*)(new MOP_JMP__I_R())});
     decodeStorage.insert({"JNZ$RR$R", (MOP_BASE*)(new MOP_JMP_R_R_R())});
     decodeStorage.insert({"JNZ$RM$R", (MOP_BASE*)(new MOP_JMP_R_M_R())});
     decodeStorage.insert({"JNZ$RI$R", (MOP_BASE*)(new MOP_JMP_R_I_R())});
     decodeStorage.insert({"JL$R$R", (MOP_BASE*)(new MOP_JMP__R_R())});
     decodeStorage.insert({"JL$M$R", (MOP_BASE*)(new MOP_JMP__M_R())});
     decodeStorage.insert({"JL$I$R", (MOP_BASE*)(new MOP_JMP__I_R())});
     decodeStorage.insert({"JL$RR$R", (MOP_BASE*)(new MOP_JMP_R_R_R())});
     decodeStorage.insert({"JL$RM$R", (MOP_BASE*)(new MOP_JMP_R_M_R())});
     decodeStorage.insert({"JL$RI$R", (MOP_BASE*)(new MOP_JMP_R_I_R())});
     decodeStorage.insert({"JLE$R$R", (MOP_BASE*)(new MOP_JMP__R_R())});
     decodeStorage.insert({"JLE$M$R", (MOP_BASE*)(new MOP_JMP__M_R())});
     decodeStorage.insert({"JLE$I$R", (MOP_BASE*)(new MOP_JMP__I_R())});
     decodeStorage.insert({"JLE$RR$R", (MOP_BASE*)(new MOP_JMP_R_R_R())});
     decodeStorage.insert({"JLE$RM$R", (MOP_BASE*)(new MOP_JMP_R_M_R())});
     decodeStorage.insert({"JLE$RI$R", (MOP_BASE*)(new MOP_JMP_R_I_R())});
     decodeStorage.insert({"JG$R$R", (MOP_BASE*)(new MOP_JMP__R_R())});
     decodeStorage.insert({"JG$M$R", (MOP_BASE*)(new MOP_JMP__M_R())});
     decodeStorage.insert({"JG$I$R", (MOP_BASE*)(new MOP_JMP__I_R())});
     decodeStorage.insert({"JG$RR$R", (MOP_BASE*)(new MOP_JMP_R_R_R())});
     decodeStorage.insert({"JG$RM$R", (MOP_BASE*)(new MOP_JMP_R_M_R())});
     decodeStorage.insert({"JG$RI$R", (MOP_BASE*)(new MOP_JMP_R_I_R())});
     decodeStorage.insert({"JGE$R$R", (MOP_BASE*)(new MOP_JMP__R_R())});
     decodeStorage.insert({"JGE$M$R", (MOP_BASE*)(new MOP_JMP__M_R())});
     decodeStorage.insert({"JGE$I$R", (MOP_BASE*)(new MOP_JMP__I_R())});
     decodeStorage.insert({"JGE$RR$R", (MOP_BASE*)(new MOP_JMP_R_R_R())});
     decodeStorage.insert({"JGE$RM$R", (MOP_BASE*)(new MOP_JMP_R_M_R())});
     decodeStorage.insert({"JGE$RI$R", (MOP_BASE*)(new MOP_JMP_R_I_R())});
     decodeStorage.insert({"JA$R$R", (MOP_BASE*)(new MOP_JMP__R_R())});
     decodeStorage.insert({"JA$M$R", (MOP_BASE*)(new MOP_JMP__M_R())});
     decodeStorage.insert({"JA$I$R", (MOP_BASE*)(new MOP_JMP__I_R())});
     decodeStorage.insert({"JA$RR$R", (MOP_BASE*)(new MOP_JMP_R_R_R())});
     decodeStorage.insert({"JA$RM$R", (MOP_BASE*)(new MOP_JMP_R_M_R())});
     decodeStorage.insert({"JA$RI$R", (MOP_BASE*)(new MOP_JMP_R_I_R())});
     decodeStorage.insert({"JAE$R$R", (MOP_BASE*)(new MOP_JMP__R_R())});
     decodeStorage.insert({"JAE$M$R", (MOP_BASE*)(new MOP_JMP__M_R())});
     decodeStorage.insert({"JAE$I$R", (MOP_BASE*)(new MOP_JMP__I_R())});
     decodeStorage.insert({"JAE$RR$R", (MOP_BASE*)(new MOP_JMP_R_R_R())});
     decodeStorage.insert({"JAE$RM$R", (MOP_BASE*)(new MOP_JMP_R_M_R())});
     decodeStorage.insert({"JAE$RI$R", (MOP_BASE*)(new MOP_JMP_R_I_R())});
     decodeStorage.insert({"JB$R$R", (MOP_BASE*)(new MOP_JMP__R_R())});
     decodeStorage.insert({"JB$M$R", (MOP_BASE*)(new MOP_JMP__M_R())});
     decodeStorage.insert({"JB$I$R", (MOP_BASE*)(new MOP_JMP__I_R())});
     decodeStorage.insert({"JB$RR$R", (MOP_BASE*)(new MOP_JMP_R_R_R())});
     decodeStorage.insert({"JB$RM$R", (MOP_BASE*)(new MOP_JMP_R_M_R())});
     decodeStorage.insert({"JB$RI$R", (MOP_BASE*)(new MOP_JMP_R_I_R())});
     decodeStorage.insert({"JBE$R$R", (MOP_BASE*)(new MOP_JMP__R_R())});
     decodeStorage.insert({"JBE$M$R", (MOP_BASE*)(new MOP_JMP__M_R())});
     decodeStorage.insert({"JBE$I$R", (MOP_BASE*)(new MOP_JMP__I_R())});
     decodeStorage.insert({"JBE$RR$R", (MOP_BASE*)(new MOP_JMP_R_R_R())});
     decodeStorage.insert({"JBE$RM$R", (MOP_BASE*)(new MOP_JMP_R_M_R())});
     decodeStorage.insert({"JBE$RI$R", (MOP_BASE*)(new MOP_JMP_R_I_R())});
     decodeStorage.insert({"CMP$RR$", (MOP_BASE*)(new MOP_CMP_RR())});
     decodeStorage.insert({"CMP$RI$", (MOP_BASE*)(new MOP_CMP_RI())});
     decodeStorage.insert({"CMP$RM$", (MOP_BASE*)(new MOP_CMP_RM())});
     decodeStorage.insert({"CMP$MI$", (MOP_BASE*)(new MOP_CMP_MI())});
     decodeStorage.insert({"V256_PSEUDO_MOV$R$R", (MOP_BASE*)(new MOP_MOV_V64_R_R())});
     decodeStorage.insert({"V256_PSEUDO_MOV$R$M", (MOP_BASE*)(new MOP_MOV_V64_R_M())});
     decodeStorage.insert({"V256_PSEUDO_MOV$M$R", (MOP_BASE*)(new MOP_MOV_V64_M_R())});
     decodeStorage.insert({"V256_PSEUDO_MOV$I$R", (MOP_BASE*)(new MOP_MOV_V64_I_R())});
     decodeStorage.insert({"V256_PSEUDO_MOV$I$M", (MOP_BASE*)(new MOP_MOV_V64_I_M())});
     decodeStorage.insert({"V128_PSEUDO_MOV$R$R", (MOP_BASE*)(new MOP_MOV_V128_R_R())});
     decodeStorage.insert({"V128_PSEUDO_MOV$R$M", (MOP_BASE*)(new MOP_MOV_V128_R_M())});
     decodeStorage.insert({"V128_PSEUDO_MOV$M$R", (MOP_BASE*)(new MOP_MOV_V128_M_R())});
     decodeStorage.insert({"V128_PSEUDO_MOV$I$R", (MOP_BASE*)(new MOP_MOV_V128_I_R())});
     decodeStorage.insert({"V128_PSEUDO_MOV$I$M", (MOP_BASE*)(new MOP_MOV_V128_I_M())});
     decodeStorage.insert({"V64_PSEUDO_MOV$R$R", (MOP_BASE*)(new MOP_MOV_V128_R_R())});
     decodeStorage.insert({"V64_PSEUDO_MOV$R$M", (MOP_BASE*)(new MOP_MOV_V128_R_M())});
     decodeStorage.insert({"V64_PSEUDO_MOV$M$R", (MOP_BASE*)(new MOP_MOV_V128_M_R())});
     decodeStorage.insert({"V64_PSEUDO_MOV$I$R", (MOP_BASE*)(new MOP_MOV_V128_I_R())});
     decodeStorage.insert({"V64_PSEUDO_MOV$I$M", (MOP_BASE*)(new MOP_MOV_V128_I_M())});
     decodeStorage.insert({"V256_PSEUDO_COMP$RI$R", (MOP_BASE*)(new MOP_COMP_V64_R_I_R())});
     decodeStorage.insert({"V256_PSEUDO_COMP$RI$M", (MOP_BASE*)(new MOP_COMP_V64_R_I_M())});
     decodeStorage.insert({"V256_PSEUDO_COMP$RR$R", (MOP_BASE*)(new MOP_COMP_V64_R_R_R())});
     decodeStorage.insert({"V256_PSEUDO_COMP$RR$M", (MOP_BASE*)(new MOP_COMP_V64_R_R_M())});
     decodeStorage.insert({"V256_PSEUDO_COMP$RM$R", (MOP_BASE*)(new MOP_COMP_V64_R_M_R())});
     decodeStorage.insert({"V256_PSEUDO_COMP$RM$M", (MOP_BASE*)(new MOP_COMP_V64_R_M_M())});
     decodeStorage.insert({"V256_PSEUDO_COMP$MI$R", (MOP_BASE*)(new MOP_COMP_V64_M_I_R())});
     decodeStorage.insert({"V256_PSEUDO_COMP$MI$M", (MOP_BASE*)(new MOP_COMP_V64_M_I_M())});
     decodeStorage.insert({"V256_PSEUDO_COMP$MR$R", (MOP_BASE*)(new MOP_COMP_V64_M_R_R())});
     decodeStorage.insert({"V256_PSEUDO_COMP$MR$M", (MOP_BASE*)(new MOP_COMP_V64_M_R_M())});
     decodeStorage.insert({"V256_PSEUDO_COMP$MM$R", (MOP_BASE*)(new MOP_COMP_V64_M_M_R())});
     decodeStorage.insert({"V256_PSEUDO_COMP$MM$M", (MOP_BASE*)(new MOP_COMP_V64_M_M_M())});
     decodeStorage.insert({"V128_PSEUDO_COMP$RI$R", (MOP_BASE*)(new MOP_COMP_V128_R_I_R())});
     decodeStorage.insert({"V128_PSEUDO_COMP$RI$M", (MOP_BASE*)(new MOP_COMP_V128_R_I_M())});
     decodeStorage.insert({"V128_PSEUDO_COMP$RR$R", (MOP_BASE*)(new MOP_COMP_V128_R_R_R())});
     decodeStorage.insert({"V128_PSEUDO_COMP$RR$M", (MOP_BASE*)(new MOP_COMP_V128_R_R_M())});
     decodeStorage.insert({"V128_PSEUDO_COMP$RM$R", (MOP_BASE*)(new MOP_COMP_V128_R_M_R())});
     decodeStorage.insert({"V128_PSEUDO_COMP$RM$M", (MOP_BASE*)(new MOP_COMP_V128_R_M_M())});
     decodeStorage.insert({"V128_PSEUDO_COMP$MI$R", (MOP_BASE*)(new MOP_COMP_V128_M_I_R())});
     decodeStorage.insert({"V128_PSEUDO_COMP$MI$M", (MOP_BASE*)(new MOP_COMP_V128_M_I_M())});
     decodeStorage.insert({"V128_PSEUDO_COMP$MR$R", (MOP_BASE*)(new MOP_COMP_V128_M_R_R())});
     decodeStorage.insert({"V128_PSEUDO_COMP$MR$M", (MOP_BASE*)(new MOP_COMP_V128_M_R_M())});
     decodeStorage.insert({"V128_PSEUDO_COMP$MM$R", (MOP_BASE*)(new MOP_COMP_V128_M_M_R())});
     decodeStorage.insert({"V128_PSEUDO_COMP$MM$M", (MOP_BASE*)(new MOP_COMP_V128_M_M_M())});
     decodeStorage.insert({"V64_PSEUDO_COMP$RI$R", (MOP_BASE*)(new MOP_COMP_V128_R_I_R())});
     decodeStorage.insert({"V64_PSEUDO_COMP$RI$M", (MOP_BASE*)(new MOP_COMP_V128_R_I_M())});
     decodeStorage.insert({"V64_PSEUDO_COMP$RR$R", (MOP_BASE*)(new MOP_COMP_V128_R_R_R())});
     decodeStorage.insert({"V64_PSEUDO_COMP$RR$M", (MOP_BASE*)(new MOP_COMP_V128_R_R_M())});
     decodeStorage.insert({"V64_PSEUDO_COMP$RM$R", (MOP_BASE*)(new MOP_COMP_V128_R_M_R())});
     decodeStorage.insert({"V64_PSEUDO_COMP$RM$M", (MOP_BASE*)(new MOP_COMP_V128_R_M_M())});
     decodeStorage.insert({"V64_PSEUDO_COMP$MI$R", (MOP_BASE*)(new MOP_COMP_V128_M_I_R())});
     decodeStorage.insert({"V64_PSEUDO_COMP$MI$M", (MOP_BASE*)(new MOP_COMP_V128_M_I_M())});
     decodeStorage.insert({"V64_PSEUDO_COMP$MR$R", (MOP_BASE*)(new MOP_COMP_V128_M_R_R())});
     decodeStorage.insert({"V64_PSEUDO_COMP$MR$M", (MOP_BASE*)(new MOP_COMP_V128_M_R_M())});
     decodeStorage.insert({"V64_PSEUDO_COMP$MM$R", (MOP_BASE*)(new MOP_COMP_V128_M_M_R())});
     decodeStorage.insert({"V64_PSEUDO_COMP$MM$M", (MOP_BASE*)(new MOP_COMP_V128_M_M_M())});
     decodeStorage.insert({"MOV$M$R", (MOP_BASE*)(new MOP_MOV_M_R())});
     decodeStorage.insert({"MOV$I$R", (MOP_BASE*)(new MOP_MOV_I_R())});
     decodeStorage.insert({"MOV$R$R", (MOP_BASE*)(new MOP_MOV_R_R())});
     decodeStorage.insert({"POP$M$R", (MOP_BASE*)(new MOP_MOV_M_R())});
     decodeStorage.insert({"LEA$R$R", (MOP_BASE*)(new MOP_MOV_R_R())});
     decodeStorage.insert({"LEA$RR$R", (MOP_BASE*)(new MOP_COMP_R_R_R())});
     decodeStorage.insert({"MOV$I$M", (MOP_BASE*)(new MOP_MOV_I_M())});
     decodeStorage.insert({"MOV$R$M", (MOP_BASE*)(new MOP_MOV_R_M())});
     decodeStorage.insert({"PUSH$R$M", (MOP_BASE*)(new MOP_MOV_R_M())});
     decodeStorage.insert({"ADC$RI$R", (MOP_BASE*)(new MOP_COMP_R_I_R())});
     decodeStorage.insert({"ADC$RI$M", (MOP_BASE*)(new MOP_COMP_R_I_M())});
     decodeStorage.insert({"ADC$RR$R", (MOP_BASE*)(new MOP_COMP_R_R_R())});
     decodeStorage.insert({"ADC$RR$M", (MOP_BASE*)(new MOP_COMP_R_R_M())});
     decodeStorage.insert({"ADC$RM$R", (MOP_BASE*)(new MOP_COMP_R_M_R())});
     decodeStorage.insert({"ADC$RM$M", (MOP_BASE*)(new MOP_COMP_R_M_M())});
     decodeStorage.insert({"ADC$MI$R", (MOP_BASE*)(new MOP_COMP_M_I_R())});
     decodeStorage.insert({"ADC$MI$M", (MOP_BASE*)(new MOP_COMP_M_I_M())});
     decodeStorage.insert({"ADC$MR$R", (MOP_BASE*)(new MOP_COMP_M_R_R())});
     decodeStorage.insert({"ADC$MR$M", (MOP_BASE*)(new MOP_COMP_M_R_M())});
     decodeStorage.insert({"ADC$MM$R", (MOP_BASE*)(new MOP_COMP_M_M_R())});
     decodeStorage.insert({"ADC$MM$M", (MOP_BASE*)(new MOP_COMP_M_M_M())});
     decodeStorage.insert({"ADD$RI$R", (MOP_BASE*)(new MOP_COMP_R_I_R())});
     decodeStorage.insert({"ADD$RI$M", (MOP_BASE*)(new MOP_COMP_R_I_M())});
     decodeStorage.insert({"ADD$RR$R", (MOP_BASE*)(new MOP_COMP_R_R_R())});
     decodeStorage.insert({"ADD$RR$M", (MOP_BASE*)(new MOP_COMP_R_R_M())});
     decodeStorage.insert({"ADD$RM$R", (MOP_BASE*)(new MOP_COMP_R_M_R())});
     decodeStorage.insert({"ADD$RM$M", (MOP_BASE*)(new MOP_COMP_R_M_M())});
     decodeStorage.insert({"ADD$MI$R", (MOP_BASE*)(new MOP_COMP_M_I_R())});
     decodeStorage.insert({"ADD$MI$M", (MOP_BASE*)(new MOP_COMP_M_I_M())});
     decodeStorage.insert({"ADD$MR$R", (MOP_BASE*)(new MOP_COMP_M_R_R())});
     decodeStorage.insert({"ADD$MR$M", (MOP_BASE*)(new MOP_COMP_M_R_M())});
     decodeStorage.insert({"ADD$MM$R", (MOP_BASE*)(new MOP_COMP_M_M_R())});
     decodeStorage.insert({"ADD$MM$M", (MOP_BASE*)(new MOP_COMP_M_M_M())});
     decodeStorage.insert({"AND$RI$R", (MOP_BASE*)(new MOP_COMP_R_I_R())});
     decodeStorage.insert({"AND$RI$M", (MOP_BASE*)(new MOP_COMP_R_I_M())});
     decodeStorage.insert({"AND$RR$R", (MOP_BASE*)(new MOP_COMP_R_R_R())});
     decodeStorage.insert({"AND$RR$M", (MOP_BASE*)(new MOP_COMP_R_R_M())});
     decodeStorage.insert({"AND$RM$R", (MOP_BASE*)(new MOP_COMP_R_M_R())});
     decodeStorage.insert({"AND$RM$M", (MOP_BASE*)(new MOP_COMP_R_M_M())});
     decodeStorage.insert({"AND$MI$R", (MOP_BASE*)(new MOP_COMP_M_I_R())});
     decodeStorage.insert({"AND$MI$M", (MOP_BASE*)(new MOP_COMP_M_I_M())});
     decodeStorage.insert({"AND$MR$R", (MOP_BASE*)(new MOP_COMP_M_R_R())});
     decodeStorage.insert({"AND$MR$M", (MOP_BASE*)(new MOP_COMP_M_R_M())});
     decodeStorage.insert({"AND$MM$R", (MOP_BASE*)(new MOP_COMP_M_M_R())});
     decodeStorage.insert({"AND$MM$M", (MOP_BASE*)(new MOP_COMP_M_M_M())});
     decodeStorage.insert({"OR$RI$R", (MOP_BASE*)(new MOP_COMP_R_I_R())});
     decodeStorage.insert({"OR$RI$M", (MOP_BASE*)(new MOP_COMP_R_I_M())});
     decodeStorage.insert({"OR$RR$R", (MOP_BASE*)(new MOP_COMP_R_R_R())});
     decodeStorage.insert({"OR$RR$M", (MOP_BASE*)(new MOP_COMP_R_R_M())});
     decodeStorage.insert({"OR$RM$R", (MOP_BASE*)(new MOP_COMP_R_M_R())});
     decodeStorage.insert({"OR$RM$M", (MOP_BASE*)(new MOP_COMP_R_M_M())});
     decodeStorage.insert({"OR$MI$R", (MOP_BASE*)(new MOP_COMP_M_I_R())});
     decodeStorage.insert({"OR$MI$M", (MOP_BASE*)(new MOP_COMP_M_I_M())});
     decodeStorage.insert({"OR$MR$R", (MOP_BASE*)(new MOP_COMP_M_R_R())});
     decodeStorage.insert({"OR$MR$M", (MOP_BASE*)(new MOP_COMP_M_R_M())});
     decodeStorage.insert({"OR$MM$R", (MOP_BASE*)(new MOP_COMP_M_M_R())});
     decodeStorage.insert({"OR$MM$M", (MOP_BASE*)(new MOP_COMP_M_M_M())});
     decodeStorage.insert({"ROL$RI$R", (MOP_BASE*)(new MOP_COMP_R_I_R())});
     decodeStorage.insert({"ROL$RI$M", (MOP_BASE*)(new MOP_COMP_R_I_M())});
     decodeStorage.insert({"ROL$RR$R", (MOP_BASE*)(new MOP_COMP_R_R_R())});
     decodeStorage.insert({"ROL$RR$M", (MOP_BASE*)(new MOP_COMP_R_R_M())});
     decodeStorage.insert({"ROL$RM$R", (MOP_BASE*)(new MOP_COMP_R_M_R())});
     decodeStorage.insert({"ROL$RM$M", (MOP_BASE*)(new MOP_COMP_R_M_M())});
     decodeStorage.insert({"ROL$MI$R", (MOP_BASE*)(new MOP_COMP_M_I_R())});
     decodeStorage.insert({"ROL$MI$M", (MOP_BASE*)(new MOP_COMP_M_I_M())});
     decodeStorage.insert({"ROL$MR$R", (MOP_BASE*)(new MOP_COMP_M_R_R())});
     decodeStorage.insert({"ROL$MR$M", (MOP_BASE*)(new MOP_COMP_M_R_M())});
     decodeStorage.insert({"ROL$MM$R", (MOP_BASE*)(new MOP_COMP_M_M_R())});
     decodeStorage.insert({"ROL$MM$M", (MOP_BASE*)(new MOP_COMP_M_M_M())});
     decodeStorage.insert({"ROR$RI$R", (MOP_BASE*)(new MOP_COMP_R_I_R())});
     decodeStorage.insert({"ROR$RI$M", (MOP_BASE*)(new MOP_COMP_R_I_M())});
     decodeStorage.insert({"ROR$RR$R", (MOP_BASE*)(new MOP_COMP_R_R_R())});
     decodeStorage.insert({"ROR$RR$M", (MOP_BASE*)(new MOP_COMP_R_R_M())});
     decodeStorage.insert({"ROR$RM$R", (MOP_BASE*)(new MOP_COMP_R_M_R())});
     decodeStorage.insert({"ROR$RM$M", (MOP_BASE*)(new MOP_COMP_R_M_M())});
     decodeStorage.insert({"ROR$MI$R", (MOP_BASE*)(new MOP_COMP_M_I_R())});
     decodeStorage.insert({"ROR$MI$M", (MOP_BASE*)(new MOP_COMP_M_I_M())});
     decodeStorage.insert({"ROR$MR$R", (MOP_BASE*)(new MOP_COMP_M_R_R())});
     decodeStorage.insert({"ROR$MR$M", (MOP_BASE*)(new MOP_COMP_M_R_M())});
     decodeStorage.insert({"ROR$MM$R", (MOP_BASE*)(new MOP_COMP_M_M_R())});
     decodeStorage.insert({"ROR$MM$M", (MOP_BASE*)(new MOP_COMP_M_M_M())});
     decodeStorage.insert({"SAL$RI$R", (MOP_BASE*)(new MOP_COMP_R_I_R())});
     decodeStorage.insert({"SAL$RI$M", (MOP_BASE*)(new MOP_COMP_R_I_M())});
     decodeStorage.insert({"SAL$RR$R", (MOP_BASE*)(new MOP_COMP_R_R_R())});
     decodeStorage.insert({"SAL$RR$M", (MOP_BASE*)(new MOP_COMP_R_R_M())});
     decodeStorage.insert({"SAL$RM$R", (MOP_BASE*)(new MOP_COMP_R_M_R())});
     decodeStorage.insert({"SAL$RM$M", (MOP_BASE*)(new MOP_COMP_R_M_M())});
     decodeStorage.insert({"SAL$MI$R", (MOP_BASE*)(new MOP_COMP_M_I_R())});
     decodeStorage.insert({"SAL$MI$M", (MOP_BASE*)(new MOP_COMP_M_I_M())});
     decodeStorage.insert({"SAL$MR$R", (MOP_BASE*)(new MOP_COMP_M_R_R())});
     decodeStorage.insert({"SAL$MR$M", (MOP_BASE*)(new MOP_COMP_M_R_M())});
     decodeStorage.insert({"SAL$MM$R", (MOP_BASE*)(new MOP_COMP_M_M_R())});
     decodeStorage.insert({"SAL$MM$M", (MOP_BASE*)(new MOP_COMP_M_M_M())});
     decodeStorage.insert({"SAR$RI$R", (MOP_BASE*)(new MOP_COMP_R_I_R())});
     decodeStorage.insert({"SAR$RI$M", (MOP_BASE*)(new MOP_COMP_R_I_M())});
     decodeStorage.insert({"SAR$RR$R", (MOP_BASE*)(new MOP_COMP_R_R_R())});
     decodeStorage.insert({"SAR$RR$M", (MOP_BASE*)(new MOP_COMP_R_R_M())});
     decodeStorage.insert({"SAR$RM$R", (MOP_BASE*)(new MOP_COMP_R_M_R())});
     decodeStorage.insert({"SAR$RM$M", (MOP_BASE*)(new MOP_COMP_R_M_M())});
     decodeStorage.insert({"SAR$MI$R", (MOP_BASE*)(new MOP_COMP_M_I_R())});
     decodeStorage.insert({"SAR$MI$M", (MOP_BASE*)(new MOP_COMP_M_I_M())});
     decodeStorage.insert({"SAR$MR$R", (MOP_BASE*)(new MOP_COMP_M_R_R())});
     decodeStorage.insert({"SAR$MR$M", (MOP_BASE*)(new MOP_COMP_M_R_M())});
     decodeStorage.insert({"SAR$MM$R", (MOP_BASE*)(new MOP_COMP_M_M_R())});
     decodeStorage.insert({"SAR$MM$M", (MOP_BASE*)(new MOP_COMP_M_M_M())});
     decodeStorage.insert({"SBB$RI$R", (MOP_BASE*)(new MOP_COMP_R_I_R())});
     decodeStorage.insert({"SBB$RI$M", (MOP_BASE*)(new MOP_COMP_R_I_M())});
     decodeStorage.insert({"SBB$RR$R", (MOP_BASE*)(new MOP_COMP_R_R_R())});
     decodeStorage.insert({"SBB$RR$M", (MOP_BASE*)(new MOP_COMP_R_R_M())});
     decodeStorage.insert({"SBB$RM$R", (MOP_BASE*)(new MOP_COMP_R_M_R())});
     decodeStorage.insert({"SBB$RM$M", (MOP_BASE*)(new MOP_COMP_R_M_M())});
     decodeStorage.insert({"SBB$MI$R", (MOP_BASE*)(new MOP_COMP_M_I_R())});
     decodeStorage.insert({"SBB$MI$M", (MOP_BASE*)(new MOP_COMP_M_I_M())});
     decodeStorage.insert({"SBB$MR$R", (MOP_BASE*)(new MOP_COMP_M_R_R())});
     decodeStorage.insert({"SBB$MR$M", (MOP_BASE*)(new MOP_COMP_M_R_M())});
     decodeStorage.insert({"SBB$MM$R", (MOP_BASE*)(new MOP_COMP_M_M_R())});
     decodeStorage.insert({"SBB$MM$M", (MOP_BASE*)(new MOP_COMP_M_M_M())});
     decodeStorage.insert({"SHL$RI$R", (MOP_BASE*)(new MOP_COMP_R_I_R())});
     decodeStorage.insert({"SHL$RI$M", (MOP_BASE*)(new MOP_COMP_R_I_M())});
     decodeStorage.insert({"SHL$RR$R", (MOP_BASE*)(new MOP_COMP_R_R_R())});
     decodeStorage.insert({"SHL$RR$M", (MOP_BASE*)(new MOP_COMP_R_R_M())});
     decodeStorage.insert({"SHL$RM$R", (MOP_BASE*)(new MOP_COMP_R_M_R())});
     decodeStorage.insert({"SHL$RM$M", (MOP_BASE*)(new MOP_COMP_R_M_M())});
     decodeStorage.insert({"SHL$MI$R", (MOP_BASE*)(new MOP_COMP_M_I_R())});
     decodeStorage.insert({"SHL$MI$M", (MOP_BASE*)(new MOP_COMP_M_I_M())});
     decodeStorage.insert({"SHL$MR$R", (MOP_BASE*)(new MOP_COMP_M_R_R())});
     decodeStorage.insert({"SHL$MR$M", (MOP_BASE*)(new MOP_COMP_M_R_M())});
     decodeStorage.insert({"SHL$MM$R", (MOP_BASE*)(new MOP_COMP_M_M_R())});
     decodeStorage.insert({"SHL$MM$M", (MOP_BASE*)(new MOP_COMP_M_M_M())});
     decodeStorage.insert({"SHLD$RI$R", (MOP_BASE*)(new MOP_COMP_R_I_R())});
     decodeStorage.insert({"SHLD$RI$M", (MOP_BASE*)(new MOP_COMP_R_I_M())});
     decodeStorage.insert({"SHLD$RR$R", (MOP_BASE*)(new MOP_COMP_R_R_R())});
     decodeStorage.insert({"SHLD$RR$M", (MOP_BASE*)(new MOP_COMP_R_R_M())});
     decodeStorage.insert({"SHLD$RM$R", (MOP_BASE*)(new MOP_COMP_R_M_R())});
     decodeStorage.insert({"SHLD$RM$M", (MOP_BASE*)(new MOP_COMP_R_M_M())});
     decodeStorage.insert({"SHLD$MI$R", (MOP_BASE*)(new MOP_COMP_M_I_R())});
     decodeStorage.insert({"SHLD$MI$M", (MOP_BASE*)(new MOP_COMP_M_I_M())});
     decodeStorage.insert({"SHLD$MR$R", (MOP_BASE*)(new MOP_COMP_M_R_R())});
     decodeStorage.insert({"SHLD$MR$M", (MOP_BASE*)(new MOP_COMP_M_R_M())});
     decodeStorage.insert({"SHLD$MM$R", (MOP_BASE*)(new MOP_COMP_M_M_R())});
     decodeStorage.insert({"SHLD$MM$M", (MOP_BASE*)(new MOP_COMP_M_M_M())});
     decodeStorage.insert({"SHR$RI$R", (MOP_BASE*)(new MOP_COMP_R_I_R())});
     decodeStorage.insert({"SHR$RI$M", (MOP_BASE*)(new MOP_COMP_R_I_M())});
     decodeStorage.insert({"SHR$RR$R", (MOP_BASE*)(new MOP_COMP_R_R_R())});
     decodeStorage.insert({"SHR$RR$M", (MOP_BASE*)(new MOP_COMP_R_R_M())});
     decodeStorage.insert({"SHR$RM$R", (MOP_BASE*)(new MOP_COMP_R_M_R())});
     decodeStorage.insert({"SHR$RM$M", (MOP_BASE*)(new MOP_COMP_R_M_M())});
     decodeStorage.insert({"SHR$MI$R", (MOP_BASE*)(new MOP_COMP_M_I_R())});
     decodeStorage.insert({"SHR$MI$M", (MOP_BASE*)(new MOP_COMP_M_I_M())});
     decodeStorage.insert({"SHR$MR$R", (MOP_BASE*)(new MOP_COMP_M_R_R())});
     decodeStorage.insert({"SHR$MR$M", (MOP_BASE*)(new MOP_COMP_M_R_M())});
     decodeStorage.insert({"SHR$MM$R", (MOP_BASE*)(new MOP_COMP_M_M_R())});
     decodeStorage.insert({"SHR$MM$M", (MOP_BASE*)(new MOP_COMP_M_M_M())});
     decodeStorage.insert({"SHRD$RI$R", (MOP_BASE*)(new MOP_COMP_R_I_R())});
     decodeStorage.insert({"SHRD$RI$M", (MOP_BASE*)(new MOP_COMP_R_I_M())});
     decodeStorage.insert({"SHRD$RR$R", (MOP_BASE*)(new MOP_COMP_R_R_R())});
     decodeStorage.insert({"SHRD$RR$M", (MOP_BASE*)(new MOP_COMP_R_R_M())});
     decodeStorage.insert({"SHRD$RM$R", (MOP_BASE*)(new MOP_COMP_R_M_R())});
     decodeStorage.insert({"SHRD$RM$M", (MOP_BASE*)(new MOP_COMP_R_M_M())});
     decodeStorage.insert({"SHRD$MI$R", (MOP_BASE*)(new MOP_COMP_M_I_R())});
     decodeStorage.insert({"SHRD$MI$M", (MOP_BASE*)(new MOP_COMP_M_I_M())});
     decodeStorage.insert({"SHRD$MR$R", (MOP_BASE*)(new MOP_COMP_M_R_R())});
     decodeStorage.insert({"SHRD$MR$M", (MOP_BASE*)(new MOP_COMP_M_R_M())});
     decodeStorage.insert({"SHRD$MM$R", (MOP_BASE*)(new MOP_COMP_M_M_R())});
     decodeStorage.insert({"SHRD$MM$M", (MOP_BASE*)(new MOP_COMP_M_M_M())});
     decodeStorage.insert({"SUB$RI$R", (MOP_BASE*)(new MOP_COMP_R_I_R())});
     decodeStorage.insert({"SUB$RI$M", (MOP_BASE*)(new MOP_COMP_R_I_M())});
     decodeStorage.insert({"SUB$RR$R", (MOP_BASE*)(new MOP_COMP_R_R_R())});
     decodeStorage.insert({"SUB$RR$M", (MOP_BASE*)(new MOP_COMP_R_R_M())});
     decodeStorage.insert({"SUB$RM$R", (MOP_BASE*)(new MOP_COMP_R_M_R())});
     decodeStorage.insert({"SUB$RM$M", (MOP_BASE*)(new MOP_COMP_R_M_M())});
     decodeStorage.insert({"SUB$MI$R", (MOP_BASE*)(new MOP_COMP_M_I_R())});
     decodeStorage.insert({"SUB$MI$M", (MOP_BASE*)(new MOP_COMP_M_I_M())});
     decodeStorage.insert({"SUB$MR$R", (MOP_BASE*)(new MOP_COMP_M_R_R())});
     decodeStorage.insert({"SUB$MR$M", (MOP_BASE*)(new MOP_COMP_M_R_M())});
     decodeStorage.insert({"SUB$MM$R", (MOP_BASE*)(new MOP_COMP_M_M_R())});
     decodeStorage.insert({"SUB$MM$M", (MOP_BASE*)(new MOP_COMP_M_M_M())});
     decodeStorage.insert({"XCHG$RI$R", (MOP_BASE*)(new MOP_COMP_R_I_R())});
     decodeStorage.insert({"XCHG$RI$M", (MOP_BASE*)(new MOP_COMP_R_I_M())});
     decodeStorage.insert({"XCHG$RR$R", (MOP_BASE*)(new MOP_COMP_R_R_R())});
     decodeStorage.insert({"XCHG$RR$M", (MOP_BASE*)(new MOP_COMP_R_R_M())});
     decodeStorage.insert({"XCHG$RM$R", (MOP_BASE*)(new MOP_COMP_R_M_R())});
     decodeStorage.insert({"XCHG$RM$M", (MOP_BASE*)(new MOP_COMP_R_M_M())});
     decodeStorage.insert({"XCHG$MI$R", (MOP_BASE*)(new MOP_COMP_M_I_R())});
     decodeStorage.insert({"XCHG$MI$M", (MOP_BASE*)(new MOP_COMP_M_I_M())});
     decodeStorage.insert({"XCHG$MR$R", (MOP_BASE*)(new MOP_COMP_M_R_R())});
     decodeStorage.insert({"XCHG$MR$M", (MOP_BASE*)(new MOP_COMP_M_R_M())});
     decodeStorage.insert({"XCHG$MM$R", (MOP_BASE*)(new MOP_COMP_M_M_R())});
     decodeStorage.insert({"XCHG$MM$M", (MOP_BASE*)(new MOP_COMP_M_M_M())});
     decodeStorage.insert({"XOR$RI$R", (MOP_BASE*)(new MOP_COMP_R_I_R())});
     decodeStorage.insert({"XOR$RI$M", (MOP_BASE*)(new MOP_COMP_R_I_M())});
     decodeStorage.insert({"XOR$RR$R", (MOP_BASE*)(new MOP_COMP_R_R_R())});
     decodeStorage.insert({"XOR$RR$M", (MOP_BASE*)(new MOP_COMP_R_R_M())});
     decodeStorage.insert({"XOR$RM$R", (MOP_BASE*)(new MOP_COMP_R_M_R())});
     decodeStorage.insert({"XOR$RM$M", (MOP_BASE*)(new MOP_COMP_R_M_M())});
     decodeStorage.insert({"XOR$MI$R", (MOP_BASE*)(new MOP_COMP_M_I_R())});
     decodeStorage.insert({"XOR$MI$M", (MOP_BASE*)(new MOP_COMP_M_I_M())});
     decodeStorage.insert({"XOR$MR$R", (MOP_BASE*)(new MOP_COMP_M_R_R())});
     decodeStorage.insert({"XOR$MR$M", (MOP_BASE*)(new MOP_COMP_M_R_M())});
     decodeStorage.insert({"XOR$MM$R", (MOP_BASE*)(new MOP_COMP_M_M_R())});
     decodeStorage.insert({"XOR$MM$M", (MOP_BASE*)(new MOP_COMP_M_M_M())});
}






MOP_BASE*
DECODER_X86::decodeMOP(RT_INSTR& rt_instr) {
auto finder = decodeStorage.find(rt_instr.getDecodeKey());
return ( finder == decodeStorage.end() ) ? simpleMop: finder->second;

}
