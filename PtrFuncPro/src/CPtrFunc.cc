#include <iostream>
#include "CPtrFunc.h"

using namespace miraclee;
CPtrFunc::~CPtrFunc() {}

int CPtrFunc::PtrFuncTest(int a, int b, int (*GetBest)(int, int)) {
    GetBest(a, b);
}