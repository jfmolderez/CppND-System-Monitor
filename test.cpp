#include <iostream>
#include <thread>
#include <chrono>
#include <string>
#include <vector>
#include <ncurses.h>
#include <time.h>
#include <sstream>
#include <iomanip>
#include "util.h"

#include "ProcessParser.h"

using namespace std;

int main() {
  vector<string> pids = ProcessParser::getPidList();
  cout << pids.size() << "\n";
  cout << pids[30] << "\n";
  return 0;
}
