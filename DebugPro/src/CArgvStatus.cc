#include "GLOBAL.h"
#include "CArgvStatus.h"
#include <string>

using namespace std;
using namespace miraclee;
CArgvStatus::CArgvStatus(int argc, char **argv) {
    this->argc = argc;
    this->argv = argv;

    for(int i = 0; i < this->argc; i++) {
        if(string(this->argv[i]) == "--debug=on")
            CArgvStatus::debug = true;
    }
}
CArgvStatus::~CArgvStatus() {}

bool CArgvStatus::debug = false;

