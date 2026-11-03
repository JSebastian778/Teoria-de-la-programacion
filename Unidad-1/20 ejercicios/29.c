#include <stdio.h>
#include <math.h>
void main() {
    // Declaración de variables reales para potencia, tiempo y energía
    float potencia = 0.0, tiempo = 0.0, energia_kwh = 0.0;
    // Declaración de variables enteras y de tipo long para el consumo entero y el factorial
    int entero_kwh = 0; 
    long factorial = 1;
    // Solicitar y leer los valores de potencia y tiempo al usuario
    printf("Potencia W y Tiempo h: "); 
    scanf("%f %f", &potencia, &tiempo);
    // Validación para asegurar que la potencia y el tiempo no sean negativos
    if (potencia < 0 || tiempo < 0)
        return;
    // Cálculo de la energía consumida en kilovatios-hora (kWh)
    energia_kwh = (potencia * tiempo) / 1000.0;
    // Evaluación condicional para verificar si la energía consumida es mayor a cero
    if (energia_kwh > 0) {
        // Mostrar el consumo energético en pantalla
        printf("Consumo: %.2f kWh\n", energia_kwh);
        // Obtener la parte entera del consumo de energía
        entero_kwh = (int)energia_kwh;
        // Evaluación condicional para verificar si el entero se encuentra en el rango adecuado
        if (entero_kwh > 0 && entero_kwh < 10) {
            // Cálculo del factorial
            if (entero_kwh == 1) {
                factorial = 1;
            } else if (entero_kwh == 2) {
                factorial = 2;
            } else if (entero_kwh == 3) {
                factorial = 6;
            } else if (entero_kwh == 4) {
                factorial = 24;
            } else if (entero_kwh == 5) {
                factorial = 120;
            } else if (entero_kwh == 6) {
                factorial = 720;
            } else if (entero_kwh == 7) {
                factorial = 5040;
            } else if (entero_kwh == 8) {
                factorial = 40320;
            } else if (entero_kwh == 9) {
                factorial = 362880;
            }
            // Mostrar el resultado del factorial en pantalla
            printf("Factorial de %d es %ld\n", entero_kwh, factorial);
        }
    }
}