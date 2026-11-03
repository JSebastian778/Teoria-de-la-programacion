#include <stdio.h>
void main() {
    //Declarar las variables enteras
    int stock_inicial = 0;
    int entradas = 0;
    int salidas = 0;
    int stock_minimo = 0;
    int stock_final = 0;
    int requiere_pedido = 0;
    //Declarar las variables reales (con decimales)
    float descuento = 0.0f;
    float stock_ajustado = 0.0f;
    //Solicitar los datos de entrada al usuario
    printf("Ingrese stock inicial: ");
    scanf("%d", &stock_inicial);
    printf("Ingrese las entradas: ");
    scanf("%d", &entradas);
    printf("Ingrese las salidas: ");
    scanf("%d", &salidas);
    printf("Ingrese el stock minimo: ");
    scanf("%d", &stock_minimo);
    //Calcular el stock final (Stock inicial + Entradas - Salidas)
    stock_final = stock_inicial + entradas - salidas;
    //Evaluar si se requiere hacer un pedido (si es menor al 120% del stock mínimo)
    if (stock_final < stock_minimo * 1.2) {
        requiere_pedido = 1;
        printf("Se requiere realizar pedido\n");
    } else {
        requiere_pedido = 0;
        printf("Niveles de inventario optimos\n");
    }
    //Calcular el descuento o ajuste del stock (5%)
    descuento = stock_final * 0.05;
    //Calcular el stock final restando el descuento
    stock_ajustado = stock_final - descuento;
    //Mostrar el resultado final en pantalla con dos decimales
    printf("Stock final ajustado: %.2f\n", stock_ajustado);
}