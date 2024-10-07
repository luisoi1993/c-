/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/* 
* File:   main.cpp
* Author: luis
*
* Created on 27 de abril de 2019, 13:20
 */

#include <cstdlib>
#include<iostream>



using namespace std;

/*
 */
int main(int argc, char** argv) {
    int num,num2,temp;
    
    cout<<"Digite un numero: ";
    cin>>num;
    cout<<"Digitte el segundo numero: ";
    cin>>num2;
    
    temp = num;
    num = num2;
    num2 = temp;
    
    cout<<"\nEl primero es: "<<num;
    cout<<"\nEl segundo es: "<<num2;
    

    return 0;
}

