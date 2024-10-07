/*Hacer un arreglo de estructura llamada atleta para N atletas 
que contenga los siguientes campos:nombre,pais,numero_medallas. 
y devuelva los datos (Nombre,pais) del atleta que ha gaanado el
mayor número de medallas*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

struct atleta{
	char nombre[20];
	char pais[20];
	int numero_medallas;
	
}atleta[100];


int main(){
	int num_atletas,posM=0;
	int mayor=0;
	
	cout<<"Digite el numero de atletas";
	cin>>num_atletas;
	
	for(int i=0;i < num_atletas;i++){
		fflush(stdin);
		cout<<i+1<<". Digite su nombre: ";
		cin.getline(atleta[i].nombre,20,'\n');
		cout<<i+1<<".Digite su pais: ";
		cin.getline(atleta[i].pais,20,'\n');
		cout<<i+1<<". Digite el numero de medallas: ";
		cin>>atleta[i].numero_medallas;
		
		if(atleta[i].numero_medallas > mayor){
			mayor = atleta[i].numero_medallas;
			posM = i;
		}
		cout<<"\n";
	}
	
	cout<<"\n.:Datos del atleta con mas medallas:.\n";
	cout<<"Nombre: "<<atleta[posM].nombre<<endl;
	cout<<"Pais: "<<atleta[posM].pais<<endl;
	
	getch();
	return 0;
	
	
}
