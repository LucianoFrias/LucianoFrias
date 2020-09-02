#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;


// Arrays con structs y definiciones de variables

struct DataArchivo
{
    string nombre; // Nombre del archivo
    long tamanio; // Tamaño del archivo (En bytes)
};

int NumeroDeArchivos = 0; // Cantidad de archivos que ya poseemos
int i; // Contador para los bucles while y for
int opcion; // Para elejir una opcion en el menu
string TextoArchivo; // Pedimos datos al usuario
int NumeroTamanio; // Para pedir los archivos a partir de cierto tamaño
ofstream documento; // Nombre del documento en el que se almacenaran los datos

// Empieza la ejecucion del programa aqui
int main()
{
    DataArchivo archivos[1000]; // Asignamos un limite a la cantidad de archivos almacenados

    do
    {
        // Menu Principal
        cout << endl;
        cout << "Escoja una opción:" << endl;
        cout << "1.- Añadir datos de un nuevo archivo" << endl;
        cout << "2.- Mostrar los nombres de todos los archivos" << endl;
        cout << "3.- Mostrar archivos que sean de mas de un cierto tamaño" << endl;
        cout << "4.- Ver datos de un archivo" << endl;
        cout << "5.- Salir" << endl;
        cin >> opcion;

        // Switch de opciones
        switch(opcion)
        {
            case 1: // Añadimos datos al archivo
                if (NumeroDeArchivos < 1000) // Si queda hueco, se ejecutara esto
                {
                    cout << "Introduzca el nombre del archivo: " << endl;
                    cin >> archivos[NumeroDeArchivos].nombre;
                    cout << "Introduzca el tamaño del archivo: " << endl;
                    cin >> archivos[NumeroDeArchivos].tamanio;
                    NumeroDeArchivos++;
                    // Almaceno los nombres y tamaños en un archivo txt
                    documento.open("NombresyTamaños.txt");
                    documento << archivos[i].nombre << " " << archivos[i].tamanio << endl;
                    documento.close();
                }
                else // Si no queda hueco, nos avisara el programa
                    cout << "Numero de archivos limite alcanzado." << endl;
                break;

            case 2: // Mostramos el nombre de todos los archivos almacenados
                for (i = 0; i < NumeroDeArchivos; i++)
                    cout << "Nombre del archivo: " << archivos[i].nombre
                    << " / Tamaño del archivo en KBs: " << archivos[i].tamanio << "KBs" << endl;
                break;

            case 3: // Mostramos los archivos que excedan el tamaño que ingresemos
                cout << "Ingrese el tamaño de los archivos que quiera ver a partir de ese numero: " << endl;
                cin >> NumeroTamanio;
                for (i = 0; i < NumeroDeArchivos; i++)
                    if (archivos[i].tamanio >= NumeroTamanio)
                {
                    cout << "Nombre del archivo: " << archivos[i].nombre
                    << " / Tamaño del archivo en KBs: " << archivos[i].tamanio << "KBs" << endl;
                }
                break;
            case 4: // Vemos los datos de los archivos
                cout << "Ingrese el archivo en el que desea ver los datos: " << endl;
                cin >> TextoArchivo;
                for (i = 0; i < NumeroDeArchivos; i++)
                    if (archivos[i].nombre == TextoArchivo)
                    cout << "Nombre del archivo: " << archivos[i].nombre
                    << " / Tamaño del archivo: " << archivos[i].tamanio << "KBs" << endl;
                    break;
            case 5: // Salimos del programa
                cout << "Ha salido del programa" << endl;
                break;

            default: // Si no coincide ninguna opcion, nos dara esto
                cout << "Opcion invalida. Por favor elija una opcion correcta." << endl;
                break;
        }
    }
        while (opcion != 5);
            return 0;
}

