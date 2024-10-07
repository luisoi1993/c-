/*Escriba un programa para calcular la longitud de la circunferencia
 y el área del círculo para un radio introducido por el teclado*/
 
#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float radio,circunferencia=0,circulo=0;
	
	cout<<"Digite el radio: ";
	cin>>radio;
	
	circunferencia=radio*3.14;
	circulo=(radio*radio)*3.14;
	
	cout<<"La longitud de la circunferencia es: "<<circunferencia<<endl;
	cout<<"El area del circulo es: "<<circulo<<endl;
	
	
	return 0;
}
