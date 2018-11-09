#include <iostream>
#include "class_a.h"

using namespace miraclee;

int ClassA::get_num() {
    return this->num;
}

void ClassA::set_num(int num) {
    this->num = num;
}