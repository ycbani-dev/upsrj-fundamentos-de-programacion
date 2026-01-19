#include <stdio.h>

int main() {
    // Define las variables para almacenar los datos
    float lado, area, volumen;

    // 1. Pedir al usuario la longitud del lado
    printf("Enter the side length: ");
    scanf("%f", &lado);

    // 2. Calcular el área del cuadrado (lado * lado)
    area = lado * lado;

    // 3. Calcular el volumen del cubo (lado * lado * lado)
    volumen = lado * lado * lado;

    // 4. Imprimir los resultados en pantalla
    printf("The area of the square is: %.2f\n", area);
    printf("The volume of the cube is: %.2f\n", volumen);

    return 0;
}