#ifndef MOVEB_H
#define MOVEB_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;
#include "Position.h"

//based off 3.4 dancebehavior further explanation in moveBehavior.cc
class MoveBehaviour
{
  public:
    virtual void Move(Position& oldPos, Position& newPos, string& log) = 0;
};

class  WalkBehaviour  : public MoveBehaviour
{
  public:
    virtual void Move(Position& oldPos, Position& newPos, string& log);
};

class SleepBehaviour  : public MoveBehaviour
{
  public:
    virtual void Move(Position& oldPos, Position& newPos, string& log);
};

class JumpBehaviour : public MoveBehaviour
{
  public:
    virtual void Move(Position& oldPos, Position& newPos, string& log);
};

class  SlideBehaviour : public MoveBehaviour
{
  public:
    virtual void Move(Position& oldPos, Position& newPos, string& log);
};

class TeleportBehaviour : public MoveBehaviour
{
  public:
    virtual void Move(Position& oldPos, Position& newPos, string& log);
};


#endif
