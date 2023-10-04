#include "Circle.hpp"

#include <iostream>
#include <cmath>


//default constructor
Circulo::Circulo() : raioInicial{0}, x{0}, y{0} {}

//constructor received params
Circulo::Circulo(double raioInicial, double x, double y) {
    raio = raioInicial;
    centroX = x;
    centroY = y;
}

double Circulo::calcularArea() {
    return M_PI * raio * raio;
}

double Circulo::calcularCircunferencia() {
    return 2 * M_PI * raio;
}

double Circulo::calcularDistanciaEntreCentros(const Circulo& outroCirculo) {
    double deltaX = centroX - outroCirculo.centroX;
    double deltaY = centroY - outroCirculo.centroY;
    return sqrt(deltaX * deltaX + deltaY * deltaY);
}

void Circulo::definirRaio(double novoRaio) {
    raio = novoRaio;
}

void Circulo::aumentarRaio(double percentualAumento) {
    raio *= (1 + percentualAumento / 100);
}

void Circulo::definirCentro(double x, double y) {
    centroX = x;
    centroY = y;
}

void Circulo::imprimirRaio() {
    std::cout << "Raio do círculo: " << raio << std::endl;
}

void Circulo::imprimirCentro() {
    std::cout << "Centro do círculo: (" << centroX << ", " << centroY << ")" << std::endl;
}

void Circulo::imprimirArea() {
    double area = calcularArea();
    std::cout << "Área do círculo: " << area << std::endl;
}