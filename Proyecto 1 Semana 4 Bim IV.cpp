//Proyecto 1 Semana 4 "Búsqueda secuencial"
//04/09/2023

//Librerías
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	//Declarar un vector
	int a[5];
	int dato;
	char band= 'F';
	
	//Solicitar datos
	for(int i=0;i<5;i++){
		cout<<"Ingrese un número: ";
		cin>>a[i];
	}
	
	//Solicitar que ingrese el número a buscar
	cout<<"\nIngrese el numero a bucar: ";
	cin>>dato;
	
	//Algoritmo de búsqueda secuencial
	int j;
	while((band == 'F')&&(j<5)){
		if(a[j]==dato){
			band = 'V';
		}
		j++;
	}
	
	if(band == 'F'){
		cout<<"\nEl numero a buscar no existe en el vector";
	}
	else if(band == 'V'){
		cout<<"El numero "<<dato<<" fue encontrado en la pos "<<j<<" .";
	}
	getch();
	return 0;
}
