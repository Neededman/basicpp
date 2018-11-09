#ifndef _A_CLASS_H_2347934_
#define _A_CLASS_H_2347934_

#include <cmath>
class A;
class C {
 public:
    C();
    virtual ~C();
    float Dis3(A &a1);
};

class B {
 public:
   B();
   virtual ~B();
   float Dis2(A &a1);
 private:
};

class A {
 public:
    A(float x, float y);
    virtual ~A();
    friend class B;
    friend float Dis1(A &a1);
    friend float C::Dis3(A &a1);
 private:
   float x;
   float y;
};
#endif