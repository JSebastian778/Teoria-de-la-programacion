#include <stdio.h>
//Definición de constantes simbólicas para los planes y límites de consumo
#define Plan_basico 15.0
#define Plan_estandar 30.0
#define Plan_premiun 50.0
#define Min_basico 100
#define Gb_basico 2.0
void main() {
    //Declaración de variables de entrada para el consumo y presupuesto
    int minutos = 0;
    float gb = 0.0;
    int sms = 0;
    float presupuesto = 0.0;
    float costo_base = 0.0;
    float descuento = 0.0;
    float pago_final = 0.0;
    //Indicar el propósito del sitema en pantalla
    printf("Sistema de recomendacion de planes\n");
    //Solicitar y leer los minutos consumidos
    printf("Ingrese minutos consumidos: ");
    scanf("%d", &minutos);
    //Solicitar y leer los GB consumidos
    printf("Ingrese GB consumidos: ");
    scanf("%f", &gb);
    //Solicitar y leer los SMS enviados
    printf("Ingrese SMS enviados: ");
    scanf("%d", &sms);
    //Solicitar y leer el presupuesto del usuario
    printf("Ingrese su presupuesto mensual ($): ");
    scanf("%f", &presupuesto);
    //Evaluacion condicional para recomendar el plan telefónico adecuado
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
    //Cálculo de descuento del %5 y del monto final a pagar
    descuento = costo_base * 0.05;
    pago_final = costo_base - descuento;
    //Muestra de resultados detallados en pantalla
    printf("Costo original del plan: $%.2f\n", costo_base);
    printf("Descuento (5%%): -$%.2f\n", descuento);
    printf("Total a pagar: $%.2f\n", pago_final);
}