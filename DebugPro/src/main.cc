#include "GLOBAL.h"
#include "CDebug.h"
#include "CArgvStatus.h"
#include <cassert>

using namespace std;
using namespace miraclee;

int main(int argc, char **argv) {
    CArgvStatus argvStatus(argc, argv);
    CDebug debug;
    debug.DebugTest();
    debug.DebugTest2();

    int a = 1;
    assert(1 == a);
    std::cout << "test cmak" << endl;

    return 0;
}