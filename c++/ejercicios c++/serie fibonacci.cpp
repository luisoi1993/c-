//Hacer un programa que realize la serie fibonacci

#include<iostream>
#include<conio.h>

using namespace std;


int main(){
	int n,x=0,y=1,z=1;
	
	cout<<"Digite el numero de elementos: "; cin>>n;
	
	cout<<"1 ";
	for(int i;i<n;i++){
		z = x + y;
		cout<<z<<" ";
		x = y;
		y = z;
	}
	
	cout<<"\n";
	getch();
	return 0;
}
