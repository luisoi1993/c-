/*Escribe un programa que lea de la entrada est�ndar si el car�cter
e indique la salida est�ndar si el car�cter es una vocal min�scula o no.*/


#include<iostream>

using namespace std;

int main(){
	char letra;
	
	cout<<"Digite un caracter ";
	cin>>letra;
	
	switch(letra){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"Es una vocal minuscala ";break;
		default: cout<<"No es una vocal minuscala ";break;
	}
	return 0;
}
