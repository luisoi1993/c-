//Paso de Parametros por Referencia

#include<iostream>
#include<conio.h>

using namespace std;

void valNuevo(int&,int&);

int main(){
	int num1,num2;
	
	cout<<"Digite 2 numeros: ";
	cin>>num1>>num2;
	
	valNuevo(num1,num2);
	
	
	getch();
	return 0;
}

void valNuevo(int& xnum, int& ynum){
	cout<<"El valor del primer numero es: "<<xnum<<endl;
	cout<<"El valor del segundo numero es: "<<ynum<<endl;
}
