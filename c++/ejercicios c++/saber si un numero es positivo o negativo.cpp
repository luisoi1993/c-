/* Realice un programa que lea un valor  y detremine si se trata
de un n�mero positivo o negativo*/

#include<iostream>

using namespace std;

int main(){
	int numero;
	
	cout<<"Digite un numero: ";
	cin>>numero;
	
	if(numero==0){
		cout<<"El numero es 0 ";
	}
	else if(numero>0){
		cout<<"El numero es positivo ";
		
	}
	else{
		cout<<"El numero es negativo ";
	}
	
	return 0;
}
