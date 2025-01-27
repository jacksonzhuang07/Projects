#include <iostream>
#include <string>
using namespace std;

#include"Race.h"
/*By Jian Zhuang

Sources files :
main.cc Runner.cc MoveBehaviour.cc Race.cc Array.cc View.cc Position.cc

Header files :
Runner.h MoveBehaviour.h Race.h Array.h View.h Position.h

Program is a randomized 2d race between two participants with each move being printed
onto the console until a winner is declared

Documentation in source code files
Compile using make
Launch using ./A3
remove objects/executable using make clean*/

int main (){

  Race foo;
  foo.run();

  return 0;
}
