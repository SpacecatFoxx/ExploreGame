#ifndef ROOM_H
#define ROOM_H

#include "item.h"
#include <string>
using std::string;

const int LOOT_ITEMS = 5;

class Room {
  public:
  
  private:
    string roomType;
    Item randomLoot[LOOT_ITEMS];
};


#endif