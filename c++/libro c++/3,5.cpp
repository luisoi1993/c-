/*Escribir las sentencias de asignacion que permitan intercambiar los
contenidos(valores) de dos variables*/

#include<iostream>

using namespace std;

int main(){
	float a,b,aux;

	cout<<"Digite un numero: ";
	cin>>a;
	cout<<"Digite otro numero: ";
	cin>>b;
	
	aux=a;
	a=b;
	b=aux;
	
	cout<<"EL nuevo valor del primer numero es: "<<a<<endl;
	cout<<"EL nuevo valor del segundo es: "<<b;
	
	
	
	return 0;
}
