#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num_aleatorio;
    int num_intentos;
    int num_usuario;
    int i;

    srand(time(NULL));
    num_aleatorio = rand() % 9000 + 1000;

    printf("Introduce el numero de intentos: ");
    scanf("%d", &num_intentos);

    for (i = 0; i < num_intentos; i++) {
        printf("Introduce un numero de 4 cifras: ");
        scanf("%d", &num_usuario);

        if (num_usuario == num_aleatorio) {
            printf("Felicidades! Has acertado en %d intentos.\n", i + 1);
            break;
        } else if (num_usuario < num_aleatorio) {
            printf("El numero a adivinar es mayor.\n");
        } else {
            printf("El numero a adivinar es menor.\n");
        }
    }

    if (i == num_intentos) {
        printf("Lo siento, has perdido. El numero a adivinar era %d.\n", num_aleatorio);
    }

    return 0;
}