#include "headers/header.h"
#include "headers/item.h"

#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

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

void addSpace(string & s1) {
  for (int i = 0; i < s1.length(); i++) {
    if (s1[i] == '_') {
      s1[i] = ' ';
    }
  }
  return;
}