#include "soldado.h"
#include "coraza.h"
#include <sstream>
#include <string>
#include <iostream>
using std::cout;
using std::endl;
using std::string;
using std::stringstream;

Coraza::Coraza(string nombre, string ciudad, int edad, double dureza, double lanza){
  Soldado(nombre,ciudad,edad);
  this->dureza = dureza;
  this->lanza = lanza;
}

double Coraza::getDureza()const{
  return dureza;
}
double Coraza::getLanzas()const{
  return lanza;
}

double Coraza::Ataque()const{
  return lanzas;
}

double Coraza::Defensa()const{
  return dureza;
}

string Coraza::toString()const{
  stringstream ss;
  ss << "Coraza: " << "Lanzas: " << Lanzas << "dureza" << dureza;
  return ss.str();
}
