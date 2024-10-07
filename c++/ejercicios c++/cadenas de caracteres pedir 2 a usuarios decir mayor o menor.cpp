/*Pedir al usuario que digite 2 cadenas de caracteres, e indicar si ambas cadenas
son iguales,en caso de no serlo,indicar cual es el mayor alfabeticamente*/

#include<iostream>
#include<conio.h>
#include<string.h>


using namespace std;

int main(){
	char palabra1[100];
	char palabra2[100];
	
	cout<<"Digite una cadena de caracteres: ";
	gets(palabra1);
	cout<<"Digite una segunda cadena de caracteres: ";
	
	gets(palabra2);
	
	
	if(strcmp(palabra1,palabra2)==0){
		cout<<"Ambas cadenas son iguales: ";
	}
	else if(strcpm(palabra1,palabra2)palabra1>palabra2){
		cout<<"Las cadena mayor es la primera ";
	}
	else{
		cout<<"La cadena mayor es la segunda " ;
	}
	
	getch();
	return 0;
}
