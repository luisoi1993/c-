/*Programa que devuelva la parte fraccionaria de cualquier
numero introducido por el usuario. Por ejemplo, si se introduce
el número 256.879. deberíadesplegarse el número 0.879.*/

#include<iostream>
#include<conio.h>

using namespace std;

void pedirDatos();
float fraccion(float n);

float numero;

int main(){
	pedirDatos();
	
	cout<<"La parte fraccionaria del numero es: "<<fraccion(numero)<<endl;
	
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite un numero: ";
	cin>>numero;
}

float fraccion(float n){
	//por ejemplo si el numero es 45.567 en estero solo se guardaria 45
	int entero = n;
	//y por ultimo restamos el valor flotante menos el entero para tener la parte fraccionada
	float resultado = n - entero;
	
	return resultado;
}
