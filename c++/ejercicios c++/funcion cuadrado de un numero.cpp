/*Escriba una funci�n llamada al_cuadrado()
que calcule el cudarado del
valor que se le trasmite y despliegue el
resultado. La funci�n deber� ser capaz de
elevar al cuadrado n�meros flotantes */

#include<iostream>
#include<conio.h>

using namespace std;

void pedirDatos();
void al_cuadrado(float n);
 
float numero;

int main(){
	pedirDatos();
	al_cuadrado(numero);
	
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite 1 numero: ";
	cin>>numero;
}

void al_cuadrado(float n){
	float cuadrado=0;
	
	cuadrado = numero * numero;
	
	cout<<"El cuadrado del numero es : "<<cuadrado<<endl;
}
