/*Escribe un programa que lea de la entrada est�ndar los dos
catetos de un tri�ngulo rect�ngulo y escriba en la salida
est�ndar su hipotenusa*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float cateto1,cateto2,hipotenusa;
	
	cout<<"Digite el valor del primer cateto: "; cin>>cateto1;
	cout<<"Digite el valor del segundo cateto: "; cin>>cateto2;
	
	hipotenusa = sqrt(pow(cateto1,2)+pow(cateto2,2));
	
	cout<<"\nEl resultado de la hipotenusa es : "<<hipotenusa;
	
	
	return 0;
}
