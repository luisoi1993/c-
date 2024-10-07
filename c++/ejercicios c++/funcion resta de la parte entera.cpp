/*EScriba un programa en c++ que devuelva la parte fraccionaria
de cualquier número introducido por el usuario. Por ejemplo
, si se introduce el número 256.879, debería desplegarse el número
0.879*/

#include<iostream>
#include<conio.h>

using namespace std;

void pedirdatos();
float restar(float n);

float numero;
	
int main(){

	pedirdatos();
	
	cout<<"La parte fraccionaria del numero es: "<<restar(numero)<<endl;
	
	
	getch();
	return 0;
}

void pedirdatos(){
	cout<<"Digite un numero fraccionario: ";
	cin>>numero;
	
}

float restar(float n){
	//por ejemplo si el numero es 41.2 se guarda 41
	int entero = n;
	
	float resultado = n - entero;
	
	return resultado;
	
}
