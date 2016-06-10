#pragma once
#include <string>
#include <vector>
#include "soldado.h"
using std::string;
using std::vector;

class Escuadron{
  string nombre;
  vector<Soldado*> peloton;
public:
	Escuadron(string, vector<Soldado*>);
	string toString()const;
};
