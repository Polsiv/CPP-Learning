#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main () {

int degrees = 0;
double farenheit = 0;

cout << "Celcius" << "  " << " Farenheit " << endl;
  
while (degrees < 100) {

  degrees = degrees + 5;
  farenheit = ((degrees*9)/5) + 32;

  cout<< degrees << setw(2
    ) << "       " << farenheit <<  endl;
}
  
} 
