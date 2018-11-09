#include "a_class.h"
#include <cmath>

B::B() {

}

B::~B() {

}

float B::Dis2(A &a1) {
    return sqrt((pow((a1.x - 0), 2) + pow((a1.y - 0), 2)));
}