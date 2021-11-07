#include "headers/header.h"
#include "headers/item.h"

#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

int fillItems(Item listItems[], const int itemsMax, const string filename) {

  int numItems = 0;
  string name;
  int function;
  string type;
  int rarity;
  string special;
  int statUp;
  string desc;

  string data;
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

string addStrings(const string s1, const string s2, const string s3) {
  string result;
  stringstream ss;
  ss << s1;
  cout << ss.str() << endl;
  ss << s2;
  cout << ss.str() << endl;
  ss << s3;
  cout << ss.str() << endl;
  result = ss.str();
  return result;
}