#ifndef POSITION_H
#define POSITION_H

#include <iostream>
#include <iomanip>
using namespace std;
#include <string>

//position function which holds runner x y positions on track
class Position
{
  public:
    Position(int=0,int=0);
    int getrow();
    void setrow(int);
    int getcol();
    void setcol(int);

  private:
    int row;
    int col;
};

#endif
