/*Escribe un programa que defina un vector de n�meros y calcule si existe alg�n n�mero en el vector cuyo valor equivLe a
la suma del resto de n�meros el vector*/


#include<iostream>
#include<conio.h>

using namespace std; 

int main(){
	int numeros[5] = {1,2,3,4,10};//definimos el arreglo
	int suma=0,mayor=0;
	
	
	for(int i=0;i<5;i++){
			suma += numeros[i];
			
		if(numeros[i]>mayor){//determinamos cual es el n�mero mayoor , ya que
			mayor = numeros[i];//el unico numero que puede ser la suma de los demas es el n�mero mayor
		}
	}
	
	if(mayor ==suma-mayor){//comparamos si el n�mero mayor es igual a suma menos el numero mayor
			cout<<"El numero "<<mayor<<" es la suma de los demas";
	}
	else{
		cout<<"no existe ningun numero que sea la suma de los demas";
	}
	
	
	
	
	getch();
	return 0;
}
