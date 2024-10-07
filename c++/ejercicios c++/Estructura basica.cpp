//Estructura basica

#include<iostream>
#include<conio.h>

using namespace std;

struct Persona{
	char nombre[20];
	int edad;
}
persona1 = {"Luis",25},
persona2 = {"Alba",26};

int main(){
	cout<<"Nombre1: "<<persona1.nombre<<endl;
	cout<<"Edad1: "<<persona1.edad<<endl;
	
	cout<<"Nombre2: "<<persona2.nombre<<endl;
	cout<<"Edad2: "<<persona2.edad<<endl;
	
	
	getch();
	return 0;
}
