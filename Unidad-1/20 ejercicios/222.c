#include <stdio.h>
#define MAYORIA_EDAD 18
void main() {
    // Declaración de variables enteras para la edad y el indicador de mayoría de edad
    int edad, es_mayor;
    // Solicitar y leer la edad al usuario
    printf("Ingrese su edad: "); 
    scanf("%d", &edad);
    // Evaluación condicional para verificar si es mayor de edad
    if (edad >= MAYORIA_EDAD) {
        es_mayor = 1;
        printf("La persona es mayor de edad.\n");
    } else {
        es_mayor = 0;
        printf("La persona es menor de edad.\n");
    }
}