#include <stdio.h>
void main() {
    // Declaración de variables enteras para dividendo, divisor, cociente y residuo
    int z, s, cociente, residuo;
    // Declaración de variable real para la diferencia
    float diferencia;
    // Solicitar y leer los dos números enteros al usuario
    printf("z y s: "); 
    scanf("%d %d", &z, &s);
    // Evaluación condicional para verificar que el divisor no sea cero
    if (s != 0) {
        // Calcular el cociente entero de la división
        cociente = z / s;
        // Calcular el residuo de la división entera
        residuo = z % s;
        // Calcular la diferencia entre el cociente y el promedio de z y s
        diferencia = (float)cociente - ((z + s) / 2.0);
        // Mostrar el cociente, el residuo y la diferencia en pantalla
        printf("Cociente: %d, Residuo: %d, Diferencia: %.2f\n", cociente, residuo, diferencia);
    }
}