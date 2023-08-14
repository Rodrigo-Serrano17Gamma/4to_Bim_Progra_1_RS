//Fecha:14/08/2023
//Ejercicio: Hacer un programa que lea 5 números en un arreglo, los copie a otro 
//arreglo ulriplicados por 2 y muestre el segundo arreglo
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    float original[5];
    float multiplicado[5];

    // Leer 5 números y guardarlos en el arreglo_original
    for (int i = 0; i < 5; i++) {
        cout << "Ingrese el número " << i + 1 << ": ";
        cin >> original[i];
        multiplicado[i] = original[i] * 2; // Multiplicar por 2 y guardar en arreglo_multiplicado
    }

    // Mostrar el arreglo multiplicado por 2
    cout << "Arreglo multiplicado por 2: ";
    for (int i = 0; i < 5; i++) {
        cout << multiplicado[i] << " ";
    }

    getch(); // Esperar a que el usuario presione una tecla
    return 0;
}

