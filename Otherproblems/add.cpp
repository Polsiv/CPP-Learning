#include <iostream>

using namespace  std;



int main() {

  double num = 0;
  
double sumpos = 0;
  double sumneg = 0;

  cout<<"ingrese el número"<<endl;
    cin>> num;

  if(num > 0) {

    sumpos = sumpos + num;

    cout<<"la suma del sumpos es: "<< sumpos <<endl;
  } else
  { sumneg = sumneg + num;
    
    cout<<"la suma del sumneg es: "<< sumneg <<endl;
    }
}