#pragma once
#include "Nodo.h"
class Arbol
{
public:
	Nodo raiz;
	Arbol();
	int Search(char value[]);
	int insert(int value);
	~Arbol();
};

