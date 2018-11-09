// Copyright 2018
// license BSD
// Author: neededman@hotmail.com Qily
// This is a class needed to be the singleton
#ifndef _SINGLETON_SINGLETON_H_234_
#define _SINGLETON_SINGLETON_H_234_

#include <mutex>
#include <atomic>

template<class T>
class Singleton {
 public:
  static T* Instance(void);
  static void Close(void);
  Singleton(void);
 private:
  static std::atomic<T*> _instance;
  static std::mutex mt;
};

template<class T>
std::mutex Singleton<T>::mt;

template<class T>
std::atomic<T*> Singleton<T>::_instance;

template<class T>
Singleton<T>::Singleton(void) {

}

template<class T>
T* Singleton<T>::Instance(void) {
  T* tmp = Singleton<T>::_instance.load(std::memory_order_acquire);
  if(tmp == nullptr) {
    std::lock_guard<std::mutex> lock(Singleton<T>::mt);
    tmp = Singleton<T>::_instance.load(std::memory_order_relaxed);
    if(tmp == nullptr) {
      tmp = new T;
      Singleton<T>::_instance.store(tmp, std::memory_order_release);
    }
  }
  return tmp;
}

template<class T>
void Singleton<T>::Close(void) {
  if(Singleton<T>::_instance) delete Singleton<T>::_instance;
}
#endif