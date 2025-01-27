#include "Runner.h"

Runner::Runner(string a,char b,int c,int d){
  Name=a;
  Avatar=b;
  Bib=c;
  Lane=d;
  Style=new WalkBehaviour();
  Pos.setrow(d);
  Pos.setcol(0);
  //sets position at start of it's lane and default walkbehaviour

}

Runner::~Runner()
{  delete Style;
}

//getter setters
string Runner::getName(){return Name;}
char Runner::getAvatar(){return Avatar;}
Position Runner::getPos(){return Pos;}
string Runner::getLog(){return Log;};
void Runner::setPos(int r,int c){
  Pos.setrow(r);
  Pos.setcol(c);
};

//returns true if less than else false
bool Runner::lessThan(Runner* r){
  if (Bib<r->Bib){return true;}
  return false;
}

void Runner::update(){

  int iSecret = rand() % 10 + 1;
  delete Style;
  //selects random movebehaviour and updates positions/log
  if(iSecret<=4){
  Style=new WalkBehaviour; Style->Move(Pos,NewPos,Log);
  Log=Name+Log; return;
  }

  else if(iSecret==5){Style=new SleepBehaviour; Style->Move(Pos,NewPos,Log);
  Log=Name+Log; return;}

  else if(iSecret==6||iSecret==7){Style=new JumpBehaviour; Style->Move(Pos,NewPos,Log);
  Log=Name+Log; return;}

  else if(iSecret==8||iSecret==9){Style=new SlideBehaviour; Style->Move(Pos,NewPos,Log);
  Log=Name+Log; return;}

  else if(iSecret==10){Style=new TeleportBehaviour; Style->Move(Pos,NewPos,Log);
  Log=Name+Log; return;}
}
