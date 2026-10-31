#include <stdio.h>
// Definicion de constantes
#define Plan_basico 15.0
#define Plan_estandar 30.0
#define Plan_premiun 50.0
#define Min_basico 100
#define Gb_basico 2.0
void main() {
    // Declaracion de variables
    int minutos = 0;
    float gb = 0.0;
    int sms = 0;
    float presupuesto = 0.0;
    // Variables para calculos
    float costo_base = 0.0;
    float descuento = 0.0;
    float pago_final = 0.0;
    // Lectura de datos
    printf("Sistema de recomendacion de planes\n");
    printf("Ingrese minutos consumidos: ");
    scanf("%d", &minutos);
    printf("Ingrese GB consumidos: ");
    scanf("%f", &gb);
    printf("Ingrese SMS enviados: ");
    scanf("%d", &sms);
    printf("Ingrese su presupuesto mensual ($): ");
    scanf("%f", &presupuesto);
    // Evaluacion para recomendar el plan
    if (minutos <= Min_basico && gb <= Gb_basico && presupuesto >= Plan_basico) {
        printf("Plan recomendado: Plan basico ($15.00)\n");
        costo_base = Plan_basico;
    } else if (presupuesto < Plan_premiun) {
        printf("Plan recomendado: Plan estandar ($30.00)\n");
        costo_base = Plan_estandar;
    } else {
        printf("Plan recomendado: Plan premiun ($50.00)\n");
        costo_base = Plan_premiun;
    }
    // Aplicacion del descuento del 5%
    descuento = costo_base * 0.05;
    pago_final = costo_base - descuento;
    // Muestra de resultados
    printf("Costo original del plan: $%.2f\n", costo_base);
    printf("Descuento (5%%): -$%.2f\n", descuento);
    printf("Total a pagar: $%.2f\n", pago_final);
}