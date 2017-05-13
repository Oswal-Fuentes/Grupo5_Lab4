#include "Marine.h"

Marine::Marine()
{
}

Marine::Marine(string pTipo, int pJugador) : Pieza(pTipo, pJugador)
{
}

char Marine::toString() {
	return 'M';
}