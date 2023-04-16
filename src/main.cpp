#include <iostream>
#include <chrono>
#include "example/simplePinGem.h"
#include "stat/statPool.h"

using namespace std::chrono;


int main() {

    auto startTime = high_resolution_clock::now();

    auto test = SIMPLE_PIN_GEM(
                "/media/tanawin/tanawin1701e/Project/sms/pintool/msmsPin/traceBuilder/pin/PinOutput/fluidanimate/static",
                "/media/tanawin/tanawin1701e/Project/sms/pintool/msmsPin/traceBuilder/pin/PinOutput/fluidanimate/dynamic",
                "/media/tanawin/tanawin1701e/Project/sms/pintool/msmsPin/traceBuilder/pin/TbOutput/fluidanimate/instr",
                "/media/tanawin/tanawin1701e/Project/sms/pintool/msmsPin/traceBuilder/pin/TbOutput/fluidanimate/data"
            );

    test.start();

    std::vector<std::string> statHelper;
    MAIN_STAT_MNG.preparePrint(statHelper);
    MAIN_STAT_MNG.print();
    MAIN_STAT_MNG.saveToFile("/media/tanawin/tanawin1701e/Project/sms/pintool/msmsPin/traceBuilder/pin/TbOutput/fluidanimate/stat");
    MAIN_STAT_MNG.clearStat();

    ///////// duration count
    auto stopTime = high_resolution_clock::now();
    auto duration = duration_cast<seconds>(stopTime - startTime);

    std::cout << "tracing take " << duration.count() << std::endl;
}