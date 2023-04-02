#include <iostream>

int main() {
    
int k = 1;

  for (int i = 1; i <= 3; i++){
        
        std::cout <<"\n=========================\n";
        std::cout << "The table of " << k << " is: ";
        std::cout <<"\n=========================\n";

    
      for (int j = 1; j <= 10; j++) {
        std::cout << i << " x " << j << " = " << i*j << "\n";
       
      }  k++;
        
        
    } std::cout << std::endl;  
 
  

  
  }


