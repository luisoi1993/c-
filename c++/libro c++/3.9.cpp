/*Escribir un programa que solicite dos n�meros decimales y
calcule su suma, visualizando la suma ajustada a la derecha.
Por ejemplo, si los n�meros son 57.45 y 425.55, el programa
visualizar�*/

#include<iostream>

using namespace std;

int main(){
	float num,num2,resultado=0;
	
	cout<<"Digite un numero: ";
	cin>>num;
	cout<<"Digite otro numero: ";
	cin>>num2;
	
	resultado=num+num2;
	
	cout.precision(2);
	
	cout<<"El resultado es: "<<resultado;
	
	
	
	return 0;
}

