#include "stdafx.h"
#include "Cine.h"

Cine::Cine()
{
}


Cine::~Cine()
{
}

bool Cine::empty(Persona*first) {
	return(first == NULL) ? true : false;
}

void Cine::insertar(Persona *&first, Persona *&last, int asiento, string pelicula, int hora, int sala) {
	Persona *newPersona = new Persona();

	newPersona->asiento = asiento;
	newPersona->pelicula = pelicula;
	newPersona->hora = hora;
	newPersona->sala = sala;
	newPersona->next = NULL;

	if (empty(first)) {
		first = newPersona;
	}

	else {
		last->next = newPersona;
	}

	last = newPersona;
}

void Cine::eliminar(Persona *&first, Persona *&last) {
	
	Persona *tmp = first;

	if (first == last) {
		first = NULL;
		last == NULL;
	}
	else {
		first = first->next;
	}

	delete tmp;
}


