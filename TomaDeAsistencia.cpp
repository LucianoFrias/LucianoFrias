#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// Variables

struct DatosAlumno
{
int fecha;
string nombre;
string apellido;
bool estado = 0;
};
DatosAlumno datos[100];
ifstream Lectura;
ofstream Escritura;
int opcion;
int NumeroDeAlumnos = 0;
string auxApellido;

int main()
{
    do
    {
        cout << endl;
        cout << "Toma de asistencia diaria" << endl;
        cout << endl;
        cout << "1. Añadir estudiante." << endl;
        cout << "2. Ver datos de estudiantes." << endl;
        cout << "3. Verificar asistencia." << endl;
        cout << "4. Salir del sistema." << endl;
        cin >> opcion;

        // Switch
        switch(opcion)
        {
        case 1: // Añadir estudiante
            if (NumeroDeAlumnos < 100)
            {
                cout << "Ingrese el nombre del estudiante" << endl;
                cin >> datos[NumeroDeAlumnos].nombre;
                cout << "Ingrese el apellido del estudiante" << endl;
                cin >> datos[NumeroDeAlumnos].apellido;
                Escritura.open("Alumnos.txt", ios::app);
                if(Escritura.is_open())
                {
                    Escritura << datos[NumeroDeAlumnos].nombre << " " << datos[NumeroDeAlumnos].apellido << endl;
                }
                Escritura.close();
                NumeroDeAlumnos++;
            }
            break;


        case 2: // Ver datos de estudiantes
            Lectura.open("Alumnos.txt", ios::in);
            while (!Lectura.eof())
            {
            Lectura >> datos[NumeroDeAlumnos].nombre >> datos[NumeroDeAlumnos].apellido;
            NumeroDeAlumnos++;
            }
            for (int i = 0; i < NumeroDeAlumnos; i++)
            {
                    cout << "Nombre: " << datos[i].nombre <<
                    " / Apellido: " << datos[i].apellido <<
                    " / Estado: " << datos[i].estado << endl;
            }
            Lectura.close();
            break;


        case 3: // Verificar asistencia
            Lectura.open("Alumnos.txt", ios::in);
            while (!Lectura.eof())
            {
                Lectura >> datos[NumeroDeAlumnos].nombre >> datos[NumeroDeAlumnos].apellido;
                NumeroDeAlumnos++;
            }
            Escritura.open("Asistencia.txt", ios::app);
            cout << "Ingrese su apellido: " << endl;
            cin >> auxApellido;
            for (int i = 0; i < NumeroDeAlumnos; i++)
            {
            if (datos[i].apellido == auxApellido)
            {
            cout << "Ingrese la fecha de hoy(Dia): " << endl;
            cin >> datos[i].fecha;
            cout << "Ingrese un 1 para verificar que se encuentra presente" << endl;
            cin >> datos[i].estado;
            if (Escritura.is_open())
            {
                cout << endl;
                Escritura << datos[i].nombre << " " << datos[i].apellido << " " << datos[i].fecha << " " << datos[i].estado << endl;
            }
            }
            }
            Escritura.close();
            Lectura.close();
            break;
        case 4: // Salimos del programa
            cout << "Ha salido del programa." << endl;
            cout << endl;
            break;


        default: // Si no elije una opcion valida
            cout << "Opcion invalida. Intente de nuevo" << endl;
            break;
        }

    }
    while (opcion != 4);
    return 0;
}
