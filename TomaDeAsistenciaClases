#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Clase

class Alumno{
private:
    bool presente = 0;
public:
    string nombre, apellido;
    int fecha;
    Alumno();
    void setNombre();
    void getNombre();
    void setApellido();
    void getApellido();
    void setPresente();
    void getPresente();
};

// Funciones

Alumno :: Alumno(){}

void Alumno :: setNombre(){
cout << "Ingrese el nombre del alumno: " << endl;
cin >> nombre;
}

void Alumno :: getNombre(){
cout << "Nombre del alumno: " << endl;
cout << nombre << endl;
}

void Alumno :: setApellido(){
cout << "Ingrese el apellido del alumno: " << endl;
cin >> apellido;
}

void Alumno :: getApellido(){
cout << "Apellido del alumno: " << endl;
cout << apellido << endl;
}

void Alumno :: setPresente(){
cout << "Ingrese un 1 para confirmar la presencia del alumno: " << endl;
cin >> presente;
}

void Alumno :: getPresente(){
cout << "Estado del alumno: " << endl;
if(presente == 1){
    cout << "Presente" << endl;
}
else{
    cout << "Ausente" << endl;
}
}


// Variables

int opcion;
int MaxAlumnos = 0;
Alumno *pAlumno[50];
string auxApellido;
ifstream Lectura;
ofstream Escritura;

int main(){

do{
    cout << endl;
    cout << "1. Añadir alumno." << endl;
    cout << "2. Ver datos de un alumno." << endl;
    cout << "3. Verificar asistencia de un alumno." << endl;
    cout << "4. Salir del programa." << endl;
    cin >> opcion;

    switch(opcion){

case 1: // Añadir alumno
    if (MaxAlumnos < 50){
        Escritura.open("Alumnos.txt", ios::app);
        pAlumno[MaxAlumnos] = new Alumno();
        pAlumno[MaxAlumnos]->setNombre();
        pAlumno[MaxAlumnos]->setApellido();
        if (Escritura.is_open()){
        Escritura << pAlumno[MaxAlumnos]->nombre << " " << pAlumno[MaxAlumnos]->apellido << endl;
        }
        MaxAlumnos++;
        Escritura.close();
    }
    break;
case 2: // Ver datos de un alumno
    Lectura.open("Alumnos.txt", ios::in);
    while (!Lectura.eof()){
        for (int i = 0; i < MaxAlumnos; i++){
        Lectura >> pAlumno[i]->nombre >> pAlumno[i]->apellido;
        }
    }
    cout << "Ingrese el apellido del alumno que quiera buscar" << endl;
    cin >> auxApellido;
    for (int i = 0; i < MaxAlumnos; i++){
        if (pAlumno[i]->apellido == auxApellido){
            pAlumno[i]->getNombre();
            pAlumno[i]->getApellido();
            pAlumno[i]->getPresente();
        }
    }
    Lectura.close();
    break;
case 3: // Verificar asistencia de un alumno
    Lectura.open("Alumnos.txt", ios::in);
    while(!Lectura.eof()){
        for (int i = 0; i < MaxAlumnos; i++){
            Lectura >> pAlumno[i]->nombre >> pAlumno[i]->apellido;
        }
    }
    Escritura.open("Presentes.txt", ios::app);
    cout << "Ingrese el apellido del alumno para confirmar su presencia" << endl;
    cin >> auxApellido;
    for (int i = 0; i < MaxAlumnos; i++){
        if (pAlumno[i]->apellido == auxApellido){
            pAlumno[i]->setPresente();
            cout << "Ingrese la fecha de hoy en dias" << endl;
            cin >> pAlumno[i]->fecha;
            Escritura << pAlumno[i]->nombre << " " << pAlumno[i]->apellido << " " << pAlumno[i]->fecha << " PRESENTE " << endl;
        }
    }
    Escritura.close();
    Lectura.close();
    break;
    }

}while (opcion != 4);
return 0;
}
