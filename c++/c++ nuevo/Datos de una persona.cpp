/*Realice un programa que lea de la entrada de ent�ndar los s�guientes datos de 
una persona:

	Edad: dato de tipo entero.
	Sexo: dato de tipo car�cter.
	Altura en metros: datos de tipo real.
	
Tras leer los datos, el programa debe mostrarse en la salida est�ndar.*/

#include<iostream>

using namespace std;

int main(){
	int edad;
	char sexo[10];
	float altura;
	
	cout<<"Digite su edad: "; cin>>edad;
	cout<<"Digite su sexo: "; cin>>sexo;
	cout<<"Digite su altura en metros: "; cin>>altura;
	
	cout<<"\nEdad: "<<edad<<endl;
	cout<<"\nSexo: "<<sexo<<endl;
	cout<<"\nAltura: "<<altura<<endl;
	
	
	
	return 0;
}
