//Proyecto 1 Semana 4 "Búsqueda secuencial"
//04/09/2023

//Librerías
#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main() {
    // Declarar un arreglo de nombres
    string nombres[10];
    string nombreBuscado;
    char band = 'F';

    // Solicitar nombres al usuario
    for (int i = 0; i < 10; i++) {
        cout << "Ingrese un nombre: ";
        cin >> nombres[i];
    }

    // Solicitar que ingrese el nombre a buscar
    cout << "\nIngrese el nombre a buscar: ";
    cin >> nombreBuscado;

    // Algoritmo de búsqueda secuencial
    int j = 0;
    while ((band == 'F') && (j < 5)) {
        if (nombres[j] == nombreBuscado) {
            band = 'V';
        }
        j++;
    }

    if (band == 'F') {
        cout << "\nEl nombre a buscar no se encuentra en la lista." << endl;
    } else if (band == 'V') {
        cout << "El nombre " << nombreBuscado << " fue encontrado en la posición " << j << "." << endl;
    }
    getch();
    return 0;
}

