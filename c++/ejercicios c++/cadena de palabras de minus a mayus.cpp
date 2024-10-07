//Pasar una palabra a Mayuscula - función strupt() 


#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra[] = "skinhead";
	
	strupr(palabra);
	
	cout<<palabra<<endl;
	
	getch();
	return 0;
}
