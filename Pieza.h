#include <string>

#ifndef PIEZA_H
#define PIEZA_H

using namespace std;

class Pieza{
  protected:
    string tipo;
    int jugador;
  public:
    Pieza();
    Pieza(string ,int);
    //Mutadores
    string getTipo();
  	void setTipo(string);
    int getJugador();
};

#endif