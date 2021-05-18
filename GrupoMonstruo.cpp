#include "GrupoMonstruo.h"


// Constructor Principal
GrupoMonstruo::GrupoMonstruo(int ident, int numMa) {
	this->identificador = ident;
	this->numMax = numMa;
	this->monstruos = new Monstruo * [numMax];
}

// Metodos Consultores y modificadores
int GrupoMonstruo::getIdentificador() {
	return this->identificador;
}
void GrupoMonstruo::setIdentificador(int ident) {
	this->identificador = ident;
}
int GrupoMonstruo::getNumMax() {
	return this->numMax;
}
void GrupoMonstruo::getNumMax(int num) {
	this->numMax = num;
}

// Otros metodos
void GrupoMonstruo::insertar(Monstruo* monster) {

	if (posicionArray < numMax) {
		this->monstruos[posicionArray] = monster;
		this->posicionArray = this->posicionArray + 1;
	}
	else {
		cout << "No hay espacio en el grupo de monstruos para el monstruo " << monster->getAlias() << "\n";
	}


}
void GrupoMonstruo::visualizar() {
	int posicion = this->posicionArray;
	cout << "Visualizando grupo de monstruos " << this->identificador << " con tamanio " << this->getNumMax() << "\n";

	for (int i = 0; i < posicion; i++) {
		cout << "Monstruo: " << this->monstruos[i]->getAlias() << " Altura " << this->monstruos[i]->getAltura() << " Fiereza " << this->monstruos[i]->getFiereza() << "\n";
	}

}