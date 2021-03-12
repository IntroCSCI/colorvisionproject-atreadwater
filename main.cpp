//Author: Andrew Treadway
#include <iostream>
#include "libraries/bitmap(1).h"
#include <fstream> 
using namespace std;

string filename;
fstream reader;
string color = "";

int main()
{
cout << "Enter a file name for color pallete analysis.\n";
cin >> filename;

reader.open (filename, ios::in);
  if ( reader.is_open() ) {
    cout << " File has opened.\n";
  
  while ( !reader.eof() ); 
    getline(reader,color);
      // insert code for hexadecimal rgb 
      cout << "The colors found in the file are: " << color << endl;

      reader.close(); } 
  else 
    cout << "File could not be opened.\n";

  return 0;
}
