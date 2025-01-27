#include <iostream>
#include <string>
using namespace std;
#include "CustArray.h"

CustArray::CustArray(){
  count=0;
}

CustArray::~CustArray(){
  for(int i=0;i<count;i++){
delete List[i];}
}


bool CustArray::add(Customer* c){
  //cout<<"custadd"<<endl;
  if(count<64){
  List[count]=c;
  count++;
return true;}
else{
return false;}
}

//deconstructor pending

void CustArray::find(int id, Customer** c){
//  Customer**z;
  for (int i=0;i<count;i++){
    //cout<<"find"<<endl;
    if (id==List[i]->getter()){
      //cout<<"found"<<endl;
      *c=List[i];
      //*z=List[i];
      //List[i]->print();
      //(*c)->print();
      return;
    }
  }
  //cout<<"ind"<<endl;
  *c=NULL;
  return;
}


void CustArray::print()
{
  for (int i=0;i<count;i++){
  List[i]->print();}
}
