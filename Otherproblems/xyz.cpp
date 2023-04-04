#include <iostream>
using namespace std;

int main() {
  
double x;
double y;
double z;
double p;

  cout<<"Ingresa el valor de X"<<endl;

cin>>x;
    cout<<"Ingresa el valor de Y"<<endl;

cin>>y;


  cout<<"Ingresa el valor de Z"<<endl;

cin>>z;

  if (x > y && z < 20){
    cout<<"Condición cumplida!, ingrese el valor de P"<<endl;

    cin>>p;
  } else{
       cout<<"No se cumplió la condición"<<endl;
  }
}
