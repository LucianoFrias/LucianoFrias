#ifndef header_h
#define header_h

#include <iostream>
#include <string>
using namespace std;

/**********************************VEHICULO PURE ABSTRACT CLASS************************************/
class Vehiculo
{
    public:
        Vehiculo(){};
        virtual ~Vehiculo(){};
        virtual void arrancar() = 0;
        virtual void parar() = 0;
        virtual void repostar() = 0;
};

/**********************************TALLER CLASS************************************/
class Taller
{
    private:
        int max_vehiculos;
        int num_vehiculos;
        //list lista_de_vehiculos;

    public:
        Taller();
        Taller(int _max_vehiculos, int _num_vehiculos);
        virtual ~Taller();
        void meter(Vehiculo* v);
        void arreglarVehiculos();
};

/**********************************COCHE CLASS************************************/
class Coche : public Vehiculo
{
    private:
        string color;
        string marca;
        int motor;
    public:
        Coche(string _color, string _marca, int _motor);
        virtual ~Coche();
        void arrancar();
        void parar();
        void repostar();
};

class Moto : public Vehiculo
{
    private:
        string color;
        string marca;
        int cilindrada;
    public:
        Moto(string _color, string _marca, int _cilindrada);
        virtual ~Moto();
        void arrancar();
        void parar();
        void repostar();
};
#endif // header_h
