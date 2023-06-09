//
// Created by tanawin on 21/2/2566.
//

#include "mop_base.h"
#include "models/inst_model/rt_instr.h"

//////////////////////////////////////////
namespace traceBuilder::model {


    void
    MOP_SIMPLE::genUop(std::vector<UOP_BASE *> &results,
                        RT_INSTR* rt_instr) {
        assert(rt_instr != nullptr);
        ///////// stat
        stat::MAIN_STAT["mopGen"]["MOP_SIMPLE"].asUINT()++;
        ///////////////////////////////////////////////////////////////
        ////////////////////////////////////////////////////////////////
        ///
        /// generate simple micro-op
        ///
        ////////////////////////////////////////////////////////////////
        /////////// give one micro-op for one imm operand

        std::vector<UOP_BASE *> immUops;
        for (auto &immOpr: rt_instr->getSrcImmOperands()) {
            auto immUop = new UOP_SIMPLE(UOP_IMM);
            immUops.push_back((UOP_BASE*)immUop);
            results.push_back((UOP_BASE*)immUop);
        }
        /////////// give one micro-op for one load operand
        std::vector<UOP_BASE *> ldUops;
        for (auto &ldOpr: rt_instr->getSrcLdOperands()) {
            auto ldUop = new UOP_SIMPLE(UOP_LOAD);
            ldUop->addMemMeta(ldOpr.getMeta(), true);
            ldUops.push_back((UOP_BASE*)ldUop);
            results.push_back((UOP_BASE*)ldUop);
        }
        //////////// give only one uop for all reg compute node
        auto compUop = new UOP_SIMPLE(UOP_COMP);
        for (auto srcRegOpr: rt_instr->getSrcRegOperands()) {
            compUop->addRegMeta(srcRegOpr.getMeta(), true);
        }
        for (auto desRegOpr: rt_instr->getDesRegOperands()) {
            compUop->addRegMeta(desRegOpr.getMeta(), false);
        }
        results.push_back((UOP_BASE*)compUop);
        /////////// give one micro-op for one store operand
        std::vector<UOP_BASE *> stUops;
        for (auto &stOpr: rt_instr->getDesStOperands()) {
            auto stUop = new UOP_SIMPLE(UOP_STORE);
            stUop->addMemMeta(stOpr.getMeta(), false);
            stUops.push_back((UOP_BASE*)stUop);
            results.push_back((UOP_BASE*)stUop);
        }
        ////////////////////////////////////////////////////////////////
        ///
        /// connect dependency
        ///
        ////////////////////////////////////////////////////////////////

        /////////// dependency connection
        ////////////// connect comp uop to imm uop and ld uop
        for (auto ldUop: ldUops) {
            compUop->addTemDep(ldUop);
        }
        for (auto immUop: immUops) {
            compUop->addTemDep(immUop);
        }
        ////////////// connect store uop to comp uop
        for (auto stUop: stUops) {
            stUop->addTemDep(compUop);
        }
        /////////////return the pooled uop
    }

}