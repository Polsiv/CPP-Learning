#include <iostream>
#include <numbers>
#include <cmath>

int main(){

    double frec_portadora, frec_moduladora, amplitud_portadora, amplitud_moduladora, potencia_portadora;

    std::cout << "Ingrese la frecuencia de la portadora (Hz): ";
    std::cin >> frec_portadora;
    std::cout << "Ingrese la frecuencia de la moduladora (Hz): ";
    std::cin >> frec_moduladora;
    std::cout << "Ingrese la amplitud de la portadora (V): ";
    std::cin >> amplitud_portadora;
    std::cout << "Ingrese la amplitud de la moduladora (V): ";
    std::cin >> amplitud_moduladora;
    std::cout << "Ingrese la potencia de la portadora (W): ";
    std::cin >> potencia_portadora;

    double indice_modulacion = amplitud_moduladora / amplitud_portadora;
    double frecuencia_banda_lateral_superior = frec_portadora + frec_moduladora;
    double frecuencia_banda_lateral_inferior = frec_portadora - frec_moduladora;
    double potencia_total_senal_modulada = potencia_portadora * (1 + (pow(indice_modulacion, 2) / 2));


    std::cout << std::endl;
    std::cout << "Indice de la modulacion: " << indice_modulacion << std::endl; 
    std::cout << "Frecuencia de la banda lateral superior: " << frecuencia_banda_lateral_superior << " Hz" << std::endl; 
    std::cout << "Frecuencia de la banda lateral inferior: " << frecuencia_banda_lateral_inferior<< " Hz" << std::endl; 
    std::cout << "Potencia total de la señal modulada: " << potencia_total_senal_modulada << " W" << std::endl; 

    return 0;
}