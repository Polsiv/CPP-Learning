#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {

int num;

std::cout << "Number" << "______ ______ \n";
  
num = 1;
  while (num < 11) {
  cout << setw(3) << num << "    " << setw(3) << pow(num,2) << setw(4) <<"    "<< pow(num,3)  << endl;
  num ++;
//increase num
  }
  
  }