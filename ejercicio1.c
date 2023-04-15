//(Operaciones) Hacer un programa en C que pida dos números enteros al usuario
//y muestre por pantalla su suma, resta, multiplicación y división entera, se debe
//tener en cuenta que no se puede dividir por 0. En caso de que suceda, debe
//mostrar dicho mensaje por pantalla. (0,5 puntos)
//(Operaciones) Hacer un programa en C que pida dos números enteros al usuario
//y muestre por pantalla su suma, resta, multiplicación y división entera, se debe
//tener en cuenta que no se puede dividir por 0. En caso de que suceda, debe
//mostrar dicho mensaje por pantalla. (0,5 puntos)
#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b;

    printf("Por favor, introduce el primer integer: ");
    scanf("%d", &a);
    
    printf("Por favor, introduce el segundo integer: ");
    scanf("%d", &b);
        if(b == 0){
            printf("Error, el divisor introducido es 0\n");
        }
    
    printf("La suma es: %d\n", a + b);
    printf("La resta es: %d\n", a - b);
    printf("la multiplicacion es: %d\n", a * b);
    printf("La division es: %d\n", a / b);

    return 0;
}