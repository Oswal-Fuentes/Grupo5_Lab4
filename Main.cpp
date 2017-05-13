#include <vector>
#include <string>
#include <iostream>
#include "Pieza.h"
#include "General.h"
#include "Marine.h"

using namespace std;

Pieza*** setTablero(Pieza***);

int main()
{	
	Pieza* P1J1 = new Marine("Marine", 1);
	Pieza* P2J1 = new Marine("Marine", 1);
	Pieza* P3J1 = new Marine("Marine", 1);
	Pieza* P4J1 = new Marine("Marine", 1);
	Pieza* P5J1 = new Marine("Marine", 1);
	Pieza* P6J1 = new Marine("Marine", 1);
	Pieza* P7J1 = new Marine("Marine", 1);
	Pieza* P8J1 = new Marine("Marine", 1);
	Pieza* P9J1 = new Marine("Marine", 1);
	Pieza* P10J1 = new Marine("Marine", 1);
	Pieza* P11J1 = new Marine("Marine", 1);
	Pieza* P12J1 = new Marine("Marine", 1);

	Pieza* P1J2 = new Marine("Marine", 2);
	Pieza* P2J2 = new Marine("Marine", 2);
	Pieza* P3J2 = new Marine("Marine", 2);
	Pieza* P4J2 = new Marine("Marine", 2);
	Pieza* P5J2 = new Marine("Marine", 2);
	Pieza* P6J2 = new Marine("Marine", 2);
	Pieza* P7J2 = new Marine("Marine", 2);
	Pieza* P8J2 = new Marine("Marine", 2);
	Pieza* P9J2 = new Marine("Marine", 2);
	Pieza* P10J2 = new Marine("Marine", 2);
	Pieza* P11J2 = new Marine("Marine", 2);
	Pieza* P12J2 = new Marine("Marine", 2);

	Pieza*** tabla = new Pieza**[8];
	for (int i = 0; i < 8; ++i)
	{
		tabla[i] = new Pieza*[8];
	}
	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			tabla[i][j] = NULL;
		}
	}

	tabla[7][0] = P1J1;
	tabla[7][2] = P2J1;
	tabla[7][4] = P3J1;
	tabla[7][6] = P4J1;
	tabla[6][1] = P5J1;
	tabla[6][3] = P6J1;
	tabla[6][5] = P7J1;
	tabla[6][7] = P8J1;
	tabla[5][0] = P9J1;
	tabla[5][2] = P10J1;
	tabla[5][4] = P11J1;
	tabla[5][6] = P12J1;

	tabla[0][1] = P1J2;
	tabla[0][3] = P2J2;
	tabla[0][5] = P3J2;
	tabla[0][7] = P4J2;
	tabla[1][2] = P5J2;
	tabla[1][4] = P6J2;
	tabla[1][6] = P7J2;
	tabla[1][8] = P8J2;
	tabla[2][1] = P9J2;
	tabla[2][3] = P10J2;
	tabla[2][5] = P11J2;
	tabla[2][7] = P12J2;

	string mat[8][8];
	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			mat[i][j] = "0";
		}
	}

	mat[7][0] = "M";
	mat[7][2] = "M";
	mat[7][4] = "M";
	mat[7][6] = "M";
	mat[6][1] = "M";
	mat[6][3] = "M";
	mat[6][5] = "M";
	mat[6][7] = "M";
	mat[5][0] = "M";
	mat[5][2] = "M";
	mat[5][4] = "M";
	mat[5][6] = "M";

	mat[0][1] = "M";
	mat[0][3] = "M";
	mat[0][5] = "M";
	mat[0][7] = "M";
	mat[1][0] = "M";
	mat[1][2] = "M";
	mat[1][4] = "M";
	mat[1][6] = "M";
	mat[2][1] = "M";
	mat[2][3] = "M";
	mat[2][5] = "M";
	mat[2][7] = "M";

	bool seguir = true;
	while (seguir == true) {
		cout << "Bienvenido!" << endl;
		cout << "Eliga una opcion: " << endl;
		cout << "1) Jugar" << endl;
		cout << "2) Salir" << endl;
		int resp1;
		cin >> resp1;
		if (resp1 == 1)
		{
			cout << "Ingrese el nombre del primer jugador: " << endl;
			string nombre1;
			cin >> nombre1;
			cout << "Ingrese el nombre del segundo jugador: " << endl;
			string nombre2;
			cin >> nombre2;
			bool jugar = true;
			int turno = 1, cont = 0;
			while (jugar == true) {
				if (turno == 1)
				{
					cout << "Turno de jugador 1!" << endl;
					for (int i = 0; i < 8; ++i)
					{
						for (int j = 0; j < 8; ++j)
						{
							cout << mat[i][j] << "|";
						}
						cout << " " << cont << endl;
						cont++;
					}
					cont = 0;
					for (int i = 0; i < 8; ++i)
					{
						cout << i << " ";
					}
					cout << endl;
					cout << endl;
					cout << "Que pieza desea mover?" << endl;
					cout << "En X" << endl;
					int respX;
					cin >> respX;
					cout << "En Y" << endl;
					int respY;
					cin >> respY;
					cout << "A donde desea moverlo?" << endl;
					cout << "X: " << endl;
					int movX;
					cin >> movX;
					cout << "Y: " << endl;
					int movY;
					cin >> movY;
					tabla[movX][movY] = tabla[respX][respY];
					tabla[respX][respY] = NULL;
					mat[movX][movY] = mat[respX][respY];
					mat[respX][respY] = "0";
					cont = 0;

					for (int i = 0; i < 8; ++i)
					{
						for (int j = 0; j < 8; ++j)
						{
							cout << mat[i][j] << "|";
						}
						cout << " " << cont << endl;
						cont++;
					}					
					turno = 2;
				} else {
					cout << "Turno de jugador 2!" << endl;
					cont = 0;
					for (int i = 0; i < 8; ++i)
					{
						for (int j = 0; j < 8; ++j)
						{
							cout << mat[i][j] << "|";
						}
						cout << " " << cont << endl;
						cont++;
					}
					cont = 0;
					for (int i = 0; i < 8; ++i)
					{
						cout << i << " ";
					}
					cout << endl;
					cout << endl;
					cout << "Que pieza desea mover?" << endl;
					cout << "En X" << endl;
					int respX;
					cin >> respX;
					cout << "En Y" << endl;
					int respY;
					cin >> respY;
					cout << "A donde desea moverlo?" << endl;
					cout << "X: " << endl;
					int movX;
					cin >> movX;
					cout << "Y: " << endl;
					int movY;
					cin >> movY;
					tabla[movX][movY] = tabla[respX][respY];
					tabla[respX][respY] = NULL;
					mat[movX][movY] = mat[respX][respY];
					mat[respX][respY] = "0";
					cont = 0;
					for (int i = 0; i < 8; ++i)
					{
						for (int j = 0; j < 8; ++j)
						{
							cout << mat[i][j] << "|";
						}
						cout << " " << cont << endl;
						cont++;
					}				
					turno = 1;
				}
			}
		} else {
			cout << "Nos vemos!" << endl;
			seguir = false;
		}
	}
  return 0;
}

