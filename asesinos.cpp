#include "soldado.h"
#include "coraza.h"
#include <sstream>
#include <string>
#include <iostream>
using std::cout;
using std::endl;
using std::string;
using std::stringstream;

Asesino::Asesino(string nombre, string ciudad, int edad, double asesinatos, double desapercibido){
  Soldado(nombre,ciudad,edad);
  this->asesinatos = asesinatos;
  this->desapercibido = desapercibido;
}

double Asesino::getAsesinato()const{
  return asesinatos;
}
double Asesino::getDesapercibido()const{
  return desapercibido;
}

double Asesino::Ataque()const{
  return asesinatos;
}

double Asesino::Defensa()const{
  return desapercibido*10;
}

string Asesino::toString()const{
  stringstream ss;
  ss << "Asesino: " << "Asesinatos: " << asesinatos << "Desapercibido" << desapercibido;
  return ss.str();
}
