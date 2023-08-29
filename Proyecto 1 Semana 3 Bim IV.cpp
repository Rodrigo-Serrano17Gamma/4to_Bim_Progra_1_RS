//Programa de ejemplo de cadenas		Fecha:29/08/2023
#include <iostream>
#include <conio.h>
//Siempre que se usen string usar esta biblioteca
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	//Cadenas de tipo Char
	char palabra[5];//Los caracteres cuentan también los espacios
	char palabra2[]= "Hola";
	int longitud;
	
	cout<<"Ingrese una cadena: ";
	//cin>>palabra;
	gets(palabra);
	//cin.getline(palabra;5;'n');
	//Opxiones de solicitud
	cout<<"\n"<<palabra;
	
	longitud = strlen(palabra);
	cout<<"\nLa cantidad de caracteres que posee la palabra: "<<longitud;
	
	return 0;
	getch();
}
