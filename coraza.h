#pragma once
#include <string>
using std::string;

class Coraza: public Soldado{
  int dureza;
  int lanza;
public:
	Coraza(string, string, int, double, double);
	virtual ~Coraza();
	string toString()const;
  double getDureza()const;
  double getLanzas()const;
  double Ataque()const;
  double Defensa()const;
};
