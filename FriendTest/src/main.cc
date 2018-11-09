#include "a_class.h"
#include <iostream>
float Dis1(A &a1) {
    return a1.x + a1.y;
}

int main() {
    A a1(3.0, 4.0);
    B *b = new B();
    C c;
    std::cout << b->Dis2(a1) << std::endl;
    std::cout << Dis1(a1) << std::endl;
    std::cout << c.Dis3(a1) << std::endl;
    delete b;
    return 0;
}