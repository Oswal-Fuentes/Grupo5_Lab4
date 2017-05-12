#include "Pieza.h"

Pieza::Pieza(){

}

Pieza::Pieza(string ptipo,int pjugador){
  tipo = ptipo;
  jugador = pjugador;
}

string Pieza::getTipo(){
  return tipo;
}

int Pieza::getJugador(){
  return jugador;
}

void Pieza::setTipo(string px){
  tipo = px;
}