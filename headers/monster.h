#ifndef MONSTER_H
#define MONSTER_H

#include "item.h"
#include <string>
using std::string;

class Monster {
  public:
  /*========== Constructors ==========*/
    Monster();

  /*========== Functions ==========*/
    //Desc: Fills the monster info
    //Pre:  Empty monster info
    //Post: Filled monster info
    void makeMonster(const string filename);
  
    //Desc: Fills the list of drops
    //Pre:  An empty list of drops
    //Post: Fills list of drops
    void fillDrops();
    
    //Desc: Completely prints a monster's stats and drops. 
    //      Used for testing for proper file input
    //Pre:  A filled Monster class
    //Post: Prints out monster's stats and items to console
    void fullPrint() const;

  private:
  /*========== Variables ==========*/
    bool isBoss;
    string monsterName;
    string bossTitle;
    string monsterType;
    int monsterHP;
    int monsterMaxHP;
    int monsterAGI;
    int monsterARM;
    int monsterATK;
    Item monsterDrops[5];
  
};

#endif