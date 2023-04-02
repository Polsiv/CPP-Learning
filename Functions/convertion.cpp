#include <iostream>

using namespace std;


double temp_con(double);

int main() {

const double convertions = 4;


  double fahren;

  for (int i = 0; i < convertions; i++){

cout << "Enter the temperature in Fahrenheint degree" << endl;

    cin >> fahren;

    cout << "Here's your convertions " << temp_con(fahren) << endl;
    
  }

  
  return 0;
}


double temp_con(double in_temp){

return ((in_temp - 32)*5/9);
  
}