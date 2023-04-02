#include <iostream>
using namespace std;

int main() {

  char symbol;
  int  width;
  int height;

  cout <<  "Enter the symbol to use: ";
  cin >> symbol;

  cout << "Enter the width: ";
  cin >> width;

    cout << "Enter the height: ";
  cin >> height;

  for (int i = 1; i < height; i++) {
    
    for(int j = 1; j < width; j++){
    cout << symbol;
    
    }
  }

  return 0;
}