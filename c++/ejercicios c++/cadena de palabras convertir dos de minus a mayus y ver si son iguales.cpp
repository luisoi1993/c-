/*Convertir dos cadenas de minusculas a MAYUSCULAS.
compararlas,y decir si son iguales o no*/


#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra[] = "skinhead";
	char palabra2[] = "skinhead";
	
	strupr(palabra);
	strupr(palabra2);
	
	cout<<palabra<<endl;
	cout<<palabra2<<endl;
	
	if(strcmp(palabra,palabra2)==0){
		cout<<"\nLas cadenas son iguales";
	}
	else{
		cout<<"\nLas cadenas son diferentes";
	}
	
	
	
	getch();
	return 0;
}
