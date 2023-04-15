//(sumaParesImpares)Hacer un programa en C que pida 10 números enteros al
//Usuario. El programa debe mostrar por pantalla la suma de todos los números
//pares y la suma de todos los números impares introducidos por el Usuario.
//(0,5 puntos)
//Ejemplo:
//Números introducidos por el usuario: 1 5 7 8 2 4 5 8 4 6
//Resultado: Total pares: 32; Total impares: 18
#include <stdio.h>
#include <stdlib.h>


int main(void){
    
    int numeros [10];
    int tmp = 0;
    int par = 0;
    int impar = 0;
    
    for (tmp = 0; tmp < 10; tmp++){
        
        printf ("Introduce numero [%d]: ", tmp);
        scanf("%d", &numeros[tmp]);
        if (numeros[tmp]%2 == 0){
            par = par + numeros[tmp];
        }else {
            impar = impar + numeros[tmp];
        }
    }
    printf( "Numeros introducidos por el usuario: ");
    for (tmp = 0; tmp < 10; tmp++){
        printf("%d ",numeros[tmp] );
    }
    printf("\nResultado: Total pares: %d; Total impares: %d\n",par,impar);
    
    return 0;
}