#include <iostream>

using namespace std;

int main() {

  int fifty = 50000;
  int twenty = 20000;
  int ten = 10000;
  int five = 5000;
  int two = 2000;
  int sum, fiftyBills, twentyBills, tenBills, fiveBills, twoBills, TotalAmount;

  twentyBills = 0;
  fiftyBills = 0;
  tenBills = 0;
  fiveBills = 0;
  twoBills = 0;
  TotalAmount = 0;
  sum = 0;

  cout << "Insert the amount of money you want to extract" << endl;

  cin >> TotalAmount;

 cout << "=======================" << endl;

  //"Loop" starts ========================================================

  if (TotalAmount < 2000) {
    cout << "The value requiered isn't enough for this case" << endl;
  } else {
    while (sum < TotalAmount) {
      fiftyBills++;
      sum = sum + fifty;
    }

    if (sum > TotalAmount) {
      fiftyBills = fiftyBills - 1;
      sum = sum - fifty;
    }
    while (sum < TotalAmount) {
      sum = sum + twenty;
      twentyBills++;
    }

    if (sum > TotalAmount) {
      twentyBills = twentyBills - 1;
      sum = sum - twenty;
    }
    while (sum < TotalAmount) {
      sum = sum + ten;
      tenBills++;
    }
    if (sum > TotalAmount) {
      tenBills = tenBills - 1;
      sum = sum - ten;
    }
    while (sum < TotalAmount) {
      sum = sum + five;
      fiveBills++;
    }
    if (sum > TotalAmount) {
      fiveBills = fiveBills - 1;
      sum = sum - five;
    }
    while (sum < TotalAmount) {
      sum = sum + two;
      twoBills++;

      //"loop" ends
      if (sum > TotalAmount) {

        cout << "the amount of money is not currently available" << endl;

      } 
    }
  } 
        cout << "The total amount of 50Kbills used is: " << fiftyBills << endl;
        cout << "The total amount of 20Kbills used is: " << twentyBills << endl;
        cout << "The total amount of 10Kbills used is: " << tenBills << endl;
        cout << "The total amount of 5Kbills used is: " << fiveBills << endl;
        cout << "The total amount of 2Kbills used is: " << twoBills << endl;
        
  return 0;
}