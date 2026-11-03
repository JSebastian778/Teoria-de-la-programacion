#include <stdio.h>
void main() {
    // Declaración de variable entera para el número y el indicador de primo
    int a, es_primo;
    // Declaración de variable real para el porcentaje
    float porcentaje;
    // Solicitar y leer el número entero al usuario
    printf("Numero entero: "); 
    scanf("%d", &a);
    // Evaluación condicional para verificar si el número es mayor a 1
    if (a > 1) {
        // Verificación de divisibilidad mediante estructuras condicionales
        if (a == 2 || a == 3 || a == 5 || a == 7) {
            es_primo = 1;
        } else if (a % 2 == 0 || a % 3 == 0 || a % 5 == 0 || a % 7 == 0) {
            es_primo = 0;
        } else {
            es_primo = 1;
        }
        // Mostrar si el número es primo o no en pantalla
        if (es_primo == 1) {
            printf("El numero %d Es primo.\n", a);
        } else {
            printf("El numero %d No es primo.\n", a);
        }
        // Calcular y mostrar el porcentaje respecto a la referencia
        porcentaje = (float)a;
        printf("Porcentaje respecto a ref 100: %.2f%%\n", porcentaje);
    }
}