import base.mop.mop_group_base as mop_group
import base.operand.opr_simple as opr
import X86.mop.ctrlFlow.ctrl_mop  as mop_ctrl_flw_x86

class MOP_GROUP_CMP(mop_group.MOP_GROUP_BASE):
    decKeys0 = ["CMP", "TEST", "JNB"]

    srcOpr   = [opr.OPR_REG, opr.OPR_IMM, opr.OPR_MEM]

    def __init__(self):
        ####### simple compare
        super().__init__(5, mop_ctrl_flw_x86.MOP_CMP_ALL)
        self.addMopArgExtractComb((["CMP_ALL"],self.srcOpr, self.srcOpr, ["IntAlu"], [self.decKeys0]))


class MOP_GROUP_JMP(mop_group.MOP_GROUP_BASE):
    decKeys0 = ["JMP", "JE", "JZ",  "JL", "JB",
                "JLE", "JBE", "JG", "JA", "JGE",
                "JAE", "JNL", "JNE", "JNZ","JNB",
                "JNBE", "JNLE"]

    srcOpr   = [opr.OPR_REG, opr.OPR_IMM, opr.OPR_MEM]
    desOpr   = [opr.OPR_REG]

    def __init__(self):
        super().__init__(6, mop_ctrl_flw_x86.MOP_JMP_ALL)
        self.addMopArgExtractComb(( ["CTRL_ALL"], self.srcOpr, self.srcOpr, self.desOpr, ["IntAlu"], [self.decKeys0]))