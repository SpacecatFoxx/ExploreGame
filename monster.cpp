#include "headers/monster.h"
#include "headers/item.h"
#include "headers/header.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

Monster::Monster() {
    isBoss = false;
    monsterName = "N/A";
    bossTitle = "N/A";
    monsterType = "N/A";
    monsterHP = 0;
    monsterMaxHP = 0;
    monsterAGI = 0;
    monsterARM = 0;
    monsterATK = 0;
}

void Monster::makeMonster(const string filename) {
  int monsters = 0;
  string data;

  ifstream fin;
  fin.open(filename.c_str());
  if (!fin) {
    cout << "File not found!" << endl;
  }
  if (filename == "monster/bosses.log") {
    isBoss = true;
  } else {
    isBoss = false;
  }
  fin >> monsterName;
  fin >> bossTitle;
  fin >> monsterType; //Problem child!! addStrings() won't work with getline()
  fin >> monsterMaxHP;
  monsterHP = monsterMaxHP;
  fin >> monsterAGI;
  fin >> monsterARM;
  fin >> monsterATK;
  addSpace(bossTitle);
  addSpace(monsterType);
  fin.close();
  fillDrops();
  return;
}

void Monster::fillDrops() {
  string data;
  string filename;
  ifstream fin;
  int item = 0;

  string name;
  int function;
  string type;
  int rarity;
  string special;
  int statUp;
  string desc;

  //If not boss, use monster type for drops, if boss use boss name
  if (!isBoss) {filename = "item/"+monsterType+".log";} 
  else {filename = "item/"+monsterName+".log";}

  fin.open(filename.c_str());
  if (!fin) {
    cout << "File not found!" << endl;
  }
  while (fin >> data) {
    fin >> name;
    fin >> function;
    fin >> type;
    fin >> rarity;
    fin >> special;
    fin >> statUp;
    fin >> desc;
    addSpace(name);
    addSpace(type);
    addSpace(desc);
    monsterDrops[item].makeItem(name, function, type, rarity, special, statUp, desc);
    item++;
  }
  fin.close();
  return;
}

void Monster::fullPrint() const {
  cout << monsterName;
  //If boss, print the title right after the name, otherwise endline
  if (isBoss) {cout << " " << bossTitle << endl;} 
  else {cout << endl;}
  cout << "Type: " << monsterType << endl;
  cout << "HP: " << monsterHP << "/" << monsterMaxHP << endl;
  cout << "ATK: " << monsterATK << "  AGI: " << monsterAGI << "  ARM: " << monsterARM << endl;
  //For each drop, print the item
  for (int i = 0; i < 5; i++) {
    monsterDrops[i].printItem();
    cout << endl;
  }
  return;
}