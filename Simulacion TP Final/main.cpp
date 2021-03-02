#include <iostream>
#include <string>
using namespace std;

#include "header.cpp"

int main()
{
    Taller* taller1 = new Taller(3, 256);
    Vehiculo* coche1 = new Coche("rojo", "honda", 4);
    Vehiculo* moto1 = new Moto("roja", "honda", 4);
    return 0;
    taller1->arreglarVehiculos();
}
