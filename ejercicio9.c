
//(ArrayPromedio)A partir de un array de 10 casillas,
//pedir al usuario un número comprendido entre 1 y 10 y llenar tantas casillas como este número. 
//El valor de las casillas serán valores aleatorios comprendidos entre 0 y 5. 
//Se pide hacer un programa que calcule el valor promedio de los números aleatorios generados. 
//(1 punto)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int arr[10];
    int i;
    int num;
    int sum = 0;
    int count = 0;
    float avg;

    printf("Introduce un entero del 1 al 10: ");
    scanf("%d", &num);

    srand(time(NULL));

    for (i = 0; i < num; i++) {
        arr[i] = rand() % 6;
        sum += arr[i];
        count++;
    }

    avg = (float) sum / count;

    printf("El valor promedio de los numeros generados aleatoriamente es %.2f.\n", avg);

    return 0;
}