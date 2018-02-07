#pragma once

#include <iostream>
#include "Persona.h"

using namespace std;

class Cine
{
public:

	Persona * first;
	Persona * last;

	void insertar(Persona*&, Persona *&, int, string, int, int);
	void eliminar(Persona*&, Persona *&);
	bool empty(Persona*);

	Cine();
	~Cine();
};

