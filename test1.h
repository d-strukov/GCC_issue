#ifndef TEST1_H
#define TEST1_H

using namespace std;

#include <iostream>
#include <string>
#include "constants.h"

class Test1 {
 public:
 Test1();
 std::string getString() {
  return m_str;   
 }
 private:
 std::string m_str;
};

#endif
