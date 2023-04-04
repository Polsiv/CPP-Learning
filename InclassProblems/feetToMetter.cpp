#include <iostream>
#include <iomanip>

using namespace std;

int main() {


  int feets = 0;
double meters = 0;

cout << "Feets " << "Meters" << endl;

while (feets < 30) {

  feets = feets + 3;
  meters = feets * 3.28;

  cout << feets << "     " << meters << endl;
  
  }
  
}