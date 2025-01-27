#include <iostream>
#include <string>
using namespace std;
#include "Account.h"

Account::Account(int i, float j){
  accountNumber = i;
  accountBalance = j;
}

Account::~Account(){

}

int Account::getter(){
  return accountNumber;
}

void Account::setter(Customer* customer){
  owner = customer;
}

bool Account::debit(float deposit){
  float knew=accountBalance-deposit;
  if(knew<0||deposit<0){
    cout<<accountNumber<<" cannot be debited by $"<<deposit<<endl;
    return false;
  }
  else{
    accountBalance=knew;
    return true;
  }
}

bool Account::credit(float deposit){
  float knew=accountBalance+deposit;
  if(knew<0||deposit<0){
    cout<<accountNumber<<" cannot be credited by $"<<deposit<<endl;
//cout<<"crebitf"<<endl;
    return false;
  }
  else{
    //cout<<"crebits"<<endl;
    accountBalance=knew;
    return true;
  }
}

void Account::print(){
  cout<<accountNumber<<" $"<<accountBalance<<" "<<
  owner->getter()
  <<endl;
}
