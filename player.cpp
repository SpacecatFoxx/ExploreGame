#include "player.h"
#include <string>
#include <iostream>

using namespace std;

/*========= Constructors ==========*/
Player::Player() {
  cout << "What is your name?" << endl << ">> ";
  getline(cin, name);
  HP = maxHP = 100;
  ATK = 5;
  AGI = 15;
  ARM = 5;
}

Player::Player (const string admin) {
  if (admin == "admin") {
    name = "Foxx";
    HP = maxHP = 100000;
    ATK = 100000;
    AGI = 100000;
    ARM = 100000;
  } else {
    cout << "What is your name?" << endl << ">> ";
    getline(cin, name);
    HP = maxHP = 100;
    ATK = 5;
    AGI = 15;
    ARM = 5;
  }
  return;
}

/*========== Functions ==========*/
void Player::printPlayer() const {
  cout << name << endl;
  cout << "HP: " << HP << "/" << maxHP << endl;
  cout << "Attack: " << ATK << endl;
  cout << "Agility: " << AGI << endl;
  cout << "Armor: " << ARM << endl << endl;
  return;
}

/*========== Operator Overloads ==========*/