/*Pieza** setTablero(Pieza*** tabla) {
	Pieza P1J1 = new Marine("Marine", 1);
	Pieza P2J1 = new Marine("Marine", 1);
	Pieza P3J1 = new Marine("Marine", 1);
	Pieza P4J1 = new Marine("Marine", 1);
	Pieza P5J1 = new Marine("Marine", 1);
	Pieza P6J1 = new Marine("Marine", 1);
	Pieza P7J1 = new Marine("Marine", 1);
	Pieza P8J1 = new Marine("Marine", 1);
	Pieza P9J1 = new Marine("Marine", 1);
	Pieza P10J1 = new Marine("Marine", 1);
	Pieza P11J1 = new Marine("Marine", 1);
	Pieza P12J1 = new Marine("Marine", 1);

	Pieza P1J2 = new Marine("Marine", 2);
	Pieza P2J2 = new Marine("Marine", 2);
	Pieza P3J2 = new Marine("Marine", 2);
	Pieza P4J2 = new Marine("Marine", 2);
	Pieza P5J2 = new Marine("Marine", 2);
	Pieza P6J2 = new Marine("Marine", 2);
	Pieza P7J2 = new Marine("Marine", 2);
	Pieza P8J2 = new Marine("Marine", 2);
	Pieza P9J2 = new Marine("Marine", 2);
	Pieza P10J2 = new Marine("Marine", 2);
	Pieza P11J2 = new Marine("Marine", 2);
	Pieza P12J2 = new Marine("Marine", 2);

	for (int i = 0; i < 8; ++i)
	{
		for (int i = 0; i < 8; ++i)
		{
			tabla[i][j] = NULL;
		}
	}

	tabla[7][0] = P1J1;
	tabla[7][2] = P2J1;
	tabla[7][4] = P3J1;
	tabla[7][6] = P4J1;
	tabla[6][1] = P5J1;
	tabla[6][3] = P6J1;
	tabla[6][5] = P7J1;
	tabla[6][7] = P8J1;
	tabla[5][0] = P9J1;
	tabla[5][2] = P10J1;
	tabla[5][4] = P11J1;
	tabla[5][6] = P12J1;

	tabla[0][1] = P1J2;
	tabla[0][3] = P2J2;
	tabla[0][5] = P3J2;
	tabla[0][7] = P4J2;
	tabla[1][2] = P5J2;
	tabla[1][4] = P6J2;
	tabla[1][6] = P7J2;
	tabla[1][8] = P8J2;
	tabla[2][1] = P9J2;
	tabla[2][3] = P10J2;
	tabla[2][5] = P11J2;
	tabla[2][7] = P12J2;

	return tabla;
}*/