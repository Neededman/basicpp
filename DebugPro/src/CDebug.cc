#include "GLOBAL.h"
#include "CArgvStatus.h"
#include "CDebug.h"

using namespace miraclee;
CDebug::CDebug() {}
CDebug::~CDebug() {}
void CDebug::DebugTest() {
#ifdef DEBUG 
    PTFUN(DebugTest);
#endif
    std::cout << "This is DebugTest Function" << std::endl;
}

void CDebug::DebugTest2() {
    if(CArgvStatus::debug)
        PTFUN(DebugTest2);
    std::cout << "This is DebugTest2 Function" << std::endl;
}