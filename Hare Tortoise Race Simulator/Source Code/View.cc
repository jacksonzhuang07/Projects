#include "View.h"


View::View()
{
  Display = new char*[MAX_ROW];
  for(int i = 0; i < MAX_ROW; ++i)
  Display[i] = new char[MAX_COL];
  //creates "track" and sets each position in track to x

  for(int i=0;i<MAX_ROW;i++){
    for(int j=0;j<MAX_COL;j++){
      Display[i][j]=' ';

    }
  }
}

View::~View()
{
  for(int i=0;i<MAX_ROW;i++){
    delete[] Display[i];
  }
  delete []Display;
}

void View::print(){
      for(int i=0;i<27;i++){cout<<'-';}
      for(int i=0;i<MAX_ROW;i++){
        cout<<endl;
        cout<<'|';
        for(int j=0;j<MAX_COL;j++){
          cout<<Display[i][j];
        }
        cout<<'|';
      }
      cout<<endl;
      for(int i=0;i<27;i++){cout<<'-';}
      cout<<endl;

}

void View::update(Position& oldPos, Position& newPos, char avatar){
   Display[oldPos.getrow()][oldPos.getcol()]=' ';
   Display[newPos.getrow()][newPos.getcol()]=avatar;
   //sets previous position to empty and new position to avatar
}

bool View::validPos(Position& pos){
  //returns true if in bounds otherwise false
  if(MAX_ROW>pos.getrow()&&pos.getrow()>=0&&MAX_COL>pos.getcol()&&pos.getcol()>=0){return true;}

  return false;
}

 void View::printStr(string str){
   cout<<str<<endl;
 }
