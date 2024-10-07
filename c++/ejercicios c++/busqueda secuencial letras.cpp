//Busqueda seccuencial letras

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int a[] = {'a','e','i','o','u'},dato;
	int i;
	char band = 'F';
	
	dato = 'i';
	//Busqueda Secuencial
	i=0;
	while((band == 'F') && (i<5)){
		if(a[i] == dato){
			band = 'V';
		}
		i++;
	}
	
	if(band == 'F'){
		cout<<"La letra a buscar no existe en el arreglo"<<endl;
	}
	else if(band == 'V'){
		cout<<"La letra a sido encontrada en la pos: "<<i-1<<endl;;
	}	
	
	
	getch();
	return 0;
}
