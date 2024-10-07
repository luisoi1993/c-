/*Pedir al usuario una cadena de caracteres,almacenarla
en un a arreglo y copiar todo su contenido hacia otro
arreglo de caracteres*/


#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char nombre[100];
	char nombre2[100];
	
	
	cout<<"Digite una cadena de caracteres:  ";
	gets(nombre);
	strcpy(nombre2,nombre);
	
	cout<<nombre2<<endl;
	
	
	getch();
	return 0;
}
