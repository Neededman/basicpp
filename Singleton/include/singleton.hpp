// Copyright 2018
// license BSD
// Author: neededman@hotmail.com Qily
// This is a class needed to be the singleton
#ifndef _SINGLETON_SINGLETON_H_234_
#define _SINGLETON_SINGLETON_H_234_

#include <mutex>

template<class T>
class Singleton {
 public:
  static T* Instance(void);
  static void Close(void);
  Singleton(void);
 private:
  static T* _instance;
  static std::mutex mt;
};

template<class T>
std::mutex Singleton<T>::mt;

template<class T>
T* Singleton<T>::_instance = nullptr;

template<class T>
Singleton<T>::Singleton(void) {

}

template<class T>
T* Singleton<T>::Instance(void) {
  if(Singleton<T>::_instance == nullptr) {
    std::lock_guard<std::mutex> lock(Singleton<T>::mt);
    if(Singleton<T>::_instance == nullptr) {
      Singleton<T>::_instance = new T;
    }
  }
  return Singleton<T>::_instance;
}

template<class T>
void Singleton<T>::Close(void) {
  if(Singleton<T>::_instance) delete Singleton<T>::_instance;
}
#endif