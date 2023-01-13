#include <iostream>

using namespace std;

int main() {

int counter, TotalPeople, age, nationality, Pass, TotalWomen, TotalMen, gender;

  TotalMen = 0;
  Pass = 0;
  counter = 0;
  TotalWomen = 0;

cout << "Insert the amount of people you want to evaulate" << endl;

  cin >> TotalPeople;

  while (counter < TotalPeople)  {

    cout <<"Insert the age" << endl;
    cin >> age;
    cout <<"Insert nationality (Type 1 for Colombia, type 2 for a different one)" << endl;
    cin >> nationality;
    cout << "Insert the gender (Type 1 for Male, otherwise type 2 for female)" << endl;
    cin >> gender;

    cout << "===========================" << endl;


    if (age >17 && age <25 && nationality == 1 && gender == 1) {

    Pass = Pass + 1;
    } 
  
 switch (gender) {

   case 1:  TotalMen = TotalMen + 1;
   break;
   case 2: TotalWomen = TotalWomen + 1;
   break;
 }

   counter = counter + 1; 
  }

  
cout << "The amount of Mens there are is: " << TotalMen << endl;
 cout << "The amount of Women there are is: " << TotalWomen << endl;
 cout << "The amount of people approved is: " << Pass << endl;
  
  return 0;
}