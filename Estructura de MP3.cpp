#include <iostream>
#include <string>
using namespace std;

struct
{
    string artista;
    string titulo;
    float duracion;
    float tamanio;
} Cancion;

int main()
{
    cout << "Ingrese el artista deseado: ";
    cin >> Cancion.artista;
    cout << "Ingrese el titulo de la cancion: ";
    cin >> Cancion.titulo;
    cout << "Ingrese la duracion de la cancion (con punto): ";
    cin >> Cancion.duracion;
    cout << "Ingrese el tamaño del fichero en KBs: ";
    cin >> Cancion.tamanio;

    cout << "El nombre del artista es: " << Cancion.artista << endl;
    cout << "El titulo de la cancion es: " << Cancion.titulo << endl;
    cout << "La duracion de la cancion es: " << Cancion.duracion << endl;
    cout << "El tamaño del fichero es: " << Cancion.tamanio << endl;

    return 0;
}
