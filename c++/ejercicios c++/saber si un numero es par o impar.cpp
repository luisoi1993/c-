/* Realice un programa que lea un valor entero y detremine si se trata
de un n�mero par o impar*/

#include<iostream>

using namespace std;

int main(){
	int numero;
	
	cout<<"Digite un numero: ";
	cin>>numero;
	
	if(numero==0){
		cout<<"El numero es 0 ";
	}
	else if(numero%2==0){
		cout<<"El numero es par ";
		
	}
	else{
		cout<<"El numero es impar ";
	}
	
	return 0;
}
