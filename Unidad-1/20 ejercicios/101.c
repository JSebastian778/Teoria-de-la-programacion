#include <stdio.h>
#include <math.h>
void main() {
    // Declaración de variables reales para los números, el promedio y la potencia
    float num1, num2, promedio, potencia4;
    // Solicitar y leer los dos números reales al usuario
    printf("2 reales: "); 
    scanf("%f %f", &num1, &num2);
    // Calcular el promedio aritmético de los dos números
    promedio = (num1 + num2) / 2.0;
    // Evaluación condicional para verificar si el promedio es mayor a cero
    if (promedio > 0) {
        // Calcular la potencia 4 del promedio obtenido
        potencia4 = pow(promedio, 4);
        // Mostrar el promedio y la potencia 4 en pantalla
        printf("Promedio: %.2f, Potencia 4: %.2f\n", promedio, potencia4);
    }
}