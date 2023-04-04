#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  int gallons = 9;
  double liters = 0;

cout << "Gallons " << "  " << "Liters" << endl;

  while (gallons < 20)
  {
    gallons ++;

    liters = gallons * 3.785;

    cout << gallons <<  "        "<<setw(3) << liters <<  endl;
    
  }
  
}