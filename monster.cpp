#include "headers/monster.h"
#include "headers/item.h"
#include "headers/header.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void Monster::makeMonster(const string filename) {
  int monsters = 0;

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
  getline(fin, monsterName);
  getline(fin, bossTitle);
  //getline(fin, monsterType);
  monsterType = "testVal";
  fin >> monsterMaxHP;
  monsterHP = monsterMaxHP;
  fin >> monsterAGI;
  fin >> monsterARM;
  fin >> monsterATK;
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

  string monsterFile = addStrings("item/", monsterType, ".log");
  cout << monsterFile << endl;
  filename = "item/Undead.log";
  if (monsterFile == filename) {cout << "yay!" << endl;}
  else {cout << "damn" << endl;}
  //If not boss, use monster type for drops, if boss use boss name
//  if (!isBoss) {filename = "item/"+monsterType+".log";} 
//  else {filename = "item/"+monsterName+".log";}
  cout << filename << endl;
  fin.open(filename.c_str());
  if (!fin) {
    cout << "File not found!" << endl;
  }
  while (fin >> data) {
    cout << data << endl;
    fin.ignore();
    getline(fin, name); cout << "Name: " << name << endl;
    fin >> function;
    fin.ignore();
    getline(fin, type);
    fin >> rarity;
    fin.ignore();
    getline(fin, special);
    fin >> statUp;
    fin.ignore();
    getline(fin, desc);
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
  }
  return;
}