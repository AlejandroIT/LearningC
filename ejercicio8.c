//(Arrays)Definir un array de 6 casillas vacías y hacer los siguientes ejercicios:
//(2puntos)
//a. Rellenar el array con los valores 4,3,5,6,2 i 10
//b. Mostrar por pantalla el array
//v[0]=4
//v[1]=3
//v[2]=5
//etc
//c. Indicar cuantos números son pares
//d. Indica la suma de todos los valores
//e. Indica la suma de los valores pares.
//f. Intercambiar el valor de la primera casilla con el de la última casilla y muestra el array nuevamente.
//v[0]=10 v[1]=2 v[2]=6 v[3]=5 v[4]=3 v[5]=4
#include <stdio.h>

int main() {
    int arr[6];
    int i;
    int pares = 0;
    int suma_total = 0;
    int suma_pares = 0;
    int temp;

    // a. Rellenar el array con los valores 4,3,5,6,2 i 10
    arr[0] = 4;
    arr[1] = 3;
    arr[2] = 5;
    arr[3] = 6;
    arr[4] = 2;
    arr[5] = 10;

    // b. Mostrar por pantalla el array
    for (i = 0; i < 6; i++) {
        printf("v[%d]=%d\n", i, arr[i]);
    }

    // c. Indicar cuantos números son pares
    for (i = 0; i < 6; i++) {
        if (arr[i] % 2 == 0) {
            pares++;
        }
    }
    printf("Hay %d numeros pares.\n", pares);

    // d. Indica la suma de todos los valores
    for (i = 0; i < 6; i++) {
        suma_total += arr[i];
    }
    printf("La suma total es %d.\n", suma_total);

    // e. Indica la suma de los valores pares.
    for (i = 0; i < 6; i++) {
        if (arr[i] % 2 == 0) {
            suma_pares += arr[i];
        }
    }
    printf("La suma de los valores pares es %d.\n", suma_pares);

    // f. Intercambiar el valor de la primera casilla con el de la última casilla y muestra el array nuevamente.
    temp = arr[0];
    arr[0] = arr[5];
    arr[5] = temp;

    printf("v[%d]=%d v[%d]=%d v[%d]=%d v[%d]=%d v[%d]=%d v[%d]=%d\n",
           0, arr[0], 1, arr[1], 2, arr[2], 3, arr[3], 4, arr[4], 5, arr[5]);

    return 0;
}