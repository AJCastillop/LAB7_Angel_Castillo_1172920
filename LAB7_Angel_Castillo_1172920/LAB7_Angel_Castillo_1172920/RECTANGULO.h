#pragma once
#include "Polígonos.h"
class RECTANGULO :
    public Poligono
{
protected:
    double base;
    double altura;
public:

    RECTANGULO(string figura, string color, int ID, double base, double altura) :Poligono(figura, color, ID) {
        this->base = base;
        this->altura = altura;
    }
    double calcularArea()
    {
        return this->base * this->altura;
    }
    double calcularPerimetro()
    {
        return (2 * this->base) + (2 * this->altura);
    }
    int getid() {
        return this->id;
    }
    string getColor() {
        return this->color;
    }
    string getFigura() {
        return this->figura;
    }
};