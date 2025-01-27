#ifndef VIEW_H
#define VIEW_H
//used to manage input output
#include <iostream>
#include <string>
using namespace std;
#define MAX_ROW 5
#define MAX_COL 25
#include"Position.h"

//view function creates 5x25 character "track"
//responsible for updating track with each movement, needs to check if position is on the track to do so
//also responsible for visual aspect of program including log of each movement for debugging

class View
{
  public:
    View();
    ~View();
    void print();
    void update(Position&,Position&,char);
    bool validPos(Position&);
    void printStr(string);

  private:
    char** Display;
};

#endif
