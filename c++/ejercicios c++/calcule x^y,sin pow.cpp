/*Escriba un programa que calcule x^y,donde tanto x como y son enteros
positivos, sin utilizar la funcion pow*/


#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int x,y,elevacion=1;
	
	cout<<"Digite la base de la potencia: "; cin>>x;
	cout<<"Digite la numero elevado: "; cin>>y;
		
	for(int i=1;i<=y;i++){
		elevacion *= x;
	}
		
	
	
	cout<<"\nEl resultado es: "<<elevacion<<endl;
	
	getch();
	return 0;
}


