/* Hacer una estructuta llamada corredor, en la cual se tendr�n los siguientes
campos: Nombre, edad, sexo, club, pedir datos al usuario para un corredor, y asi
una categor�a de competici�n:
- Juvenil <= 18 a�os
- Senior <= 40 a�os
- Veterano> 40 a�os
Posteriormente imprimir los datos del corredor, incluida su categor�a de 
competici�n*/ 

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

struct corredor{
	char nombre[20];
	int edad;
	char sexo[10];
	char club[20];
}c1;

int main(){
	char categoria[20];
	cout<<"Nombre: ";
	cin.getline(c1.nombre,20,'\n');
	cout<<"Edad: ";
	cin>>c1.edad;
	fflush(stdin);
	cout<<"Sexo: ";
	cin.getline(c1.sexo,10,'\n');
	cout<<"club: ";
	cin.getline(c1.club,20,'\n');
	
	if(c1.edad <= 18){
		strcpy(categoria,"Juvenil");
	}
	else if(c1.edad <= 40){
		strcpy(categoria,"Senior");
	}
	else{
		strcpy(categoria,"Veterano");
	}
	
	cout<<"\n\nDatos sel corerdor: "<<endl;
	cout<<"nombre: "<<c1.nombre<<endl;
	cout<<"Edad: "<<c1.edad<<endl;
	cout<<"Sexo: "<<c1.sexo<<endl;
	cout<<"Club: "<<c1.club<<endl;
	cout<<"Categoria: "<<categoria<<endl;
	
	
	getch();
	return 0;
} 
