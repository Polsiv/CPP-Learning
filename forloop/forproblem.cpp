#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


int main() {

const int MaxCount = 5;
int acc;

cout << "Number    Square root\n";
cout << "______    ___________\n";

  cout << setiosflags(ios::showpoint);g

for( acc = 1; acc <= MaxCount; acc++)

  cout << setw(4) << acc << setw (15) << sqrt (double(acc)) << endl;

  return 0;
  
    
  }
