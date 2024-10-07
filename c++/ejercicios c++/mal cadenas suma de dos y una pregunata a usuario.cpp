/*Crear una cadena que tenga la siguiente frase "Hola que tal", luego
crear otra cadena para preguntarle al usuario su nombre, por ultimo
añadir el nombre al final de la primera cadena y mostrar el mensaje 
completo "Hola que tal"(NombreDelUsuario)".*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char cad1[] = "Hola que tal  ";
	char cad2[] = "Digite su nombre entre parentesis";
	char cad3[30];
	char cad4[30];
	
	cout<<cad1<<endl;
	
	strcpy(cad3,cad1); //cad3 = "Esto es una cadena"
	cout<<cad2<<endl;
	gets(cad4);
	strcat(cad3,cad4); //cad3 = "Esto es una cadena de ejemplo"
	cout<<cad3<<endl;
	
	getch();
	return 0;
}
