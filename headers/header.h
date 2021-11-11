#ifndef HEADER_H
#define HEADER_H

#include "item.h"
#include <string>

using std::string;

/*========== Functions ==========*/

  //Desc: Adds 2 or 3 strings together
  //Pre:  2 or 3 strings as parameters
  //Post: A single string returned that is all the parameters concatenated
  string addStrings(const string s1, const string s2, string s3);

  //Desc: Takes a string and replaces _'s with spaces (used when bypassing getline)
  //Pre:  A string that needs spaces added
  //Post: String returned by reference with spaces
  void addSpace(string & s1);

/*========== Overloads ==========*/

#endif