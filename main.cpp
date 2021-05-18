#include <iostream>
#include "Monstruo.h"
#include "GrupoMonstruo.h"
#include <fstream>

void leeMonstruos(GrupoMonstruo * grupo, string fichero);
int escribeMonstruo(Monstruo *monstruo, string fichero);

int main()
{
    // Creacion objetos Monstruo
    Monstruo boo("boo",24,12.5);
    Monstruo randal("randal",11,50.5);

    Monstruo* roz = new Monstruo("roz",14,2.4);
    Monstruo* yeti = new Monstruo("yeti",5,60.6);

    // Monstrando pantalla datos monstruo
    cout << "Monstruo " << boo.getAlias() << " Fiereza " << boo.getFiereza() << "\n";
    cout << "Monstruo " << randal.getAlias() << " Fiereza " << randal.getFiereza() << "\n";
    cout << "Monstruo " << roz->getAlias() << " Fiereza " << roz->getFiereza() << "\n";
    cout << "Monstruo " << yeti->getAlias() << " Fiereza " << yeti->getFiereza() << "\n";

    // Creando grupo de monstruos
    GrupoMonstruo grupo1(1,3);
    grupo1.insertar(&boo);
    grupo1.insertar(&randal);
    grupo1.insertar(roz);
    grupo1.insertar(yeti); cout << "\n";
    grupo1.visualizar(); cout << "\n";

    // Metodo leeMonstruos()
    GrupoMonstruo grupo2(2, 2);
    string fichero = "Monstruos.txt";
    leeMonstruos(&grupo2, fichero);
    grupo2.visualizar();

    // Metodo escribeMonstruo()
    Monstruo monstruoDavid("David", 99, 99);
    escribeMonstruo(&monstruoDavid, fichero);
}

void leeMonstruos(GrupoMonstruo* grupo, string fichero) {
    cout << "Leyendo el fichero " << fichero << "\n";
    ifstream ifs;
    ifs.open(fichero);

    while ( !ifs.eof() ) {
        string linea;
        string alia;
        string aux;
        int fierez;
        double alt;

        getline(ifs, linea);
        istringstream leer(linea);

        getline(leer, alia, ';');
        getline(leer, aux, ';');
        stringstream(aux) >> fierez;
        getline(leer, aux, ';');
        stringstream(aux) >> alt;
        Monstruo *monstruo1 = new Monstruo(alia,fierez,alt);
        grupo->insertar(monstruo1);
    }
    ifs.close();
}

int escribeMonstruo(Monstruo* monstruo, string fichero) {
    ofstream ofs;
    ofs.open(fichero, ::ios::app);
    ofs << monstruo->getAlias() << ";" << monstruo->getFiereza() << ";" << monstruo->getAltura() << "\n";
    ofs.close();
    return 1;
}