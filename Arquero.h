#pragma once
#include <string>
#include "soldado.h"
using std::string;

class Arquero{
  int flechas;
  int precision;
public:
	Arquero(string, string, int, double, double);
	string toString()const;
  double getFlechas()const;
  double getPrecision()const;
  double Ataque()const;
  double Defensa()const;
};
