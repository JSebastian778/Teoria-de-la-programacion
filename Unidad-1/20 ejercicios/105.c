#include <stdio.h>
#define DIVISOR_CONST 1.0
void main() {
    // Declaración de variables reales para las calificaciones, menor nota y promedio
    float c1, c2, c3, menor, promedio;
    // Solicitar y leer la primera calificación
    printf("Ingrese la primera calificacion: "); 
    scanf("%f", &c1);
    // Solicitar y leer la segunda calificación
    printf("Ingrese la segunda calificacion: "); 
    scanf("%f", &c2);
    // Solicitar y leer la tercera calificación
    printf("Ingrese la tercera calificacion: "); 
    scanf("%f", &c3);
    // Determinar la calificación menor mediante evaluación condicional
    menor = c1;
    if (c2 < menor) {
        menor = c2;
    }
    if (c3 < menor) {
        menor = c3;
    }
    // Calcular el promedio de las dos mejores calificaciones
    promedio = ((c1 + c2 + c3) - menor) / 2.0;
    // Mostrar el promedio final en pantalla
    printf("Promedio de las dos mejores notas: %.2f\n", promedio);
}