#include <stdio.h>
// Definicion de constantes simbolicas para la conversion y el valor de PI
#define PULGADA_CM 2.54
#define PI 3.14159
int main() {
    //Declaracion de variables reales para medidas y cálculos
    float pulgadas = 0.0, cm = 0.0,producto_pi = 0.0;
    //Solicitar y leer los datos de entrada al usuario
    printf("Ingrese pulgadas: ");
    scanf("%f", &pulgadas);
    //Conversión de la medida de pulgadas a centimetros
    cm = pulgadas * PULGADA_CM;
    //Evaluación condicional para verificar si los centimetros son mayores a cero
    if (cm > 0) {
        //Calculo del producto entre los centimetros y el valor de PI
        producto_pi = cm * PI;
        //Mostrar el resultado de la conversion en pantalla con dos decimales
        printf("%.2f pulgadas equivalen a %.2f cm\n", pulgadas, cm);
        //Mostrar el resultado del producto por PI en pantalla
        printf("Producto por PI: %.2f\n", producto_pi);
    }
}