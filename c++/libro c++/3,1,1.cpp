/*Escribir un programa que lea dos enteros de tres digitos y calcule
e imprima su producto, cociente y el resto cuando el primero de divide
por el segundo.La salida sera justificada a la derecha*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int ent1,ent2,multiplicacion=0,division=0,resto=0;
	
	cout<<"Digite dos enteros de tres cifras : ";
	cin>>ent1;cin>>ent2;
	
	multiplicacion=ent1*ent2;
	division=ent1/ent2;
	resto=ent1%ent2;
	
	cout<<"El resultado de la multiplicacion es: "<<multiplicacion<<endl;
	cout<<"El resultado de la division es: "<<division<<endl;
	cout<<"El resto de la divison es: "<<resto<<endl;
	
	
	
	return 0;
}
