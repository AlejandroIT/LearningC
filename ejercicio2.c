//(MayorMenor) Hacer un programa en C que, dados dos números enteros, indique
//si el primero es mayor, igual o menor que el segundo. (0,25 puntos)
//Ejemplo: num1=10 num2=20
//Resultado: El primer número es más pequeño que el segundo
#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b;
    printf("Por favor, introduce el primer entero: ");
    scanf("%d",&a);
    fflush(stdin);
    printf("Por favor, introduce el segundo entero: ");
    scanf("%d",&b);
    fflush(stdin);
    if(a<b){
        printf("El numero A es menor que B.\n");
    }
    else if(a>b){
        printf("El numero A es mayor que B.\n");
    }
    else if(a==b){
        printf("El numero A y B son iguales.\n");
    }

    return 0;
}