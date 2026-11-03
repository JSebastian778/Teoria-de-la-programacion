#include <stdio.h>
void main() {
    // Declaración de variables reales para capital, tasa, interés y monto total
    float capital, tasa, interes_generado, monto_total;
    // Declaración de variable entera para el tiempo en años
    int tiempo;
    // Solicitar y leer el capital al usuario
    printf("Ingrese el capital: "); 
    scanf("%f", &capital);
    // Solicitar y leer la tasa de interés al usuario
    printf("Ingrese la tasa de interes (%%): "); 
    scanf("%f", &tasa);
    // Solicitar y leer el tiempo en años al usuario
    printf("Ingrese el tiempo en anos: "); 
    scanf("%d", &tiempo);
    // Validación condicional para asegurar que los datos sean positivos
    if (capital <= 0 || tasa <= 0 || tiempo <= 0) {
        printf("Error: Datos deben ser positivos.\n");
        return;
    }
    // Cálculo del interés generado
    interes_generado = (capital * tasa * tiempo) / 100.0;
    // Cálculo del monto total sumando el capital y el interés
    monto_total = capital + interes_generado;
    // Mostrar el interés generado y el monto total en pantalla
    printf("Interes generado: $%.2f\nMonto Total: $%.2f\n", interes_generado, monto_total);
}