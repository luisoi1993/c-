/*Realice un programa que calcule el producto de dos matrices cuadradas de 3x3 


*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int matriz[3][3]{{1,2,3},{2,1,3},{1,3,2}};
	int matriz2[3][3]{{2,1,1},{2,1,1},{3,1,1}};
	
	//mostrando las 2 matrices
	cout<<"Matriz \n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matriz[i][j]<<" ";
			
		}
		cout<<"\n";
	}
	
	cout<<"Matriz 2\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matriz2[i][j]<<" ";
			
		}
		cout<<"\n";
	
	}
	
	
	//multiplacando matrices
	cout<<"\nMultiplicacion de matrices\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matriz[i][j]*matriz2[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	
	
	getch();
	return 0;
}
