#include <stdio.h>
void main() {
    // Declaración de variables enteras para el número base, producto y triple
    int a, producto, triple;
    // Solicitar y leer el número entero al usuario
    printf("Numero entero: "); 
    scanf("%d", &a);
    // Cálculo y presentación de los productos de la tabla de multiplicar del 1 al 10
    producto = a * 1;
    printf("%d x 1 = %d\n", a, producto);
    producto = a * 2;
    printf("%d x 2 = %d\n", a, producto);
    producto = a * 3;
    printf("%d x 3 = %d\n", a, producto);
    producto = a * 4;
    printf("%d x 4 = %d\n", a, producto);
    producto = a * 5;
    printf("%d x 5 = %d\n", a, producto);
    producto = a * 6;
    printf("%d x 6 = %d\n", a, producto);
    producto = a * 7;
    printf("%d x 7 = %d\n", a, producto);
    producto = a * 8;
    printf("%d x 8 = %d\n", a, producto);
    producto = a * 9;
    printf("%d x 9 = %d\n", a, producto);
    producto = a * 10;
    printf("%d x 10 = %d\n", a, producto);
    // Evaluación condicional para verificar si el producto es positivo y calcular su triple
    if (producto > 0) {
        triple = producto * 3;
        printf("Triple del ultimo: %d\n", triple);
    }
}