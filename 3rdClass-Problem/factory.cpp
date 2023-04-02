#include <iostream>
using namespace std;


int main() {



int Small_Generator = 20;
int Big_Generator = 50;
char x;

  cout<<"Inserte el carácter (no use números para ingresar el caracter)"<<endl;
  cin>> x;

  switch (x) {

    case 's': cout <<"use el generador más pequeño" << endl;
    break;

    default: cout << "use el generador más grande" << endl;
  }
}