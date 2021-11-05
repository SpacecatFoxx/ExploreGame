#ifndef MONSTER_H
#define MONSTER_H

#include "item.h"
#include <string>
using std::string;

class Monster {
  public:
  /*========== Constructors ==========*/
    Monster() {};

  /*========== Functions ==========*/
    //Desc: Fills the monster info
    //Pre:  Empty monster info
    //Post: Filled monster info
    void makeMonster(Monster listMonsters[], const int maxMonsters, const string filename);
  
    //Desc: Fills the list of drops
    //Pre:  An empty list of drops
    //Post: Fills list of drops
    void fillDrops();

  private:
  /*========== Variables ==========*/
    bool isBoss;
    string monsterName;
    string monsterType;
    int monsterHP;
    int monsterMaxHP;
    int monsterAGI;
    int monsterARM;
    int monsterATK;
    Item monsterDrops[5];
  
};

#endif