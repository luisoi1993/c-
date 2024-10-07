/*Hacer un programa que pida al usuario que digite una cadena de
caracteres,luego verificar la longitud de la cadena, y si ésta
supera a 10  caracteres mostrarla en pantalla,en caso contrario
no mostrarlas*/

#include<iostream>
#include<conio.h>
#include<string.h>


using namespace std;

int main(){
	char palabra[100];
	int longitud=0;
	
	longitud = strlen(palabra);
	
	cout<<"Digite una cadena de caracteres: ";
	gets(palabra);
	
	longitud = strlen(palabra);
	
	if(longitud<10){
	
		cout<<palabra;
	}
	else{
		cout<<"La cadena de caracteres tiene mas de 10 caracteres: ";
	}
	
	
	getch();
	return 0;
}
