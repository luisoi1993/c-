/*3, Realiza un programa que lea de la entrada estándar los siguientes dados de
una persona:

	Edad: dato de tipo entero.
	Sexo: dato de tipo carácter.
	Altura en metros: dato de tipo real.
	
Tras leer los datos, el programa debe mostrarlos en la salida estandar.*/ 

#include<iostream>

using namespace std; 

int main(){
	int edad;
	char sexo[10];
	float altura; 
	
	cout<<"Digite su edad: ";cin>>edad;
	cout<<"Digite su sexo: ";cin>>sexo;
	cout<<"Digite su altura: ";cin>>altura;
	
	cout<<"\nEdad: "<<edad<<endl;
	cout<<"Sexo : "<<sexo<<endl;
	cout<<"Altura en metros: "<<altura<<endl;
	
	return 0;
}
