#include "Array.h"

Array::Array()
{
  elements=new Runner*[MAX_ARR];
    size = 0;
}

Array::~Array()
{
  for(int i=0;i<size;i++){
    delete elements[i];
  }
  delete []elements;
}

void Array::add(Runner* d)
{

    if (size<MAX_ARR){
      //no members
      if(size==0){
        elements[0]=d;
        size++;
        return;
      }
      // if members then does comparison
      for (int i=0; i<size; ++i){

        if (d->lessThan(elements[i])){
          for(int j=size;j>i;--j){
            elements[j]=elements[j-1];

          }
          elements[i]=d;
          size++;
          return;
        }
      }
      // if all comparisons false then adds to end
      elements[size]=d;
      size++;
} return;}

Runner* Array::get(int x){
  // if index is less than size, returns index item
  if (x<size){return elements[x];}
  return NULL;
}

int Array::getsize(){
  return size;
}
