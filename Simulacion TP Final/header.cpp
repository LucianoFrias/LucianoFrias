#include <iostream>
#include <string>
using namespace std;

#include "header.h"

Taller::Taller()
{

}

Taller::Taller(int _max_vehiculos, int _num_vehiculos)
{
    max_vehiculos = _max_vehiculos;
    num_vehiculos = _num_vehiculos;
}

Taller::~Taller()
{

}

void Taller::meter(Vehiculo* v)
{
    // lista_de_vehiculos.add(v);
}

void Taller::arreglarVehiculos()
{
    for (int i = 0; i < num_vehiculos; i++){
        cout << "Marca de coche: " << coche1[i]->marca;
        cout << "Color de coche: " << coche1[i]->color;
        coche1[i]->arrancar();
        cout << endl;
        cout << "Marca de moto: " << moto1[i]->marca;
        cout << "Color de moto: " << moto1[i]->color;
        moto1[i]->arrancar();
    }
}



Coche::Coche(string _color, string _marca, int _motor)
{
    color = _color;
    marca = _marca;
    motor = _motor;
}

Coche::~Coche()
{
    //cosas que deban morir con un coche
}

void Coche::arrancar()
{
    cout << "El coche esta en marcha..." << endl;
}

void Coche::parar()
{
    cout << "El coche esta detenido..." << endl;
}

void Coche::repostar()
{
    cout << "El coche se detuve a repostar combustible..." << endl;
}
/**********************************MOTO CLASS************************************/


Moto::Moto(string _color, string _marca, int _cilindrada)
{
    color = _color;
    marca = _marca;
    cilindrada = _cilindrada;
}

Moto::~Moto()
{
    //cosas que deban morir con una moto
}

void Moto::arrancar()
{
    cout << "La moto esta en marcha..." << endl;
}

void Moto::parar()
{
    cout << "La moto esta detenida..." << endl;
}

void Moto::repostar()
{
    cout << "La moto se detuvo a repostar combustible..." << endl;
}
