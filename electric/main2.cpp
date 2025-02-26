#include <iostream>
#include <numbers>

int main(){

    double resistencia, capacitancia ;

    std::cout << "Ingrese la resistencia en omnios: ";
    std::cin >> resistencia;
    std::cout << "Ingrese capacitancia en faradios: ";
    std::cin >> capacitancia;

    double frecuencia_de_oscilacion = 1 / ( 2 * std::numbers::pi *  resistencia * capacitancia);

    std::cout.precision(4);
    std::cout << "La frecuencia de oscilación es: " << frecuencia_de_oscilacion;


    return 0;
    
}