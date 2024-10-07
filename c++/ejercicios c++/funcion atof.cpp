//Transformar una cadena a numeros - funcion atoi() y atof()

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main(){
	char cad[] = "123.857";
	float numero;
	
	numero = atof(cad);
	
	cout<<numero<<endl;
	
	
	getch();
	return 0;
}
