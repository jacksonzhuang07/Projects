#include "Race.h"

Race::Race(){
  srand((unsigned)time(NULL ));
  //creates turtle and hare, gets initialized positions,updates view
  Runner *hare=new Runner("Hare",'h',1,1);
  Runner *tortoise=new Runner("Tortoise",'t',2,2);
  Runners.add(hare);
  Runners.add(tortoise);
  Position hpos=hare->getPos();
  Position tpos=tortoise->getPos();
  view.update(hpos,hpos,hare->getAvatar());
  view.update(tpos,tpos,tortoise->getAvatar());
}

Race::~Race(){ }

bool Race::isOver(string& outcome){
  //iterates through runner collection to see if any runners reached the end, if so returns true
  // else false
  for (int i=0;i<Runners.getsize();i++){
    if (Runners.get(i)->getPos().getcol()==24){
      outcome=Runners.get(i)->getName();
      return true;
    }
  }
  outcome="no winner";
  return false;
}

void Race::run(){
  string outcome;
  //breaks loop if if winner
  view.print();
  cout<<"Race Start"<<endl;
  while(1){
    for (int i=0;i<Runners.getsize();i++){
      Runners.get(i)->update();
      //updates runners position if valid
      if (view.validPos(Runners.get(i)->NewPos)){
        Position c=Runners.get(i)->getPos();
        view.update(c,Runners.get(i)->NewPos,Runners.get(i)->getAvatar());
        Runners.get(i)->setPos(Runners.get(i)->NewPos.getrow(),Runners.get(i)->NewPos.getcol());
        view.print();
        view.printStr(Runners.get(i)->getLog());
        //prints out runner log and updated position
        }

        //checks for winner
      if (this->isOver(outcome)){
        view.print();
        cout<<"Winner is: "<<outcome<<endl;
        std::cin.ignore();
        return;
        }
    }
  }
}
