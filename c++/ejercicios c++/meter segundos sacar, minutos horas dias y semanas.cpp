#include <iostream>

using namespace std;



int main(){
	float semanas,dias,minutos,segundos,horas;
	
	
	cout<<"Digite el numero de segundos: ";
	cin>>segundos;
	
	minutos = segundos / 60;
	horas = minutos / 60;
	dias = horas / 24;
	semanas = dias / 7; 
	
	cout<<"El numero de segundos es: ";cout<<segundos;
	cout<<"\nEl numero de minutos es: ";cout<<minutos;
	cout<<"\nEl numero de horas es: ";cout<<horas;
	cout<<"\nEl numero de dias es: ";cout<<dias;
	cout<<"\nEl numero de semanas es: ";cout<<semanas;
	
	
	return 0;
}
