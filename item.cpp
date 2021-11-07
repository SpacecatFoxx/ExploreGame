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