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

	Poligono(string figura, string color, int id)
	{
		this->figura = figura;
		this->color = color;
		this->id = id;
	}

	virtual double Poligono::CalcArea() = 0;
	virtual double Poligono::CalcPerimetro() = 0;

	virtual string getColor()
	{
		return "";
	}

	virtual string getfigura()
	{
		return "";
	}

	virtual int getid()
	{
		return 0;
	}
	

};

