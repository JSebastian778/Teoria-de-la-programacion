#include <stdio.h>
#define FACTOR 0.750062
void main() {
    // Declaración de variables reales para la presión en hPa y mmHg
    float hPa, mmHg;
    // Solicitar y leer la presión en hPa al usuario
    printf("Ingrese la presion en hPa: "); 
    scanf("%f", &hPa);
    // Calcular la equivalencia en mmHg
    mmHg = hPa * FACTOR;
    // Evaluación condicional para verificar si la presión convertida es mayor a cero
    if (mmHg > 0) {
        // Mostrar el resultado de la conversión en pantalla
        printf("%.2f hPa equivalen a %.2f mmHg\n", hPa, mmHg);
    }
}