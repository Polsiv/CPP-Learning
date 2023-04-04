#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;


int main() {
  
  int price, Selltax;
const double  SENTINEL = 1000, TAX = 19;
  
  do {

    cout << "\n Insert the price: ";

  cin >> price;

    if (abs(price - SENTINEL) < 0.0001)
      break;

  Selltax  = TAX * price;

    cout << setiosflags (ios::showpoint)
         << setprecision (2)
         << "The tax is $ " << Selltax;
    
  } while (price != SENTINEL);
  
  }