/*5. Escriba un programa que lea la nota final de cuatro alumnos y calcule la nota final 
media de los cuatro alumnos.*/


#include<iostream>

using namespace std;

int main(){
	int a,b,c,d,resultado = 0;
	
	cout<<"Digite la nota final del primer alumno: "; cin>>a;
	cout<<"Digite la nota final del segundo alumno: "; cin>>b;
	cout<<"Digite la nota final del tercer alumno: "; cin>>c;
	cout<<"Digite la nota final del cuarto alumno: "; cin>>d;
	resultado = (a+b+c+d)/4;
	

	
	cout<<"º\nLa nota media es "<<resultado<<endl;
	
	
	
	return  0;
}
