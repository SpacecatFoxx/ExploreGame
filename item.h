#ifndef ITEM_H
#define ITEM_H

#include <string>
using std::string;

class Item {
	public:
  /*========== Constructors ==========*/

  /*========== Functions ==========*/

    //Desc: Fills item info
    //Pre:  Unfilled item class
    //Post: Item class filled
    void makeItem(const string filename);

    //Desc: Gives item name
    //Pre:  Item has name
    //Post: Name returned as string
    string getName() const {return itemName;}


  private:
  /*========== Variables ==========*/
    string itemName;
    int itemFunction; //ATK+ if weapon, ARM+ if armor, HP+ if potion
    string itemType;
    int itemRarity;
    int itemSpecial; //Additional special effect bonus (ex. AGI+ boots)
    string itemDesc;
  
  /*========== Functions ==========*/
	
};

#endif