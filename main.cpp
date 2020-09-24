
using namespace std;

#include <iostream>
#include <string>
#include "test.h"


namespace NOTSTD {
	
	Test variable;
}
using namespace NOTSTD;

int main()
{
  
  std::cout << variable.getTest().getString() << " printed";
}