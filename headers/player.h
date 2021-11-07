#ifndef PLAYER_H
#define PLAYER_H

#include "item.h"
#include <string>

using std::string;

const int MAX_ITEMS = 20;

class Player {
  public:
  /*========== Constructors ==========*/
    //Default player stats
    Player();
    Player(const string admin);
  /*========== Functions ==========*/
    //Desc: Retrieves player name
    //Pre:  Player has name
    //Post: Returns player name as string
    string getName() const {return name;}
    
    //Desc: Prints player info
    //Pre:  Filled player
    //Post: Player info printed to console
    void printPlayer() const;

  /*========== Operator Overloads ==========*/

  private:
  /*========== Variables ==========*/
    string name;
    int maxHP;
    int HP;
    int ATK;
    int AGI;
    int ARM;
    //Equipped
    Item head;
    Item chest;
    Item shoes;
    Item weapon;
    Item lHand;
    //List of all items
    Item inventory[MAX_ITEMS];
    
};

#endif