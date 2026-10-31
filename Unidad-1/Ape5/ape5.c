#include <stdio.h>
void main() {
    float certamen_1 = 0.0;
    float certamen_2 = 0.0;
    float certamen_3 = 0.0;
    float laboratorio_nota = 0.0;
    float promedio_a_llegar = 60.0;
    float nota_necesaria = 0.0;
    printf("Ingrese la nota del certamen 1: ");
    scanf("%f", &certamen_1);
    printf("Ingrese la nota del certamen 2: ");
    scanf("%f", &certamen_2);
    printf("Ingrese la nota de laboratorio: ");
    scanf("%f", &laboratorio_nota);
    nota_necesaria = (promedio_a_llegar - (laboratorio_nota * 0.3)) / 0.7;
    certamen_3 = (nota_necesaria * 3) - certamen_1 - certamen_2;
    if (certamen_3 <= 0) {
        printf("Ya has aprobado sin el certamen 3: %.2f\n", certamen_3);
    }else {
        printf("Para aprobar necesitas conseguir: %.2f\n", certamen_3);
    }
}