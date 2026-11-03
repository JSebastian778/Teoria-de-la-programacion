#include <stdio.h>
#include <math.h>
void main() {
    // Declaración de variables reales para almacenar las coordenadas de los puntos
    float x1;
    float y1;
    float x2;
    float y2;
    // Declaración de variables reales para almacenar los resultados de las distancias
    float distancia;
    float distancia_cuadrado;
    // Solicitar y leer la coordenada x del primer punto
    printf("Ingrese x1: ");
    scanf("%f", &x1);
    // Solicitar y leer la coordenada y del primer punto
    printf("Ingrese y1: ");
    scanf("%f", &y1);
    // Solicitar y leer la coordenada x del segundo punto
    printf("Ingrese x2: ");
    scanf("%f", &x2);
    // Solicitar y leer la coordenada y del segundo punto
    printf("Ingrese y2: ");
    scanf("%f", &y2);
    // Cálculo de la distancia euclidiana entre los dos puntos utilizando funciones de math.h
    distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    // Evaluación condicional para verificar si la distancia es mayor a cero
    if (distancia > 0) {
        // Cálculo del cuadrado de la distancia obtenida multiplicándola por sí misma
        distancia_cuadrado = distancia * distancia;

        // Mostrar el resultado de la distancia calculada en pantalla
        printf("Distancia: %.2f\n", distancia);

        // Mostrar el resultado del cuadrado de la distancia en pantalla
        printf("Cuadrado: %.2f\n", distancia_cuadrado);
    }
}