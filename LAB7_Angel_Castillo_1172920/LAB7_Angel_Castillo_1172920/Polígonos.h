#pragma once
#include<string>
using std::string;

class Poligono
{
protected:
	string figura;
	string color;
	int ID;


public:

	Poligono(string figura, string color, int ID) {
		this->figura = figura;
		this->color = color;
		this->ID = ID;
	}
	virtual double calcularArea() = 0;
	virtual double calcularPerimetro() = 0;

	virtual string getColor() {
		return "";
	}
	virtual int id() {
		return 0;
	}
	virtual string getFigura() {
		return "";
	}
};

