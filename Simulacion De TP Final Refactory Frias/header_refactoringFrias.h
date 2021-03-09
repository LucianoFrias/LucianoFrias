#ifndef header_refactoringFrias_h
#define header_refactoringFrias_h
#include <iostream>
#include <string>
#include <vector>
using namespace std;

/**********************************VEHICULO PURE ABSTRACT CLASS************************************/
class Vehiculo
{
    public:
        virtual ~Vehiculo(){};
        virtual void arrancar() = 0;
        virtual void parar() = 0;
        virtual void repostar() = 0;
};

/**********************************TALLER CLASS************************************/
class Taller
{
    private:
        int capacidadMaximaVehiculos;
        int cantidadActualVehiculos;
        //https://www.cplusplus.com/reference/vector/vector/vector/
        vector<Vehiculo*> vehiculos;

    public:
        Taller(int capacidad);
        virtual ~Taller();
        void meter(Vehiculo* v);
        void arreglarVehiculos();
        void getCantidadActualDeVehiculos();
};

class Coche : public Vehiculo
{
    private:
        string m_color;
        string m_marca;
        int m_motor;
    public:
        Coche(string color, string marca, int motor);
        virtual ~Coche();
        void arrancar();
        void parar();
        void repostar();
};

class Moto : public Vehiculo
{
    private:
        string m_color;
        string m_marca;
        int m_cilindrada;
    public:
        Moto(string color, string marca, int cilindrada);
        virtual ~Moto();
        void arrancar();
        void parar();
        void repostar();
};
#endif // header_refactoringFrias_h
