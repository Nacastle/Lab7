#pragma once
#include <string>
using std::string;
using std::vector;

class Escuadron{
  string nombre;
  vector<Soldado*> peloton;
public:
	Escuadron(nombre, vector<Soldado*>);
	virtual ~Escuadron();
	string toString()const;
};
