//Invertir una cadena - Funcion strrev()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char cad[] = "skinhead";
	
	strrev(cad);
	
	cout<<cad<<endl;
	
	getch();
	return 0;
}
