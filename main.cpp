#include "headers/player.h"
#include "headers/item.h"
#include "headers/monster.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

/* 
Compiler Executable:
g++ -Wall -W -s -pedantic-errors 
*/

using namespace std;

int main() {
//  const int ITEMAX = 20;
//  const int MAX_MONSTERS = 10;
//  const int BOSSES = 2;

//  int numSixStar;
//  int numFiveStar;
//  int numFourStar;
//  int numThreeStar;

//  Item sixStar[ITEMAX];
//  Item fiveStar[ITEMAX];
//  Item fourStar[ITEMAX];
//  Item threeStar[ITEMAX];
//  Monster normalEnemy[MAX_MONSTERS];
//  Monster bossEnemy[BOSSES];

  Monster testMonster[1];
  testMonster[0].makeMonster("monster/monsters.log");
  testMonster[0].fullPrint();  

//  p1.printPlayer();
//  p2.printPlayer();
  return 0;
}