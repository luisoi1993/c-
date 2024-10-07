//Escribe u programa que calcule el valor  de: 1-2+3-4....n


#include<iostream>
#include<conio.h>


using namespace std;

int main(){
	int n,suma = 0,par = 0, impar = 0, negativo = 0;
	
	cout<<"Digite el numero de elementos: ";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		if(i%2==0){//los numeros pares son negativos
			negativo = i * -1;// Los cambios de signo
			par = par + negativo;
	}
	else{//los impares positivos
		impar = impar + i;
	}
}
	suma = par + impar;
	
	cout<<"\nLa suma  es: "<<suma<<endl;
	
	getch();
	return 0;
}

