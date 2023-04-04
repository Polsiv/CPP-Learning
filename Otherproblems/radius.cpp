#include <iostream>
#include <math.h>

using namespace std;


int main() {

  double area = 0, radius = 0;

  cout<<"ingrese el valor del radio"<< endl;

    cin>> radius;

  if (radius < 0){
    cout <<"No existen radios negativos"<<endl;
    
  } else {
    area = /*M_PI * pow(radius,2);*/
 cout<<"El area del circulo es "<< area << endl;
  }
   
}