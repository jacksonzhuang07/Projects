#ifndef BANK_H
#define BANK_H

#include <string>
using namespace std;
#include "Customer.h"
#include "Account.h"
#include "CustArray.h"



class Bank
{
  public:
    Bank(string="Unknown");
    ~Bank();
    bool addCust(Customer*);
    bool addAcct(int, Account*);
    bool debit(int, float);
    bool credit(int, float);
    void print();

    private:
    string name;
    CustArray list;
    Account* accounts[1024];
    int count;
};

#endif
