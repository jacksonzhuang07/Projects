#ifndef RUNNER_H
#define RUNNER_H

#include "Position.h"
#include "MoveBehaviour.h"

#include <iostream>
#include <iomanip>
using namespace std;
#include <string>

// runner function, contains position object , and update function which updates new position to current
// lessthan which compares the bib numbers of 2 Runners
//and basic getter/setter functionality
//contains movebeaviour pointer to current movebehaviour
class Runner
{
  public:
    Runner(string="Default",char='A',int=0,int=0);
    ~Runner();
    string getName();
    char getAvatar();
    Position getPos();
    string getLog();
    void setPos(int,int);
    bool lessThan(Runner*);
    void update();
    Position NewPos;


  private:
    string Name;
    char Avatar;
    int Bib;
    int Lane;
    Position Pos;
    MoveBehaviour* Style;
    string Log;
};

#endif
