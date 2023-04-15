//(ArrayBuscaValor) A partir de un array de 10 casillas, pedir al usuario un número comprendido 
//entre 0 y 10 y llenar tantas casillas como este número indique. El valor de las casillas serán 
//valores aleatorios comprendidos entre 1 y 100. 
//Posteriormente solicitar un número al usuario, comprendido entre 1 y 100 y buscar si este valor existe dentro del array.
//Debe mostrar un mensaje por pantalla indicando si el numero buscado está o no dentro del array. 
//No hay que indicar cuantas veces está. Solo, si aparece al menos una vez. (1 punto)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int arr[10];
    int i;
    int num;
    int busq;

    printf("Introduce un entero entre el 0 y el 10: ");
    scanf("%d", &num);

    srand(time(NULL));

    for (i = 0; i < num; i++) {
        arr[i] = rand() % 100 + 1;
    }

    printf("Introduce entero entre el 0 y el 100: ");
    scanf("%d", &busq);

    for (i = 0; i < num; i++) {
        if (arr[i] == busq) {
            printf("El numero que buscas esta en el array.\n");
            return 0;
        }
    }

    printf("El numero que buscas no esta en el array.\n");

    return 0;
}