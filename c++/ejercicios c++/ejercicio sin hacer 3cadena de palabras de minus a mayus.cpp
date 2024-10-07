/*Convertir dos cadenas de minusculas a MAYUSCULAS.Comparlas, 
y decir si son iguales o no*/


#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra[] = "skinhead";
	
	strupr(palabra);
	
	cout<<palabra<<endl;
	
	getch();
	return 0;
}
