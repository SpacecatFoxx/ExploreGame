#include "headers/item.h"
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
  itemStatUp = increase;
  itemDesc = desc;
}

void Item::makeItem(string name, int function, string type, int rarity,
                    string special, int statUp, string desc) {
  itemName = name;
  itemFunction = function;
  itemType = type;
  itemRarity = rarity;
  itemSpecial = special;
  itemStatUp = statUp;
  itemDesc = desc;

  return;
}

void Item::printItem() const {
  const string SP = "    "; //Printing indent

  cout << SP << itemName << endl;
  if (itemType == "Weapon") {
    cout << SP << "ATK +" << itemFunction << endl;
  } else if (itemType == "Armor") {
    cout << SP << "ARM +" << itemFunction << endl;
  } else if (itemType == "Potion") {
    cout << SP << "Recover " << itemFunction << "HP" << endl;
  } else {
    cout << SP << "Item type: " << itemType << endl;
  }
  cout << SP << "Rarity: " << itemRarity << endl;
  if (itemSpecial == "None") {
    cout << SP << "No special effects." << endl;
  } else {
    cout << SP << itemSpecial << " +" << itemStatUp << endl;
  }
  cout << SP << itemDesc << endl;
  return;
}

int fillItems(Item listItems[], const int itemsMax, const string filename) {

  int numItems = 0;
  int rarity;

  string data;
  ifstream fin;
  fin.open(filename.c_str());

  if (!fin) { //If given file is not found, tell user, otherwise fill information
    cout << "File [" << filename << "] not found!" << endl;
  } else {
    fin >> rarity;
    while (fin >> data) {
      fin.ignore();
      getline(fin, listItems[numItems].itemName);
      fin >> listItems[numItems].itemFunction;
      fin.ignore();
      getline(fin, listItems[numItems].itemType);
      fin >> listItems[numItems].itemSpecial;
      fin >> listItems[numItems].itemStatUp;
      fin.ignore();
      getline(fin, listItems[numItems].itemDesc);
      
      //listItems[numItems].makeItem(name, function, type, rarity, special, statUp, desc);
      numItems++;
    }
  }
  fin.close();
  return numItems;
}