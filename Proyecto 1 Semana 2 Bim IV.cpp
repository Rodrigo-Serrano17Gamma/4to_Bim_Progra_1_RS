//Fecha: 21/08/2023
//Ejercicio de ejemplo de este día 

//Librerías
#include <iostream>
#include <conio.h>
using namespace std;



int main() {
	//Para almacenar las filas y columnsa
	int columna;
	int fila;
	cout<<"Ingrese la cantidad de columnas a usar: "<<endl;
	cin>>columna;
	cout<<"Ingrese la cantidad de filas a usar: "<<endl;
	cin>>fila;
	
	//Declaración de mátriz
	int mat[columna][fila];
	//Solicitar datos
	for(int i=0;i<columna;i++){
		for(int j=0;j<fila;j++){
			cout<<"Ingrese un número para almacenar en la posición "<<i+1<<" "<<j+1<<" :";
			cin>>mat[i][j];
		}
	}
	
	//Suma de columnas
	int maxsuma=0;
	int columnamaxima=0;
	for (int k=0; k<columna; k++){
		int sumacolumna=0;
		for(int l=0;l<fila;l++){
			sumacolumna=sumacolumna+mat[l][k];
			
		}
		if(sumacolumna>maxsuma){
			maxsuma=sumacolumna;
			columnamaxima = k;
		}
	}
	//Imprimir
	cout<<"\nImprimiendo Matriz...\n";
	for(int i=0;i<columna;i++){
		for(int j=0;j<fila;j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<"\n"; //Salto de linea para las filas
	}
	
	cout<<"La columna "<<columnamaxima+1<<" tiene una suma de: "<<maxsuma;
	return 0;
	getch();
}
