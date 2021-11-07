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
  cout << itemDesc << endl;
  return;
}