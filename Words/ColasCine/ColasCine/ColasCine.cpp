// ColasCine.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include "Cine.h"
#include "Persona.h"
using namespace std;

int main()
{

	int asiento;
	string pelicula;
	int hora;
	int sala;

	Cine cine = Cine();
	Persona *first = NULL;
	Persona * last = NULL;

	

	int opc = 98;
	while(opc!=0){

		cout << "MENU" << endl;
		cout << "1.Insertar" << endl;
		cout << "2. Eliminar" << endl;
		cout << "3. Esta Vacio" << endl;
		cout << "0. Salir" << endl;
		cin >> opc;
		switch (opc) {
		case 1:
			cout << "Insertar" << endl;
			cout << "Pelicula: "; 
			cin >> pelicula;
			cout << "Asiento: ";
			cin >> asiento;
			cout << "Hora: ";
			cin >> hora;
			cout << "Sala: ";
			cin >> sala;
			cine.insertar(first, last, asiento, pelicula, hora, sala);
			break;
		case 2:
			cout << "Eliminar" << endl;
			cine.eliminar(first,last);
			break;
		case 3:
			cout << "Esta Vacio" << endl;
			cine.empty(first);
			break;
		}
	}
    return 0;
}

