/*.Escribe un programa que lea de la entrada estándar dos números y muestre en
la salida estandar su suma, resta, multiplicación y dicisión */

#include <iostream>

using namespace std;
int main(){
	long double n1, iva= 0;
	
	cout<<"digite el precio: "; cin>>n1; 
 
		
		iva = n1 * 25 / 100 + n1;
		
	
		cout<<"\nel precio es: "<<iva<<endl;
	
	
	return 0 ;
}
