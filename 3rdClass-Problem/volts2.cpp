#include <iostream>
using namespace std;


int main() {

  double volt1 = 0;
  double volt2 = 0;
  double aprox = 0;

  cout<<"Ingrese el valor del voltaje 1"<<endl;
  cin>>volt1;

  cout<<"ingrese el valor del voltaje 2"<<endl;
  cin>>volt2;

  if(volt1 - volt2 < 0.001) {
    aprox = 0;
    cout<<aprox<<endl;
    
  } else {
    aprox = (volt1 - volt2)/2;
    cout<<aprox<<endl;
  }

    
}