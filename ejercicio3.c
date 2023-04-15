//(SerieNumerica)Escribir los números desde el 1 hasta el número introducido por
//el Usuario. (0,25 puntos)
//Ejemplo:
//Número: 8
//Respuesta: 1, 2, 3, 4, 5, 6, 7, 8
#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, i;
    printf("Introduce limite: ");
    scanf("%d",&a);
    fflush(stdin);

    for(i=1;i<=a;i++)
    {
        printf("\n%d",i);
    }
    return 0;
}