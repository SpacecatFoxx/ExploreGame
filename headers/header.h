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

/*========== Overloads ==========*/

#endif