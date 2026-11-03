#include <stdio.h>
#include <math.h>
void main() {
    // Declaración de variables enteras para los números y la suma
    int n1=0, n2=0, n3=0, n4=0, n5=0, suma=0;
    // Declaración de variables reales para el promedio y la diferencia absoluta
    float promedio=0, diferencia_abs=0;
    // Solicitar y leer los 5 números enteros al usuario
    printf("5 enteros: ");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    // Calcular la suma total de los cinco números
    suma = n1+n2+n3+n4+n5;
    // Calcular el promedio aritmético dividiendo la suma entre 5.0
    promedio = suma / 5.0;
    // Evaluación condicional para verificar si la suma es mayor a cero
    if (suma > 0) {
        // Calcular la diferencia absoluta entre la suma y el promedio usando fabs
        diferencia_abs = fabs(suma - promedio);
        // Mostrar el resultado de la suma, el promedio y la diferencia absoluta en pantalla
        printf("Suma: %d, Promedio: %.2f, Diferencia: %.2f\n", suma, promedio, diferencia_abs);
    }
}