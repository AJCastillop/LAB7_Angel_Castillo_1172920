#pragma once
#include "Polígonos.h"
class TRIANGULO:
    public Poligono
{
protected:
    double lado;
    double base;
public:

    TRIANGULO(string figura, string color, int ID, double base, double lado) :Poligono(figura, color, ID) {
        this->base = base;
        this->lado = lado;
    }
    double calcularArea()
    {
        double a = sqrt((this->lado * this->lado) - ((this->base * this->base) / 4));
        return ((this->base * a) / 2);
    }
    double calcularPerimetro()
    {
        return (2 * this->lado) + this->base;
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

