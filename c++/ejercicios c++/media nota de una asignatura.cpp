/*7.La calificaci�n final de un estudiante es la media ponderada de tres notas:
la nota de pr�cticas que cuenta con un 30% del total,la nota te�rica que cuenta un
60% y la nota de participaci�n que cuenta 1l 10% restante. Escriba un programa
que lea de la entrada est�ndar las tres notas de un alumno y escriba en la 
salida est�ndar su  nota final.*/

#include<iostream>

using namespace std;


int main(){
	
	float practica, teorica,participacion,nota_final = 0; 
	
	cout<<"Digite la nota de practica: "; cin>>practica;
	cout<<"Digite la nota teorica: "; cin>>teorica;
	cout<<"Digite la nota de participacion "; cin>>participacion;
	
	
	practica = practica * 0.30;
	teorica  = teorica * 0.60;
	participacion = participacion * 0.10; 	
	
	nota_final = practica + teorica + participacion;
	
	cout<<"\nLa nota final es : "<<nota_final;
	
	
	return 0;
}
