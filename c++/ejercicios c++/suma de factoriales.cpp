//Escribe un programa que calcule el valor de: 1!+2!+3...n(suma de factoriales)


#include <iostream>
#include<conio.h>

using namespace std;

int main (){
	int numero,suma = 0, factorial = 1;
	
	cout<<"Digite el total de elementos a sumar: " ;
	cin>>numero;
	
	for(int i=1;i<=numero;i++){
		factorial *= i;//	primero sacamos los factoriales
		suma += factorial;// luego los sumamos
	}
	
	cout<<"\La suma de factoriales  es: "<<factorial<<endl;
	getch();
	return 0;
}


