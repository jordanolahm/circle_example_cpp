#ifndef CIRCULO_HPP
#define CIRCULO_HPP

class Circulo {
private:
    double raio;
    double centroX;
    double centroY;

    double calcularArea();
    double calcularCircunferencia();
    double calcularDistanciaEntreCentros(const Circulo& outroCirculo);

public:
    
    Circulo(double raioInicial = 0, double x = 0, double y = 0);

    void definirRaio(double novoRaio);
    void aumentarRaio(double percentualAumento);
    void definirCentro(double x, double y);
    void imprimirRaio();
    void imprimirCentro();
    void imprimirArea();
};

#endif // CIRCULO_HPP
