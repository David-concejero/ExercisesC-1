#pragma once
#include <string>
using namespace std;
#include <sstream>

class Monstruo
{

private:
	string alias;
	int fiereza;
	double altura;

public:
	// Constructor principal
	Monstruo(string alia, int fiereza, double altu);
	Monstruo(string linea);

	// Metodos Consultores
	string getAlias();
	int getFiereza();
	double getAltura();


};

