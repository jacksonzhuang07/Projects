#ifndef CUSTARRAY_H
#define CUSTARRAY_H

#include <string>
using namespace std;
#include "Customer.h"
#include "Account.h"
class CustArray
{
  public:
    CustArray();
    ~CustArray();
    bool add(Customer*);
    void print();
    void find(int , Customer** );

  private:
    /*int id;
    string title;
    string author;*/
    Customer * List[64];
    int count;
};

#endif
