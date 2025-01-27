#ifndef RACE_H
#define RACE_H
// control class
#include"Array.h"
#include"View.h"
#include"Position.h"

#include <iostream>
#include <iomanip>
using namespace std;
#include <string>


//control class which conducts the "race"
//holds dynamic array of Runners, checks to see if a runner completed the Race
//run() conducts race with randomized moves for each runner until one finishes
class Race
{
  public:
    Race();
    ~Race();
    bool isOver(string&);
    void run();

  private:
    View view;
    Array Runners;

};

#endif
