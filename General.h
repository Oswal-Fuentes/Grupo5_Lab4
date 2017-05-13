#include <string>
#include "Pieza.h"

#ifndef GENERAL_H
#define GENERAL_H

using namespace std;

class General : public Pieza
{
	private:
		
	public:
		General();
		General(string, int);

		char toString();
};
#endif