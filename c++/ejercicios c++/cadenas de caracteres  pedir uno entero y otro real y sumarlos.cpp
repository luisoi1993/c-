/*Pedir al usuario 2 cadeas de caracteres de numeros
,uno entero y el otro real,convertirlos a sus respectivos
valores y por ultimo sumarlos*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main(){
	char cadena[100];
	char cadena2[100];
	int numero;
	float numero2;
	float numero3;
	
	cout<<"\nDigite un numero entero: ";
	gets(cadena);
	cout<<"\nDigite un numero real: ";
	gets(cadena2);
	
	numero = atoi(cadena);
	numero2 = atof(cadena2);
	
	numero3 = numero + numero2;
	
	cout<<numero3<<endl;
	
	
	getch();
	return 0;
}
