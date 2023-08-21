//Proyecto 2 Semana 2, Fecha: 21/08/2023
//Proyecto con Matrices

//Bibliotecas
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    //Para almacenar las filas y columnas
    int columna = 5;
    int fila = 5;

    //Declaración de matriz
    int mat[columna][fila];
    // Solicitar datos
    for (int i = 0; i < columna; i++) {
        for (int j = 0; j < fila; j++) {
            cout << "Ingrese un número para almacenar en la posición " << i + 1 << " " << j + 1 << " :";
            cin >> mat[i][j];
        }
    }

    // Imprimir matriz y realizar cálculos
    cout << "\nImprimiendo Matriz...\n";
    int filaConMayorSuma = 0;
    int mayorSuma = 0;
    int contadorCeros = 0;
    int contadorPositivos = 0;
    int contadorNegativos = 0;

    for (int i = 0; i < columna; i++) {
        int sumaFila = 0; // Para calcular la suma de la fila actual
        for (int j = 0; j < fila; j++) {
            cout << mat[i][j] << " ";
            sumaFila += mat[i][j];
            if (mat[i][j] == 0) {
                contadorCeros++;
            } else if (mat[i][j] > 0) {
                contadorPositivos++;
            } else {
                contadorNegativos++;
            }
        }
        cout << "Suma de la fila " << i + 1 << ": " << sumaFila << endl;

        if (sumaFila > mayorSuma) {
            mayorSuma = sumaFila;
            filaConMayorSuma = i + 1;
        }
    }
    
    cout << "\nLa fila con la mayor suma es la fila " << filaConMayorSuma << " con una suma de " << mayorSuma << endl;
    cout << "Cantidad de ceros ingresados: " << contadorCeros << endl;
    cout << "Cantidad de números positivos ingresados: " << contadorPositivos << endl;
    cout << "Cantidad de números negativos ingresados: " << contadorNegativos << endl;

    getch();
    return 0;
}

