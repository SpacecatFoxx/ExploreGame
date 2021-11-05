#include "monster.h"
#include "item.h"
#include <fstream>
#include <string>

using namespace std;

void Monster::makeMonster(Monster listMonsters[], const int maxMonsters, const string filename) {
  int numMonsters;
  int monsters = 0;

  ifstream fin;
  fin.open(filename.c_str());
    if (filename == "bosses.log") {
      listMonsters[monsters].isBoss = true;
    } else {
      listMonsters[monsters].isBoss = false;
    }
  fin.close();
  return;
}

void Monster::fillDrops() {
  const int maxDrops = 5;
  return;
}