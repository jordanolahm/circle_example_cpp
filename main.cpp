#include "Circle.hpp"

#include <iostream>

int main() {
    Circulo circulo1(5, 1, 1);
    Circulo circulo2(3, 4, 5);

    circulo1.imprimirRaio();
    circulo1.imprimirCentro();
    circulo1.imprimirArea();

    circulo2.imprimirRaio();
    circulo2.imprimirCentro();
    circulo2.imprimirArea();

    double distancia = circulo1.calcularDistanciaEntreCentros(circulo2);
    std::cout << "Distância entre os centros: " << distancia << std::endl;

    circulo1.aumentarRaio(20);
    circulo1.imprimirRaio();
    circulo1.imprimirArea();

    return 0;
}