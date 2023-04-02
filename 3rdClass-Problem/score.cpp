#include <iostream>

int main() {

  char score;


  switch(score) {

    case 'A': std::cout << "Your score is between 90 and 100\n";
    break;
    case 'B': std::cout << "Your score is between 80 and 89.9\n";
    break;
    case 'C': std::cout << "Your score is between 70  and 79.9\n";
    break;
    case 'D': std::cout << "How you guys gonna explain this one\n";
    break;

    default: std::cout << "por supuesto que no tuvo que ver nada con mi";
  }

}