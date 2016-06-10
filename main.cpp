#include <iostream>
#include "arquero.h"
#include "escuadron.h"
#include "soldado.h"
#include "coraza.h"
#include "asesinos.h"
#include <vector>
using std::cout;
using std::vector;
using std::cin;
using std::endl;


int main(int argc, char const *argv[]) {
  int op=1;
  vector<Escuadron*> guerra;
  vector<Soldado*> escuadron;
  while (op != 0) {
    int op2;
    string nombre,ciudad;
    int edad;
    cout << "Ingrese el nombre" << endl;
    cin >> nombre;
    cout << "Ingrese el nombre de la ciudad" << endl;
    cin >> ciudad;
    cout << "Ingrese edad" << endl;
    cin >> edad;
    cout << "Ingrese una opcion\n0.Salir e ir a la simulacion.\n1.Arqueras\n2.Corazas Duras\n3.Asesinos Ocultos" << endl;
    cin >> op;
    if (op = 1) {
      int flechas,precision;
      cout << "Ingrese el numero de flechas" << endl;
      cin >> flechas;
      cout << "Ingrese precision" << endl;
      cin >> precision;
      escuadron.push_back(new Arquero(nombre,ciudad,edad,flechas,precision));
    }else if (op = 2) {
      int armadura,lanzas;
      cout << "Ingrese cuanta armadura tiene: " << endl;
      cin >> armadura;
      cout << "ingrese el numero de lanzas: " << endl;
      cin >> lanzas;
      escuadron.push_back(new Coraza(nombre,ciudad,edad,armadura,lanzas));
    }else if (op = 3) {
      int asesinatos,desapercibido;
      cout << "Ingrese el numero de asesinatos: " << endl;
      cin >> asesinatos;
      cout << "Ingrese el desapercibido" << endl;
      cin >> desapercibido;
      escuadron.push_back(new Asesino(nombre,ciudad,edad,asesinatos,desapercibido));
    }
    guerra.push_back(new Escuadron(nombre,escuadron));
  }
  for (int i = 0; i < escuadron.size(); i++) {
    cout << i << ":\t" << guerra[i]->toString() << endl;
  }

  cout << endl;
  int pos1,pos2,pos3,pos4,pos5,pos6,pos7,pos8;
  guerra i1,d1,f1,t1;
  guerra i2,d2,f2,t2;
  cout << "Ingresando a la simulacion:" << endl;
  cout << "Jugador 1 ingrese el izquierda de su peloton." << endl;
  cin >> pos1;
  cout << "Jugador 1 ingrese el derecha de su peloton." << endl;
  cin >> pos2;
  cout << "Jugador 1 ingrese el frontal de su peloton." << endl;
  cin >> pos3;
  cout << "Jugador 1 ingrese el trasera de su peloton." << endl;
  cin >> pos4;
  cout << "Jugador 2 ingrese el izquierda de su peloton." << endl;
  cin >> pos5;
  cout << "Jugador 2 ingrese el derecha de su peloton." << endl;
  cin >> pos6;
  cout << "Jugador 2 ingrese el frontal de su peloton." << endl;
  cin >> pos7;
  cout << "Jugador 2 ingrese el trasera de su peloton." << endl;
  cin >> pos8;

  cout << "Empieza: " << endl;
  bool gane = false;
  while (gane = false) {
    turno = 1;
    if (turno = 1) {
      int jugada1;
      cout << "Jugador a donde desea atacar?" << endl;
      cin >> jugada1;
      if (jugada1 == 1 && pos1 != -1) {

      }else if (jugada1 == 2 && pos2 != -1) {

      }else if (jugada1 == 3 && pos3 != -1) {

      }else if (jugada1 == 4 && pos4 != -1) {
        
      }
    }
  }
  return 0;
}
