#include "soldado.h"
#include "Arquero.h"
#include <sstream>
#include <string>
#include <iostream>
using std::cout;
using std::endl;
using std::string;
using std::stringstream;

Arquero::Arquero(string nombre, string ciudad, int edad, double flechas, double precision){
  Soldado(nombre,ciudad,edad);
  this->flechas = flechas;
  this->precision = precision;
}

double Arquero::getFlechas()const{
  return flechas;
}
double Arquero::getPrecision()const{
  return precision;
}

double Arquero::Ataque()const{
  return flechas*(precision/1000);
}

double Arquero::Defensa()const{
  return 0;
}

string Arquero::toString()const{
  stringstream ss;
  ss << "Arquero: " << flechas<< "Precision:" << precision;
  return ss.str();
}
