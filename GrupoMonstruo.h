#pragma once
#include <string>
#include "Monstruo.h"
#include <iostream>
using namespace std;
class GrupoMonstruo
{
private:
	int identificador;
	int numMax;
	int posicionArray = 0;
	Monstruo **monstruos;

public:
	// Constructor Principal
	GrupoMonstruo(int ident, int numMa);

	// Metodos Consultores y modificadores
	int getIdentificador();
	void setIdentificador(int ident);
	int getNumMax();
	void getNumMax(int num);

	// Otros metodos
	void insertar(Monstruo *monster);
	void visualizar();

	// Destructor
	~GrupoMonstruo() {
		delete[]monstruos;
	}

};

