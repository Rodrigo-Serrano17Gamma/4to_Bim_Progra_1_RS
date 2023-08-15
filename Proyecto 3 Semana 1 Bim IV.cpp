//Proyecto 3 Semana 1 Bim IV
//Realiza un programa que permita ingresar una matriz de 3x3 y escriba un ciclo para que se muestre la diagonal principal
//Fecha: 15/08/2023
#include <iostream>
#include <conio.h>

using namespace std;


int main() {
	int fila=3;
	int columna=3;
	
		//Declaración de Matriz
	int mat[fila][columna];
	for(int i=0;i<fila;i++){
		for(int j=0;j<columna;j++){
			//Mensaje de ingreso de datos
			cout<<"Ingrese el dato de l posición "<<i+1<<","<<j+1<<": "<<endl;
			cin>>mat[i][j];
		}
	}
	
	cout<<"\nImprimiendo Matriz\n";
	for(int k=0;k<fila;k++){
		for(int l=0;l<columna;l++){
			cout<<mat[k][l]<<" ";
		}
		cout<<"\n";
	}
	
	
	//Impresión de diagonal
	for(int m=0;m<3;m++){
		cout<<mat[m][m]" ";
	}
	return 0;
	getch ();
}
