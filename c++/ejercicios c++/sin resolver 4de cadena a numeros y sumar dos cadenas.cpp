/*Pedir al usuario 2 cadenas de caracteres de numeros 
, uno entero y el otro real, convertirlos a sus 
respectivos valores y por ultimo sumarlos */

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main(){
	char cad[] = "123";
	char cad2[] = "1234.764";
	int numero;
	float numero2;
	float numero3;
	
	
	numero = atoi(cad);
	cin>>numero;
	numero2 = atof(cad2);
	cin>>numero2;
	
	numero3 = numero + numero2;
	cout<<numero3<<endl;
	
	
	
	getch();
	return 0;
}
