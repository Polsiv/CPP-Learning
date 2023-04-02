#include <iostream>

using namespace std;

int main() {
  double temp1;
  double temp2;
  double factor = 0.5;
  double dif;
  double error;
  

  cout<<"Ingresa la temperatura 1"<<endl;
  cin>>temp1;
  cout<<"Ingresa la temperatura 2"<<endl;
  cin>>temp2;

 dif = temp1 - temp2;

  if(dif > 2.3 ) {

    error = (temp1 - temp2) * factor;

      cout<<"el error es "<<factor<<"?"<<endl;
  
  } else{

    cout<<"la temperatura es "<<dif<<endl;
  }

 
}