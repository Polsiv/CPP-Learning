#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {

int  endurance [5] = {16, 27, 39, 56, 81};
double stream[5];
double power [5];



for (int i = 0; i < 5; i++){
cout << "Enter the power value" << endl;
  cin >> stream [i];
   
}

  for (int i = 0; i < 5; i++){
    power [i] = endurance [i] * (pow(stream[i],2));
}
  
cout << "ENDURANCE     STREAM      POWER"  << endl;

 for (int i= 0; i < 5; i++){

   cout << setw(5)<< endurance [i] << setw(10)<< stream[i] << setw(12)<< power[i] << endl;
 } 
    
}

