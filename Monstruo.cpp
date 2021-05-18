#include "Monstruo.h"
using namespace std;

// Constructor principal
Monstruo::Monstruo(string alia, int fiereza, double altu) {
	this->alias = alia;
	this->fiereza = fiereza;
	this->altura = altu;
}
Monstruo::Monstruo(string linea) {

	string alia;
	string aux;
	int fierez;
	double alt;

	istringstream leer(linea);
	getline(leer, alia, ';');
	getline(leer, aux, ';');
	stringstream(aux) >> fierez;
	getline(leer, aux, ';');
	stringstream(aux) >> alt;

	this->alias = alia;
	this->fiereza = fierez;
	this->altura = alt;
}

// Metodos Consultores
string Monstruo::getAlias() {
	return this->alias;
}
int Monstruo::getFiereza() {
	return this->fiereza;
}
double Monstruo::getAltura() {
	return this->altura;
}
