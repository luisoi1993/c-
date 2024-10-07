/*Escribir un programa que convierta un número dado en
sengundos en el equivalente de minutos y segundos
*/

#include<iostream>

using namespace std;

int main(){
	int num,min,seg;
	
	cout<<"Digite el numero de segundos: ";
	cin>>num;
	
	min=(int)num/60;
	seg=num-(min*60);
	
	cout<<min<<"m "<<seg<<"s ";
	
	
	
	return 0;
}
