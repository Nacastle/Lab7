#pragma once
#include <string>
using std::string;

class Asesino: public Soldado{
  int asesinatos;
  int desapercibido;
public:
	Asesino(string, string, int, double, double);
	virtual ~Asesino();
	string toString()const;
  double getAsesinato()const;
  double getDesapercibido()const;
  double Ataque()const;
  double Defensa()const;
};
