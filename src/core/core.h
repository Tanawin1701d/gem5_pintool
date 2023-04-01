//
// Created by tanawin on 14/2/2566.
//

#ifndef TRACEBUILDER_CORE_H
#define TRACEBUILDER_CORE_H
#include <unordered_map>
#include "core/tracers/tracer.h"
#include "core/tracerFrontEnd/traceToolFed.h"
#include "core/tracers/tracer.h"


class CORE{
private:
    std::unordered_map<THREAD_ID, TRACER_BASE*>          traceWorkers;
    std::unordered_map<THREAD_ID, TRACE_TOOL_FRONT_END*> traceTools;
    THREAD_ID amountThread;

    MEM_MNG*      memMng;
    DECODER_BASE* decoder;



public:
    CORE(MEM_MNG* _memMng, DECODER_BASE* _decBase);
    void addWorker(TRACE_TOOL_FRONT_END* _trace_tool,
                   RESULT_FRONT_END*     _result_frontEnd,
                   int                   _obsSize
                        );
    void start(bool parallel);

};


#endif //TRACEBUILDER_CORE_H
