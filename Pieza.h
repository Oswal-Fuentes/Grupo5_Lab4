#ifndef PIEZA_H
#define PIEZA_H

class Pieza{
    protected:
        int x , y;
    public:
  Pieza();
  Pieza(int,int);
    //Mutadores
  int getX();
	int getY();
	void setX(int);
	void setY(int);

};

#endif
