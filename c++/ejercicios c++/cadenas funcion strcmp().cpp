//comparar cadenas - Función strccmp()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra[] = "Hola";
	char palabra2[] = "Hola";
	
	if(strcmp(palabra,palabra2)==0){
		cout<<"Ambas cadenas son iguales";
	}
	
	getch();
	return 0;
}
