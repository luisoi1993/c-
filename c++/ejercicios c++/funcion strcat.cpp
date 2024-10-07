//añadir o concatenar una cadena con otra -funcion strcat()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char cadena1[] = "Esto es una cadena";
	char cadena2[] = " de ejemplo";
	char cadena3[30];
	
	strcpy(cadena3,cadena1);//cad3 ="Esto es una cadena"
	
	strcat(cadena3,cadena2); //cad3 ="Esto es una cadena de ejemplo"
	
	cout<<cadena3<<endl;
	
	
  	getch();
  	return 0;
}
