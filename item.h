#ifndef ITEM_H
#define ITEM_H

#include <string>
using std::string;

class Item {
	public:
  /*========== Constructors ==========*/
    Item() {};
    Item(string name, int function, string type, int rarity, string special, int increase, string desc);
  /*========== Functions ==========*/

    //Desc: Fills item info
    //Pre:  Unfilled item class
    //Post: Item class filled
    void makeItem(Item listItems[], const int maxItems, const string filename);

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
    string itemSpecial; //Additional special effect bonus stat (ex. AGI+ boots)
    int statUp; //Value of special effect bonus
    string itemDesc;
  
  /*========== Functions ==========*/
	
};

#endif