/*Escribe un programa que lea una variable entera y dos reales
y lo visualice*/

#include<iostream>

using namespace std;

int main(){
	int num;
	float num2,num3;
	
	cout<<"Digite un numero entero: "<<endl;
	cin>>num;
	cout<<"Digite dos numeros reales: "<<endl;
	cin>>num2>>num3;
	
	cout<<"Los numero entero que ha digitado es: "<<num<<endl;
	cout<<"El primer numero real que ha digitado es: "<<num2<<endl;	
	cout<<"El segundo numero real que ha digitado es: "<<num3<<endl;	
	
	return 0;
}
