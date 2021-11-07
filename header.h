#ifndef HEADER_H
#define HEADER_H

#include "item.h"
#include <string>

using std::string;

/*========== Functions ==========*/

  //Desc: Sends item information from file to Item class
  //Pre:  Input file
  //Post: Item information added to item list and number of items returned as int
  int fillItems(Item listItems[], const int itemsMax, string filename);

/*========== Overloads ==========*/

#endif