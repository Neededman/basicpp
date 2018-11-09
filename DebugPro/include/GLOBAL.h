#ifndef _GLOBAL_H_34u090
#define _GLOBAL_H_34u090
#include <iostream>
//调试技巧 根据是否定义了DEBUG, 判断是否输出相关的调试代码，但是每次都要重新编译
#define DEBUG
// #undef DEBUG
// 调试技巧：使用宏定义简化输出代码
#define PTFUN(x) std::cout<<"###" << #x << "###" <<std::endl;

#endif