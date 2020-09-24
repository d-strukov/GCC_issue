#ifndef TEST_H
#define TEST_H

using namespace std;

#include <iostream>
#include <string>
#include "test1.h"
#include "constants.h"


class Test {
    public:
    Test1 getTest() {
        return m_test;   
    }

 private:
 Test1 m_test;    
};

#endif
