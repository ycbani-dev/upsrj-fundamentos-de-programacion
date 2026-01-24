#include <stdio.h>

// 1. Declaración de la función
int is_even(int num);

int main() {
    int num; // Declaración de la variable local

    printf("Ingrese un numero: ");
    // Usamos %i para leer el entero
    scanf("%i", &num);

    if (is_even(num)) {
        printf("El numero es par\n");
    } 
    else {
        printf("El numero es impar\n");
    }

    return 0;
}

int is_even(int num) {
    if (num % 2 == 0) {
        return 1;
    } 
    else {
        return 0;
    }
}