#include <vector>
#include "Pieza.h"

#ifndef GENERAL_H
#define GENERAL_H

using namespace std;

class General : public Pieza
{
	private:
		
	public:
		General();
		General(int, int);

		int getX();
		void setX(int);
		int getY();
		void setY(int);
		
	
};
#endif