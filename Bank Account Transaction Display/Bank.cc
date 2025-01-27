#include <iostream>
#include <string>
using namespace std;
#include "Bank.h"


Bank::Bank(string t)
{
  name     = t;
  count =0;
}

Bank::~Bank()
{
  for(int i=0;i<count;i++){
delete accounts[i];}
}

//deconstructor

bool Bank::addCust(Customer* c){
  return list.add(c);
}

bool Bank::addAcct(int custId, Account* acct){
  Customer*j;
  //acct->print();
  list.find(custId,&j);
  //acct->print();

  if (j!=NULL){
    //cout<<"true"<<endl;
    //(j)->print();
      if(count<1024){
        //acct->print();
        accounts[count]=acct;
        //accounts[count]->print();
        accounts[count]->setter(j);
        j->addAcct(accounts[count]);
        count++;
      //  cout<<"addacct"<<endl;
        return true;
      }

  }
  else{
    delete acct;
    cout<<"Customer "<<custId<<" Not Found"<<endl;
    return false;
  }
  return false;
}

bool Bank::debit(int i, float j){
  //cout<<i<<endl;
  for(int k=0;k<count;k++){
    //cout<<accounts[k]->getter()<<endl;
    if(accounts[k]->getter()==i){
      //cout<<"debits"<<endl;
      //accounts[k]->debit(j);
      return accounts[k]->debit(j);
    }
  }
  //cout<<"debitf"<<endl;
  cout<<"Account "<<i<<" Not Found"<<endl;
  return false;
}

bool Bank::credit(int i, float j){
  for(int k=0;k<count;k++){
    if(accounts[k]->getter()==i){
      return accounts[k]->credit(j);
    }

  }
  cout<<"Account "<<i<<" Not Found"<<endl;
  return false;
}

void Bank::print()
{
  cout<<""<<endl;
cout<<"Accounts:"<<endl;
  for(int i=0;i<count;i++)
  {accounts[i]->print();}
  cout<<""<<endl;
  cout<<"Customers:"<<endl;
  list.print();
}
