//(SerieMaximoMinimo)Definir un array de 100 elementos. Calcula el número
//más grande y pequeño de los números introducidos por teclados. Acabamos de
//introducir números cuando el usuario nos introduzca el 0 o hayamos alcanzado
//el límete de posiciones del array. EL 0 no debe tenerse en cuenta, es una marca
//final. (0.5 puntos)
#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[100];
    int i = 0;
    int num;
    int max = arr[0];
    int min = arr[0];

    printf("Introduce un numero (0 para terminar): ");
    scanf("%d", &num);

    while (num != 0 && i < 100) {
        arr[i] = num;
        i++;

        printf("Introduce un numero (0 para terminar): ");
        scanf("%d", &num);
    }

    for (int j = 0; j < i; j++) {
        if (arr[j] > max) {
            max = arr[j];
        }

        if (arr[j] < min) {
            min = arr[j];
        }
    }

    printf("El numero mas grande es %d\n", max);
    printf("El numero mas pequeño es %d\n", min);

    return 0;
}