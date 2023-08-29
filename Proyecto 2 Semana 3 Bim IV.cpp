//Programa de ejemplo de cadenas		Fecha:29/08/2023
#include <iostream>
#include <conio.h>
//Siempre que se usen string usar esta biblioteca
#include <string.h>
using namespace std;

int main() {
	//Cadenas de tipo Char
	char palabra[20];
	int longitud;
	
	cout<<"Ingrese una cadena: ";
	gets(palabra);
	longitud = strlen(palabra);
	if(longitud>=10){
		cout<<"\n"<<palabra;
	}
	else if(longitud<10){
		cout<<"Faltan aún Caracteres"<<endl;
	}
	
	return 0;
	getch;
}
