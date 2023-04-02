#include <iostream>
using namespace std;
int main() {

int opc;

//Main
  
  do {

    cout << "===================\n";
    cout << "---Menu---\n";
    cout << "1. Option #1\n";
    cout << "2. Option #2\n";
    cout << "3. Exit\n";
    
    cout << "Choose any option you want!\n";
    cin >> opc;

    switch(opc){
        
      case 1: cout << "Hello world\n";
      break;

      case 2: cout << "Hello world\n";
      break;

      case 3: cout << "Successfully\n"; 
      opc = 0;
      break;
      
    } 
    
  } while ( opc != 0);

  return 0;
}