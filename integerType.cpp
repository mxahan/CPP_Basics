#include <iostream>
#include <limits>
#include <climits>
#include <iomanip>

using namespace std;

int main(){

  int value = -54656;
  cout << value << endl;

  cout << "maximum value: " << INT_MAX << endl;
  cout << "minimum value: " << INT_MIN << endl;

  cout << "size of int: " << sizeof(int)<< endl;
  cout << "size of short int: " << sizeof(short int)<< endl;


  float fValue = 75.251122;
  cout << "size of float: " << sizeof(float)<< endl;

  return 0;
}
