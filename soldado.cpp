#include "soldado.h"
#include <sstream>
#include <string>
#include <iostream>
using std::cout;
using std::endl;
using std::string;
using std::stringstream;

Soldado::Soldado(string nombre, string ciudad, int edad){
  this->nombre = nombre;
  this->ciudad = ciudad;
  this->edad = edad;
}

double Soldado::Ataque()const{
  return -1;
}

double Soldado::Defensa()const{
  return -1;
}

string Soldado::toString(){
  stringstream ss;
  ss << "Soldado: " << this->nombre << "Ciudad: " << this->ciudad << "Edad: " << this->edad;
  return ss.str();
}
