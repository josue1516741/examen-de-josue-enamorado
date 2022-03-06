#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include <iostream>
#include<conio.h>
char pass[10];
using namespace std;
int correcto;
int intento;
int op;
const char contrasena[]="12345"; /*12345  contraseña que se debe introducir*/


int main(void){
system("color b0");
    intento=1;
    correcto=0;
    printf("Introduzca la contrasena: \n"); gets(pass); printf("\n");
    if (strcmp(pass,contrasena)==0) correcto=1;
    while ((correcto==0)&&(intento<3))
    {
        intento++;
        printf("Contrasena incorrecta. %i intento: ", intento); gets(pass); printf("\n");
        if (strcmp(pass,contrasena)==0) correcto=1;
    }
   
       	
    if (correcto==0)printf("Se han excedido el numero de intentos.");
  
    else

     system("cls");
      
        
        	cout<<"*********************************"<<endl;
		cout<<"*********************************"<<endl;
            printf("Bienvenido a la base de datos de josue enamorado. \n");
          cout<<"*********************************"<<endl;  
		cout<<"*********************************"<<endl;