#pragma once
#include "ListaEn.h"
class nube
{
private:

public:
	nube();
	nube(int tamaño);
	~nube();
	void insertar(LLAVE llave, DOC valor);
	LISTA buscar(LLAVE llave);
};

