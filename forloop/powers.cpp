
#include <iomanip>
#include <iostream>

using namespace std;

int main() {

const int MAXNUMS = 10;

  int num;

  cout << "NUMBER  SQUARE  CUBO  \n" << endl;
  cout << "======  ======  =====  \n" << endl;

  for (num = 1; num <= MAXNUMS; num++) {

    cout << setw(3) << num << "      "
         << setw(3) << num * num << "     "
         << setw(4) << num * num * num << endl;
  }

  return 0;
  
}