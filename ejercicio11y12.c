//11.(Fruta) Hacer un programa en C que pida al usuario cuantas frutas quiere insertar.
//Posteriormente el usuario rellenará el array con tantas frutas como haya solicitado el usuario. (1 punto)
//12. (ExisteFruta) A partir del programa anterior (copia y pégalo), una vez introducidos todos los productos, 
//el programa preguntará al usuario por un artículo, éste debe indicar si dicho producto se encuentra en el array o no, 
//mostrando un mensaje por pantalla. (1.5 punto)
#include <stdio.h>
#include <string.h>

int main() {
    char arr[100][100];
    int i;
    int num;
    char busq[100];

    printf("Cuantas frutas quieres insertar? ");
    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        printf("Introduce fruta %d: ", i + 1);
        scanf("%s", arr[i]);
    }

    printf("Introduce fruta a buscar: ");
    scanf("%s", busq);

    for (i = 0; i < num; i++) {
        if (strcmp(arr[i], busq) == 0) {
            printf("La fruta que buscas esta en el array.\n");
            return 0;
        }
    }

    printf("La fruta que buscas no esta en el array.\n");

    return 0;
}