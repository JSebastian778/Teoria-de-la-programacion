#include <stdio.h>
#define UMBRAL_MAYOREO 10
#define DESCUENTO 0.10
void main() {
    // Declaración de variable entera para la cantidad
    int cantidad;
    // Declaración de variables reales para precios, totales y descuentos
    float precio, total_bruto, descuento_aplicado, total_pagar;
    // Solicitar y leer la cantidad de productos
    printf("Ingrese la cantidad de productos: "); 
    scanf("%d", &cantidad);
    // Solicitar y leer el precio unitario
    printf("Ingrese el precio unitario: "); 
    scanf("%f", &precio);
    // Calcular el total bruto de la compra
    total_bruto = cantidad * precio;
    // Evaluación condicional para aplicar descuento si supera el umbral
    if (cantidad >= UMBRAL_MAYOREO) {
        descuento_aplicado = total_bruto * DESCUENTO;
    } else {
        descuento_aplicado = 0.0;
    }
    // Calcular el total a pagar restando el descuento
    total_pagar = total_bruto - descuento_aplicado;
    // Mostrar el total a pagar en pantalla
    printf("Total a pagar: $%.2f\n", total_pagar);
}