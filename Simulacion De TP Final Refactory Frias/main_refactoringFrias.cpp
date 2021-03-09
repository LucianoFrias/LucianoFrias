#include <iostream>
#include <string>
#include <vector>

#include "header_refactoringFrias.cpp"

int main()
{
    Taller* taller1 = new Taller(256);
    Vehiculo* coche1 = new Coche("rojo", "honda", 4);
    Vehiculo* moto1 = new Moto("roja", "honda", 4);
    taller1->getCantidadActualDeVehiculos();
    taller1->arreglarVehiculos();
    coche1->arrancar();
    moto1->repostar();
    return 0;
}
