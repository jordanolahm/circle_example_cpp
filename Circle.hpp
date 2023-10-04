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

    //default constructor
    Circulo(double raioInicial, double x, double y);

    void definirRaio(double novoRaio);
    
    void aumentarRaio(double percentualAumento);
    
    void definirCentro(double x, double y);
    
    //Function not return value
    void imprimirRaio();
    void imprimirCentro();
    void imprimirArea();
};

#endif // CIRCULO_HPP
