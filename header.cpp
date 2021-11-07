#include "header.h"
#include "item.h"

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int fillItems(Item listItems[], const int itemsMax, string filename);

  int numItems = 0;
  string name;
  int function;
  string type;
  int rarity;
  string special;
  int statUp;
  string desc;

  ifstream fin;
  fin.open(filename.c_str());

  if (!fin) { //If given file is not found, tell user, otherwise fill information
    cout << "File [" << filename << "] not found!" << endl;
  } else {
    fin >> rarity;
    while (fin >> data) {
      fin.ignore();
      getline(fin, name);
      fin >> function;
      fin.ignore();
      getline(fin, type);
      fin >> special;
      fin >> statUp;
      fin.ignore();
      getline(fin, desc);
      
      listItems[numItems].makeItem(name, function, type, rarity, special, statUp, desc);
      numItems++;
    }
  }
  fin.close();
  return numItems;
}