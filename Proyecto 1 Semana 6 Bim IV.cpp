//Programa de estructuras 18/09/2023 Semana 6 Bim IV

//Declaración de bibliotecas
#include <iostream>
#include <conio.h>

using namespace std;

//Declarar la estructura
//Las estructuras siempre van fuera del "Int Main"
struct persona{
	char nombre[20];
	int edad;
	double altura;
	char tez[20];
	char nacionalidad[20];
	char genero[20];
}/*persona1={"Wicho", 12,1.20,"Blanco Albino","Tactic","pansexual"}*/persona[2];

int main() {
	/*Imprimir valores
	cout<<"Datos personales";
	cout<<"\nNombre: "<<persona1.nombre;
	cout<<"\nEdad: "<<persona1.edad;
	cout<<"\nAltura: "<<persona1.altura;
	cout<<"\nTez: "<<persona1.tez;
	cout<<"\nNacionalidad: "<<persona1.nacionalidad;
	cout<<"\nGenero: "<<persona1.genero;*/
	
	//Solicitar datos
	for(int i=0;i<2;i++){
		cout<<"Ingrese su nombre: ";
		cin.getline(persona[i].nombre,20,'\n');
		cout<<"Ingrese su altura: ";
		cin>>persona[i].edad;
	}
	getch();
	return 0;
	
}
