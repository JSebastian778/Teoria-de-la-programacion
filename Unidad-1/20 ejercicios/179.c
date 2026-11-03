#include <stdio.h>
// Definición de constantes simbólicas para las tarifas base y descuentos
#define TARIFA_B 0.30
#define TARIFA_M 0.50
#define TARIFA_T 1.00
#define DESC_ESTUDIANTE 0.50
void main() {
    //Declaración de variables reales
    float distancia = 0.0f;
    float costo_bruto = 0.0f;
    float costo_final = 0.0f;
    //Declaración de variables de tipo carácter
    char tipo_transporte = 'B';
    char categoria = 'A';
    //Solicitar y leer el tipo de transporte al usuario
    printf("Tipo (B=Bus, M=Metro, T=Tren): ");
    scanf(" %c", &tipo_transporte);
    //Solicitar y leer la categoría del pasajero al usuario
    printf("Categoria (A=Adulto, E=Estudiante, M=Adulto Mayor): ");
    scanf(" %c", &categoria);
    //Solicitar y leer la distancia del recorrido en kilómetros
    printf("Distancia (km): ");
    scanf("%f", &distancia);
    //Calcular el costo bruto según el tipo de transporte seleccionado
    if (tipo_transporte == 'B' || tipo_transporte == 'b') {
        costo_bruto = distancia * TARIFA_B;
    } else if (tipo_transporte == 'M' || tipo_transporte == 'm') {
        costo_bruto = distancia * TARIFA_M;
    } else {
        costo_bruto = distancia * TARIFA_T;
    }
    //Aplicar descuento del 50% si el pasajero es estudiante o adulto mayor
    if (categoria == 'E' || categoria == 'e' || categoria == 'M' || categoria == 'm') {
        costo_bruto = costo_bruto * 0.50;
    }
    //Aplicar un descuento general adicional del 5%
    costo_final = costo_bruto * 0.95;
    //Mostrar el resultado final de la tarifa a pagar en pantalla con dos decimales
    printf("Tarifa final a pagar: $%.2f\n", costo_final);
}