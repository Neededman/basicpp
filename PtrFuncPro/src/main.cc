#include "CPtrFunc.h"
#include <string>
#include <iostream>

using namespace std;
using namespace miraclee;

#define DF(N) void N() {\
    cout << "function " #N " called !" <<endl; \
}

typedef int (*func)(int, int);

int GetMin(int a, int b) {
    return a > b ? b : a;
}

int GetMax(int a, int b) {
    return a > b ? a : b;
}

void func2() {
    cout << "heh" <<endl;
}

DF(a);
DF(b);
DF(c);

int main(int argc, char **argv) {
    //使用字符串调用函数，有人用map实现多个函数的调用
    func GetBest;
    string str = "GetMin";
    if("GetMin" == str) {
        GetBest = &GetMin;
    }

    CPtrFunc ptrFunc;
    void (*f)() = func2;
    (*f)();
    f();
    cout << ptrFunc.PtrFuncTest(1, 3, GetBest) << endl;

    void (*func_table[])() = {a, b, c};
func_table[0]();0]();
func_table[0]();2]();
func_table[0]();1]();
func_table[0]();
    return 0;
}