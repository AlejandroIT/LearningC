//(SerieSuma)Hacer un algoritmo que pida al Usuario un número natural. El
//algoritmo debe mostrar la suma de todos los números entre el 1 y el número
//introducido por el Usuario. (0,5 puntos)
#include <stdio.h>
#include <stdlib.h>

int main(){

    int numA;
    int tmp;
    int suma = 0;
    
    printf ("Introduce entero: ");
    scanf("%d", &numA);
    printf ("suma:%d \n", suma);
    //un for es un bucle. sintaxis: valor del contador; comparacion de la condicion; modificacion del valor.
    for (tmp = 1; tmp <= numA; tmp++){
        suma = tmp + suma;
        printf ("tmp: %d  suma: %d + %d \n",tmp,tmp,suma);
    }
    
    return 0;
}
