//Proyecto No.2 Semana 1 Bim IV
//Fecha 15/08/2023
#include <iostream>
#include <conio.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int fila,columna;
	cout<<"Ingrese la cantidad de filas :"<<endl;
	cin>>fila;
	cout<<"Ingrese la cantidad de columnas :"<<endl;
	cin>>columna;
	
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
	
	
	
	
	return 0;
	getch();
}
