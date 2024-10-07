/*Escribe un programa que lea de la entrada estándar el precio
de un producto y muestre en la salida estándar el precio del
producto al aplicarle el iva*/

#include<iostream>

using namespace std;

int main(){
	float numero, numero2,numero3;
	
	cout<<"Digite un numero : ";cin>>numero;
	
	
	numero2=numero / 100 * 21;
	numero3=numero + numero2;
	
	cout<<"El precio con iva es :"<<numero3;
	
	
	
	
	return 0;
}
