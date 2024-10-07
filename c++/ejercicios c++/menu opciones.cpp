/*Simular un cajero con u saldo inicial de 1000 dolares*/


#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int opc,numero,cubo;
	
	cout<<"\tBienvenido a su menu virtual"<<endl;
	cout<<"1.Cubo de un numero"<<endl;
	cout<<"2.Numero par o impar"<<endl;
	cout<<"3. Salir"<<endl;
	cin>>opc;
	
	switch(opc){
		case 1:
			cout<<"Digite el numero del que quiere saber el cubo ";
			cin>>numero;
			cubo = (numero * numero) * numero;
			cout<<"Cubo del numero: "<<cubo;break;
		case 2:
			cout<<"Digite el numero: ";
			cin>>numero;
			
			if(numero%2==0){
				cout<<"El numero es par ";
				}
				else{
					cout<<"El numero es impar ";
				}
				break;
		case 3:break;
	}
	
	
	return 0;
}
