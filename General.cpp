#include "General.h"

General::General()
{
}

General::General(string pTipo, int pJugador) : Pieza(pTipo, pJugador)
{
}

char General::toString() {
	return 'G';
}