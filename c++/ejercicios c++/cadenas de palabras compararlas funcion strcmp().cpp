//comparar cadenas - función strcmp()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra1[] = "Hola1";
	char palabra2[] = "Hola";
	
	if(strcmp(palabra1,palabra2)==0){
		cout<<"Ambas cadenas son iguales: ";
	}
	else{
		cout<<"Las cadenas son diferentes: ";
	}
	
	getch();
	return 0;
}
