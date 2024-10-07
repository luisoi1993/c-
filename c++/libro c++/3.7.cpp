/*Escribir un programa que solicite al usuario la longitud
 y anchura de una habitacion y a, continuacion, visualice
 su superficie con cuatro decimales
 */
 #include<iostream>
 
 using namespace std;
 
 int main(){
 	float longitud,anchura,resultado=0;
 	
 	cout<<"Digite la longitud: ";
 	cin>>longitud;
 	cout<<"Digite la anchura: ";
 	cin>>anchura;
 	
 	resultado=longitud*anchura;
 	cout.precision(6);
 	
 	cout<<"El resultado es: "<<resultado;
 	
 	
 	
 	return 0;
 }
