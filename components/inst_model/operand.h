//
// Created by tanawin on 7/2/2566.
//

#ifndef TRACEBUILDER_OPERAND_H
#define TRACEBUILDER_OPERAND_H

#include "../../core/resMng/regMap/regMapper.h"
#include "../../core/resMng/memMng/MemMng.h"

typedef  unsigned long long IMM;


/// architecture instruction's operand

enum OPR_TYPE {
    T_REG,
    T_MEM_LD,
    T_MEM_ST,
    T_IMM,
    T_DUMMY
};

class OPERAND{
private:
    OPR_TYPE OT;
public:
    OPERAND(OPR_TYPE _OT);
    OPR_TYPE getOPTYPE() {return OT;};
};


/// register operand it is used at src and des operand
class REG_OPERAND : public OPERAND{
private:
    REGNUM regId;
public:
    REG_OPERAND(REGNUM _regId);
    REGNUM getRegId() const;
    REGNUM getValue();
};


/// memory operand
class MEM_OPERAND : public OPERAND{
private:
    REGNUM baseRegId;
    REGNUM indexRegId;
    int    scaleFactor;
    IMM    displacement;
    ADDR    size;
    int    memopNum;
    ADDR   phyAddr;

public:
    MEM_OPERAND(REGNUM _baseRegId,
                REGNUM _indexRegId,
                int    _scaleFactor,
                IMM    _displacement,
                ADDR    _size,
                int    _memopNum,
                OPR_TYPE _setOpr);

    REGNUM getBaseRegId() const;

    REGNUM getIndexRegId() const;

    int getScaleFactor() const;

    IMM getDisplacement() const;

    ADDR getSize() const;

    void setPhyAddr(ADDR phyAddr);

    int getMemopNum() const;

    ADDR getPhyAddr() const;

    ADAS getValue();

};
/// load operand
class LD_OPERAND : public MEM_OPERAND{
public:
    // load operand
    LD_OPERAND(REGNUM _baseRegId,
               REGNUM _indexRegId,
               int    _scaleFactor,
               IMM    _displacement,
               ADDR    _size,
               int    _memopNum);
};
/// store operand
class ST_OPERAND : public MEM_OPERAND{
public:
    // store operand
    ST_OPERAND(REGNUM _baseRegId,
               REGNUM _indexRegId,
               int    _scaleFactor,
               IMM    _displacement,
               ADDR    _size,
               int    _memopNum);
};
/// immediate operand
class IMM_OPERAND : public OPERAND{
    // imm operand
private:
    IMM imm;
public:
    IMM_OPERAND(IMM _imm);

    IMM getImm() const;

    IMM getValue();
};


#endif //TRACEBUILDER_OPERAND_H
