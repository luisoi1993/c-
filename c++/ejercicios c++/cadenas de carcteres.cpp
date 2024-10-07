//Cadenas de caracecteres

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra[] = "Alejandro";
	char palabra2[] = {'A','l','e','j','a','n','d','r','o'};
	char nombre[30];
	char nombre2[20];
	
	cout<<"Digite un nombre: ";
	cin.getline(nombre2,20,'\n');
	
	
	cout<<"Digite su nombre: ";
	gets(nombre);
	
	
	cout<<nombre2<<endl;
	cout<<nombre<<endl;
	cout<<palabra<<endl;
	cout<<palabra2<<endl;
	
	
	
	getch();
	return 0;
}
