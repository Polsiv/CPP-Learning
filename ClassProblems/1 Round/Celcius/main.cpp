#include <iostream>
#include <iomanip>

using namespace std;

int main() {

float degrees = 0, Faren;
int TotalConvertion, Increase = 0, counter = 0;


  cout << "Insert the start value (temperature is set to celicus)\n";

cin>>degrees;

cout<< "What's the number of convertions you want to make?\n";

cin >> TotalConvertion;

 cout <<"And last but not least, what's the gap between the convertions?\n";

  cin >> Increase;
  
cout << " Celcius " << " Farenheit  " << endl;

  
 while (counter < TotalConvertion){
    

Faren = ((degrees)*9/5) + 32;

counter = counter + 1;

   
cout << degrees << "       " << Faren << endl;
 
   
   degrees =  Increase + degrees;
  
 } 
  
}