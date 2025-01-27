#ifndef CUSTOMER_H
#define CUSTOMER_H

 class Account;

#include <string>
using namespace std;


class Customer
{
  public:
    Customer(int=0, string="Unknown");
    ~Customer();
    int getter();
    bool addAcct(Account*);
    void print();

  private:
    int customerId;
    string customerName;
    int numAccounts;
    Account * collection[16];
};

#endif
