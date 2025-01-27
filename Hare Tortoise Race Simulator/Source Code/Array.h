#ifndef ARRAY_H
#define ARRAY_H

#define MAX_ARR 64

//Dynamic Array Runner Datatype, add function which adds based on ascending order of bib,
//a function to retrieve runner at index
// and a function to get the private size variable


#include "Runner.h"

#include <iostream>
#include <iomanip>
using namespace std;
#include <string>

class Array
{
  public:
    Array();
    ~Array();
    void add(Runner*);
    Runner* get(int);
    int getsize();

  private:
    Runner** elements;
    int   size;
};

#endif
