#include <string>
#include <iostream>
#include <thread>
#include <unistd.h>
#include <mutex>
#include "class_a.h"
#include "singleton1.hpp"

using namespace miraclee;
// typedef Singleton<ClassA> class_a;
std::mutex g_mutex;
const int COUNT = 1000;

void run() {
  g_mutex.lock();
  Singleton<ClassA>::Instance()->set_num(Singleton<ClassA>::Instance()->get_num() + 1);
  std::cout << Singleton<ClassA>::Instance()->get_num() << std::endl;
  g_mutex.unlock();
}

int main(int argc, char **argv) {
  Singleton<ClassA>::Instance()->set_num(0);
  std::thread th[COUNT];

  for(int i = 0; i < COUNT; i++) {
    th[i] = std::thread(run);
  }

  for(int i = 0; i < COUNT; i++) {
    th[i].join();
    usleep(1000);
  }

  Singleton<ClassA>::Close();
  return 0;
}