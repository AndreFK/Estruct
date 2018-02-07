#pragma once
#include <iostream>

using namespace std;

class Persona
{
public:

	int asiento;
	string pelicula;
	int hora;
	int sala;

	Persona * next;
	
	Persona();
	~Persona();
};

