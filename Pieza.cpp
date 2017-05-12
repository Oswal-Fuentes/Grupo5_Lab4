#include "pieza.h"

Pieza::Pieza(){

}

Pieza::Pieza(int px,int py){
  this->x=px;
  this->y=py;
}

int Pieza::getX(){

  return x;
}

int Pieza::getY(){
  return y;
}

void Pieza::setX(int px){
  x=px;
}

void Pieza::setY(int py){
  y=py;
}
