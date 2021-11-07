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
    void makeItem(string name, int function, string type, int rarity,
                  string special, int statUp, string desc);

    //Desc: Gives item name
    //Pre:  Item has name
    //Post: Name returned as string
    string getName() const {return itemName;}
    
    //Desc: Prints all item details to console
    //Pre:  Filled Item class
    //Post: Item content printed to console
    void printItem() const;
    
    //Desc: Sends item information from file to Item class
    //Pre:  Input file and a list of items
    //Post: Item information added to item list and number of items returned as int
    friend int fillItems(Item listItems[], const int itemsMax, const string filename);


  private:
  /*========== Variables ==========*/
    string itemName;
    int itemFunction; //ATK+ if weapon, ARM+ if armor, HP+ if potion
    string itemType;
    int itemRarity;
    string itemSpecial; //Additional special effect bonus stat (ex. AGI+ boots)
    int itemStatUp; //Value of special effect bonus
    string itemDesc;
  
  /*========== Functions ==========*/
	
};

#endif