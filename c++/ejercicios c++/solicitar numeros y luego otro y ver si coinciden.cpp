/*Escribe un programa que solicite 3 numeros luego solicite otro
y compruebe si coincide con alguno de los 3*/

#include<iostream>

using namespace std;

int main(){
	int n1,n2,n3,n4;
	
		cout<<"Digite tres numeros: ";
		cin>>n1>>n2>>n3;
		cout<<"Digite otro umero: ";
		cin>>n4;
		
		if((n1==n4)||(n2==n4)||(n3==n4)){
		
			cout<<"El cuarto numero coincide con uno de los tres primeros";
 		}
 		else{
 			cout<<"el numero no coincide";
 		}
	return 0;
}
