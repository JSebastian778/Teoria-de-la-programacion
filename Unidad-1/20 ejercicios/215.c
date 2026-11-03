#include <stdio.h>
#define OFFSET 273.15
void main() {
    // Declaración de variables reales para celsius, kelvin y el doble del kelvin
    float celsius, kelvin, doble_kelvin;
    // Solicitar y leer la temperatura en grados Celsius al usuario
    printf("Ingrese la temperatura en grados Celsius: "); 
    scanf("%f", &celsius);
    // Calcular la temperatura en Kelvin
    kelvin = celsius + OFFSET;
    // Evaluación condicional para verificar que la temperatura Kelvin sea válida
    if (kelvin >= 0) {
        doble_kelvin = kelvin * 2.0;
        // Mostrar el resultado de la conversión y el doble en pantalla
        printf("%.2f C equivalen a %.2f K\n", celsius, kelvin);
        printf("Doble de Kelvin: %.2f\n", doble_kelvin);
    }
}