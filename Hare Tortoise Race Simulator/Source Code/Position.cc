#include <iostream>
#include <iomanip>
using namespace std;
#include <string>
#include "Position.h"

//fairly self explanatory code, basic setter getter functions

Position::Position(int row,int col)
{row=row;
  col=col;}

int Position::getrow(){return row;}
void Position::setrow(int num){row=num;}
int Position::getcol(){return col;}
void Position::setcol(int num){col=num;}
