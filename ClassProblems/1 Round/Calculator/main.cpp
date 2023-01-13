#include <iostream>
using namespace std;

int main() {

  int openlect;
  double num1, num2;

  cout << "Insert 2 numbers you want to operate with." << endl;
  cin >> num1 >> num2;

  cout << " To proceed, type any of the numbers shown below ";

  cout << "\n        1 If adition";
   cout <<"\n        2 If substraction";
  cout << "\n        3 If multiplication";
  cout << "\n        4 If division \n";

  cin >> openlect;

  switch (openlect) {

  case 1:
    cout << "Number 1 plus Number 2 equals to:" << num1 + num2;
    break;
  case 2:
    cout << "Number 1 minus Number 2 equals to: " << num1 - num2;
    break;
  case 3:
    cout << "Number 1 multiplied by Number 2 equals to: " << num1 * num2;
    break;

    case 4: 

    if (num2 == 0){
      cout << "Oops! Seems like you tried dividing by 0, which is undefined." << endl;
    } else {
    cout  << "Number 1 divided by Number 2 equals to: " << num1 / num2;
    }
    
    // end of switch
  }

  cout << endl;

  return 0;
}