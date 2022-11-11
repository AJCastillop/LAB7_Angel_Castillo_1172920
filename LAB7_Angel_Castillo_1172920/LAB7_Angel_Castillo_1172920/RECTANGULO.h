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
    double calcularArea()override
    {
        return this->base * this->altura;
    }
    double calcularPerimetro()override
    {
        return (2 * this->base) + (2 * this->altura);
    }
    int id()override {
        return this->ID;
    }
    string getColor() override {
        return this->color;
    }
    string getFigura() override {
        return this->figura;
    }
};