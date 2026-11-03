#include <stdio.h>
//Definición de constantes simbólicas para los factores de emisión de CO2
#define EMISION_AUTO 0.2
#define EMISION_ELECTRICA 0.5
#define EMISION_GAS 2.0
#define EMISION_VUELO 250.0
void main() {
    //Declaración de variables de entrada
    float km_auto = 0.0;
    float kwh = 0.0;
    float m3_gas = 0.0;
    int vuelos = 0;
    //Declaración de variables para los cálculos
    float huella_bruta = 0.0;
    float descuento = 0.0;
    float huella_final = 0.0;
    //Solicitud y lectura de datos de entrada al usuario
    printf("Ingrese kilometros recorridos en auto: ");
    scanf("%f", &km_auto);
    printf("Ingrese consumo de electricidad (kwh): ");
    scanf("%f", &kwh);
    printf("Ingrese consumo de gas (m3): ");
    scanf("%f", &m3_gas);
    printf("Ingrese numero de vuelos: ");
    scanf("%d", &vuelos);
    //Calculo de la huella de carbono bruta multiplicando cada factor por su emisión correspondiente
    huella_bruta = (km_auto * EMISION_AUTO) + (kwh * EMISION_ELECTRICA) + (m3_gas * EMISION_GAS) + (vuelos * EMISION_VUELO);
    //Verificación condicional de las emisiones totales
    if (huella_bruta > 0) {
        printf("Se detecto huella de carbono positiva\n");
    }
    //Aplicación de operaciones de descuento y ajuste final
    descuento = huella_bruta * 0.05;
    huella_final = huella_bruta - descuento;
    //Resultados en pantalla
    printf("Huella bruta: %.2f kg CO2\n", huella_bruta);
    printf("Descuento (5%): -%.2f kg CO2\n", descuento);
    printf("Huella final ajustada: %.2f kg CO2\n", huella_final);
}