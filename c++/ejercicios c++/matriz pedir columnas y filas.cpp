/*Hacer un prigrama para rellenar una matriz pidiendo al usuario el n�mero de filas
y columnas, Posteriormente mostrar la matriz en pantalla*/


#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int numeros[100][100], filas, columnas;
	
	cout<<"Digite el numero de filas: ";
	cin>>filas;
	cout<<"Digite el numero de columnas: ";
	cin>>columnas;
	
	//Almacenando elementos en la matriz
	for(int i=0;i<filas,i++){
		for(int j=0;j<columas;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"] "; //[0][1]
			cin>>numeros[i][j];
		}
	}
	//Mostrando la matriz
	for(int i=0;i<filas,i++){
		for(int j=0;j<columnas,i++){
			cout<<numeros[i][j];
			
		}
		cout<<"\n";
	}
	getch();
	return 0;
}