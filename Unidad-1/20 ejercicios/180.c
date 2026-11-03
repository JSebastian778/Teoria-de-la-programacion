#include <stdio.h>
// Definición de constantes simbólicas para los pesos y el bono por antigüedad
#define PESO_PROD 0.4
#define PESO_ASIST 0.2
#define PESO_CALIDAD 0.4
#define BONO_ANTIGUEDAD 0.01
void main() {
    // Declaración de variables reales para las evaluaciones
    float productividad = 0.0, asistencia = 0.0, calidad = 0.0;
    // Declaración de la variable entera para los años
    int anios = 0;
    // Declaración de variables para los cálculos de puntajes y descuentos
    float puntaje = 0.0, puntaje_final = 0.0, descuento = 0.0, puntaje_ajustado = 0.0;
    // Solicitar y leer los datos de entrada al usuario
    printf("Productividad (0-100): ");
    scanf("%f", &productividad);
    printf("Asistencia (0-100): ");
    scanf("%f", &asistencia);
    printf("Calidad (0-100): ");
    scanf("%f", &calidad);
    printf("Anos de antiguedad: ");
    scanf("%d", &anios);
    // Validación de rangos para asegurar que las evaluaciones estén entre 0 y 100
    if (productividad < 0 || productividad > 100 || asistencia < 0 || asistencia > 100 || calidad < 0 || calidad > 100) {
        printf("Error: Evaluaciones deben estar entre 0 y 100.\n");
    }
    // Cálculo del puntaje ponderado y aplicación del bono por antigüedad
    puntaje = (productividad * PESO_PROD) + (asistencia * PESO_ASIST) + (calidad * PESO_CALIDAD);
    puntaje_final = puntaje * (1.0 + (anios * BONO_ANTIGUEDAD));
    // Evaluación condicional para determinar la clasificación según el puntaje final
    if (puntaje_final >= 80.0)
        printf("Clasificacion: Excelente\n");
    else 
        printf("Clasificacion: Regular\n");
    // Aplicación de operaciones de descuento y cálculo del puntaje final ajustado
    descuento = puntaje_final * 0.05;
    puntaje_ajustado = puntaje_final - descuento;
    // Mostrar el resultado final ajustado en pantalla
    printf("Puntaje final ajustado: %.2f pts\n", puntaje_ajustado);
}