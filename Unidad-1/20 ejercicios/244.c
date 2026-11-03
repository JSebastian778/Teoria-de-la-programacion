#include <stdio.h>
#define PI 3.14159
#define DIVISOR 180.0
void main() {
    // Declaración de variables reales para grados, radianes e inverso
    float grados, radianes, inverso;
    // Solicitar y leer el ángulo en grados al usuario
    printf("Ingrese el angulo en grados: "); 
    scanf("%f", &grados);
    // Evaluación condicional para verificar que los grados no sean negativos
    if (grados >= 0) {
        // Convertir grados a radianes
        radianes = (grados * PI) / DIVISOR;
        // Mostrar el resultado en radianes
        printf("Radianes: %.5f rad\n", radianes);
        // Calcular el inverso multiplicativo si no es cero
        if (radianes != 0) {
            inverso = 1.0 / radianes;
            printf("Inverso multiplicativo: %.4f\n", inverso);
        }
    }
}