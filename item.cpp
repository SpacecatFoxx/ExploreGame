#include "item.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

Item::Item(string name, int function, string type, int rarity, string special, int increase, string desc) {
  itemName = name;
  itemFunction = function;
  itemType = type;
  itemRarity = rarity;
  itemSpecial = special;
  statUp = increase;
  itemDesc = desc;
}

void Item::makeItem(Item listItems[], const int maxItems, const string filename) {
  ifstream fin;
  string data;
  int numItems;
  int rarity;
  int item = 0;

  fin.open(filename.c_str());

  if (!fin) {
    cout << "File not found!" << endl;
  }

  fin >> numItems;
  fin >> rarity;
  while (fin >> data) {
    fin.ignore();
    getline(fin, listItems[item].itemName);
    fin >> listItems[item].itemFunction;
    fin.ignore();
    getline(fin, listItems[item].itemType);
    listItems[item].itemRarity = rarity;
    fin >> listItems[item].itemSpecial;
    fin >> listItems[item].statUp;
    fin.ignore();
    getline(fin, listItems[item].itemDesc);
    item++;
  }

  fin.close();  
  return;
}