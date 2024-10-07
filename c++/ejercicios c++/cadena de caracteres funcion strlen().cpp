//Longitud de una cadenas de caracteres - Función strlen()

#include<iostream>
#include<conio.h>
#include<string.h>


using namespace std;

int main(){
	char palabra[] = "hola";
	int longitud=0;
	
	longitud = strlen(palabra);
	
	cout<<"Numero de elementos de la cadena es: "<<longitud;
	
	
	getch();
	return 0;
}
