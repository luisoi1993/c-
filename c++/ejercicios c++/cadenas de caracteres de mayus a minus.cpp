//Pasar una palabra a minusculas - Funci�n strlwr()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std; 

int main(){
	char palabra[] = "PROGRAMACION";
	
	strlwr(palabra);
	
	cout<<palabra<<endl;
	
	
	getch();
	return 0;
}
