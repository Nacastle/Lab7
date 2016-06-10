#pragma once
#include <string>
using std::string;

class Soldado{
  string nombre;
  string ciudad;
  int edad;
public:
	Soldado(nombre, ciudad, edad);
	virtual ~Soldado();
	string toString()const;
  virtual double Ataque;
  virtual double Defensa;
};
