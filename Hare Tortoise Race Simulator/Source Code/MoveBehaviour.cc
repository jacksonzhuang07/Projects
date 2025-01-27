#include "MoveBehaviour.h"

void WalkBehaviour::Move(Position& oldPos, Position& newPos, string& log) {
  // set new pos to old pos +1 col
  newPos.setcol(oldPos.getcol()+1);
  newPos.setrow(oldPos.getrow());
  log=string(" used walk: ")
  +"("+to_string(oldPos.getrow())+","+to_string(oldPos.getcol())+") to ("
  +to_string(newPos.getrow())+","+to_string(newPos.getcol())+")"; }

void SleepBehaviour::Move(Position& oldPos, Position& newPos, string& log) {
  //set new pos to old pos
  newPos.setcol(oldPos.getcol());
  newPos.setrow(oldPos.getrow());
  log=string(" used sleep: ")
  +"("+to_string(oldPos.getrow())+","+to_string(oldPos.getcol())+") to ("
  +to_string(newPos.getrow())+","+to_string(newPos.getcol())+")";}

void JumpBehaviour::Move(Position& oldPos, Position& newPos, string& log) {


  /* generate int 1 -8: */
  int iSecret = rand() % 8 + 1;
  newPos.setcol(oldPos.getcol()+iSecret);
  newPos.setrow(oldPos.getrow());
  //new position moves right by random
  //updates log
  log = string(" used jump: ") //+ ", col move right " + to_string(iSecret)+
  +"("+to_string(oldPos.getrow())+","+to_string(oldPos.getcol())+") to ("
  +to_string(newPos.getrow())+","+to_string(newPos.getcol())+")";}

void SlideBehaviour::Move(Position& oldPos, Position& newPos, string& log) {
  //generates random  1-5

  int col = rand() % 5 + 1;
  //moves column back by generated
  newPos.setcol(oldPos.getcol()-col);
  newPos.setrow(oldPos.getrow());
  //updates log
  log=string(" used slide: ")//+", col moved left "+to_string(col)
  +"("+to_string(oldPos.getrow())+","+to_string(oldPos.getcol())+") to ("
  +to_string(newPos.getrow())+","+to_string(newPos.getcol())+")"; }

void TeleportBehaviour::Move(Position& oldPos, Position& newPos, string& log) {
  // random row(0-4) and col(0-24) and sets the new position to this,
  int row = rand() % 4 + 0;
  int col = rand() % 24 + 0;
  //sets the new position to this,
  newPos.setcol(col);
  newPos.setrow(row);
  //updates log
  log = string(" used teleport: ")// + to_string(row) + ", col set to " + to_string(col)
  +"("+to_string(oldPos.getrow())+","+to_string(oldPos.getcol())+") to ("
  +to_string(newPos.getrow())+","+to_string(newPos.getcol())+")";}
