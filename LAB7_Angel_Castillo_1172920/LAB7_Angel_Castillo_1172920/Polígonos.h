#pragma once
#include<string>
using std::string;

class Poligono
{
protected:
	int id;
	string color;
	string figura;

public:

	SetPolígono(string figura, string color, int id)
	{
		this->figura = figura;
		this->color = color;
		this->id = id;
	}

	virtual double Poligono::CalcArea() = 0;

};

