/*Escribe un programa que calcule e� valor de: 1+3+5...+2n-1*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int n, suma = 0;
	
	cout<<"Digite el numero de elementos: ";
	cin>>n;
	
	for(int i=1;i<=2*n-1;i+=2){
		suma = suma + i;
	}
	
	cout<<"\La suma es: "<<suma<<endl;
	
	getch();
	return 0;
}
