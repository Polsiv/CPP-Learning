#include <iostream>

int main() {

  int code;

std::cout << "Insert the code\n";

std::cin >> code;

switch (code){

  case 1: std::cout << "3M Corp\n";
  break;

  case 2: std::cout << "Maxell Corp\n";
  break;

  case 3: std::cout << "Sony Corp\n";
  break;
  
  case 4: std::cout << "Verbatim Corp\n";
  break;

  default: std::cout << "Se ha introducido un código inválido";
  
    }
  
}