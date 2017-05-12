#include <vector>
#include <string>
#include <iostream>

#include <typeinfo>

#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include "Pieza.h"
#include "General.h"
#include "Marine.h"

using namespace std;

void cleanScreen();

int main()
{	
	srand(time(NULL));
	initscr();
	start_color();
	echo();
	cleanScreen();
	bool seguir = true;
	while (seguir == true) {
		char respuesta1[1];
		mvprintw(5, 20, "Bienvenido a CRaftstar:XCOM, que desea hacer?");
		mvprintw(6, 20, "1) Jugar");
		mvprintw(7, 20, "2) Salir");
		mvprintw(8, 20, "Eliga una opcion: ");
		getstr(respuesta1);
		cleanScreen();
		if (respuesta1[0] == '1')
		{
			
		} else {
			mvprintw(5, 20, "Nos vemos luego!");
			getch();
			cleanScreen();
			seguir = false;
		}
	}
  return 0;
}

void cleanScreen(){
	for (int i = 0; i < LINES; i++){
		for (int j = 0; j < COLS; j++){
			mvprintw(i,j," ");
		}
	}
}
