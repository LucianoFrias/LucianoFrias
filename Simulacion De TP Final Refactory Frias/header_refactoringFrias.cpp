#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "header_refactoringFrias.h"

Taller::Taller(int capacidad)
{
    capacidadMaximaVehiculos = capacidad;
    cantidadActualVehiculos = 0;
}

Taller::~Taller()
{
    //vacio
}

void Taller::meter(Vehiculo* v)
{
    vehiculos.push_back(v);
    cantidadActualVehiculos++;
}

void Taller::arreglarVehiculos()
{
    for (int i = 0; i < cantidadActualVehiculos; i++){
        vehiculos[i]->arrancar();
    }
}

void Taller::getCantidadActualDeVehiculos()
{
    cout << "Cantidad actual de vehiculos: " << cantidadActualVehiculos << endl;
}



Coche::Coche(string color, string marca, int motor)
{
    //cosas que deban nacer con un coche
    m_color = color;
    m_marca = marca;
    m_motor = motor;
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

Moto::Moto(string color, string marca, int cilindrada)
{
    //cosas que deban nacer con un coche
    m_color = color;
    m_marca = marca;
    m_cilindrada = cilindrada;
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

