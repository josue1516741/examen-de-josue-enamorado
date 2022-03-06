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
		cout<< "a continuacion se le muestra un menu de opciones para trabajar"<<endl;
		   cout<< "opcion 1 factorial de un numero"<<endl;
		   cout<< "opcion 2 tablas de multiplicar"<<endl;
		   cout<< "opcion 3 calculo de numero pares e impares"<<endl;
		   cout<< "opcion 4 que dia es laboral"<<endl;
		   cout<< "opcion 5 salir"<<endl;
		   cout<<"*********************************"<<endl;  
		   cout<<"*********************************"<<endl;
		   cout<< "Ingrese la opcion que desea utilizar"<<endl;
            cin>>op;
            system("cls");
            if(op==1){
 int n,i;
   long double factorial; // se declara long double para poder representar números grandes
   cout << "Introduce un numero: ";
   cin >> n;
   factorial=1;
   for(i=1;i<=n;i++)
        factorial = factorial * i;
   cout << endl << "Factorial de " << n << " -> " << factorial << endl;
   system("pause");
}
if(op==2){
		   char seguir;
    int i, numero;

    do
    {
        printf( "\n   Introduzca un n%cmero entero: ", 163 );
        scanf( "%d", &numero );

        printf( "\n   La tabla de multiplicar del %d es:\n", numero );

        /* Inicio del anidamiento */

        for ( i = 1 ; i <= 10 ; i++ )
            printf( "\n   %d * %d = %d", i, numero, i * numero );

        /* Fin del anidamiento */

        printf( "\n\n   %cDesea ver otra tabla (s/n)?: ", 168 );
        fflush( stdin );
        scanf( "%c", &seguir );

    } while ( seguir != 'n' );

		  	
		  	
		  }
		  if(op==3){
            	 int numero, pares, impares;

    printf( "\n   Introduzca un n%cmero entero (0=Fin): ", 163 );
    scanf( "%d", &numero );

    pares = 0;
    impares = 0;

    while ( numero != 0 )
    {
        if ( numero % 2 == 0 )
            pares += numero;
        else
            impares += numero;

        printf( "\n   Introduzca un n%cmero entero (0=Fin): ", 163 );
        scanf( "%d", &numero );
    } 

    printf( "\n   La suma de los pares es: %d", pares );
    printf( "\n\n   La suma de los impares es: %d", impares );

    getch(); /* Pausa */
		  }
		  