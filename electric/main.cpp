#include <iostream>

int main(){

    double r1, r2, r3, r4, r5, v;

    std::cout << "Ingrese la resistencia 1 (R1) en omnios: ";
    std::cin >> r1;
    std::cout << "Ingrese la resistencia 2 (R3) en omnios: ";
    std::cin >> r2;
    std::cout << "Ingrese la resistencia 3 (R3) en omnios: "; 
    std::cin >> r3;
    std::cout << "Ingrese la resistencia 4 (R4) en omnios: "; 
    std::cin >> r4;
    std::cout << "Ingrese la resistencia 5 (R4) en omnios: ";
    std::cin >> r5;
    std::cout << "Ingrese la fuente (en voltios): ";
    std::cin >> v;

    double resistencia_equivalente = 1 / ((1 / r1) + (1 / r2) + (1 / r3) + (1 / r4) + (1 / r5));
    double corriente_total = v / resistencia_equivalente;
    double potencia_total = v * corriente_total;

    std::cout << "Resistencia equivalente del circuito: " << resistencia_equivalente << std::endl;
    std::cout << "Corriente total: " << corriente_total << std::endl;
    std::cout << "Potencia total del circuito: " << potencia_total << std::endl;

    return 0;
}