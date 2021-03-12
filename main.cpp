//Author: PUT YOUR NAME HERE
#include <iostream>
#include "libraries/bitmap.h"
#include <fstream> 
using namespace std;

string filename;
fstream reader;

int main()
{


cout << "Enter a file name for analysis.\n";
cin >> filename;

reader.open(filename, ios::in);
  if ( reader.is_open() ) {
    cout << " File has opened.\n";
  }



  return 0;
}
