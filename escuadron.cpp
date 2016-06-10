#include "escuadron.h"
#include "soldado.h"
#include <string>
#include <sstream>
#include <iostream>
#include <vector>
using std::string;
using std::stringstream;
using std::vector;

Escuadron::Escuadron(string nombre, vector<Soldado*> peloton){
  this->nombre = nombre;
  this->peloton = peloton;
}

string Escuadron::toString()const{
	stringstream ss;
	ss << "Escuadron @ " << this;
	return ss.str();
}
