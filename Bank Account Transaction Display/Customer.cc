#include <iostream>
#include <string>
using namespace std;
#include "Customer.h"
#include "Account.h"
Customer::Customer(int i, string t)
{
  customerId = i;
  customerName = t;
  numAccounts = 0;
}
Customer::~Customer()
{}

int Customer::getter(){
  return customerId;
}

bool Customer::addAcct(Account *account){
  if(numAccounts<17){
    collection[numAccounts]=account;
    numAccounts++;
    return true;
  }
  else{
    return false;
  }
}

void Customer::print()
{
  cout<<"--"<<customerId<<"--"<<customerName<<endl;
  if(numAccounts==0){
    cout<<"No Accounts"<<endl;
  }
  else{for (int i=0;i<numAccounts;i++){
    collection[i]->print();}
  }
}
