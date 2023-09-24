#include <iostream>
#include <conio.h>

using namespace std;

struct datos{
	char nombre[20];
	int edad;
	double altura;
	char genero[30];
	char tez[30];
}persona[2];

int main() {
	
	//Solicitar los datos
	cout<<"\nSolicitando los siguientes datos: \n";
		for(int i=0;i<2;i++){
		cout<<"Ingrese su nombre: ";
		cin.getline(persona[i].nombre,20,'\n');
		cout<<"Ingrese su edad: ";
		cin>>persona[i].edad;
		cout<<"Ingrese su altura: ";
		cin>>persona[i].altura;
		cin.ignore();
		cout<<"Ingrese su género: ";
		cin.getline(persona[i].genero,30,'\n');
		cout<<"Ingrese su tez: ";
		cin.getline(persona[i].tez,30,'\n');
	}
	
	//Imprimiendo los valores
	cout<<"\nDatos personales: \n";
	for(int j=0;j<2;j++){
		cout<<"\nNombre: "<<persona[j].nombre;
		cout<<"\nEdad: "<<persona[j].edad;
		cout<<"\nAltura: "<<persona[j].altura;
		cout<<"\nGenero: "<<persona[j].genero;
		cout<<"\nTez: "<<persona[j].tez;
		cout<<"\n";
	}
	
	getch();
	return 0;
}
