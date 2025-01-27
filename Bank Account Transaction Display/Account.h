#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
#include "Customer.h"
using namespace std;

class Account
{
  public:
    Account(int=0, float=0);
    //Account(Account&);
    ~Account();
    int getter();
    void setter(Customer*);
    bool debit(float);
    bool credit(float);
    void print();

  private:
    int accountNumber;
    float accountBalance;
    Customer * owner;
};

#endif
