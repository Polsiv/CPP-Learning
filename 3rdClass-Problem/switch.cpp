#include <iostream>



int main() {

char code;

  std::cout << "Insert a specification code\n";

  std::cin >> code;

  switch(code){
   
    case 'S': std::cout << "El elemento tiene grado exploración especial\n";
    break;

    case 'M': std::cout<< "El elemento tiene grado militar\n";
    break;

    case 'C': std::cout << "El elemento tiene grado comercial\n";
    break;


    case 'T': std::cout << "El elemtento tiene grado de juguete\n";
    break;

    default: std::cout<< "Se ha introducido un código inválido\n";
    
  }

    return 0;
}