import java.util.Scanner;
public class Ape6 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        // Declaración de constantes y variables
        double plan_basico;
        double plan_estandar;
        double plan_premiun;
        double gb_basico;
        int min_basico;
        int minutos_usados;
        int sms_enviados;
        double gb_consumidos;
        double presupuesto;
        double precio_base;
        double descuento;
        double precio_final;
        String plan_recomendado;
        // Asignación de valores a las constantes del sistema
        plan_basico = 15.0;
        plan_estandar = 30.0;
        plan_premiun = 50.0;
        min_basico = 100;
        gb_basico = 2.0;
        // Captura de datos de entrada por consola
        System.out.print("Ingrese los minutos usados: ");
        minutos_usados = scanner.nextInt();
        System.out.print("Ingrese los GB consumidos: ");
        gb_consumidos = scanner.nextDouble();
        System.out.print("Ingrese los SMS mandados: ");
        sms_enviados = scanner.nextInt();
        System.out.print("Ingrese el presupuesto: ");
        presupuesto = scanner.nextDouble();
        // Lógica de selección mediante condicionales anidadas
        if (minutos_usados <= min_basico && gb_consumidos <= gb_basico && sms_enviados <= 50 && presupuesto >= plan_basico) {
            plan_recomendado = "Plan Básico";
            precio_base = plan_basico;
        } else {
            if (minutos_usados <= 500 && gb_consumidos <= 10.0 && presupuesto >= plan_estandar) {
                plan_recomendado = "Plan Estándar";
                precio_base = plan_estandar;
            } else {
                if (presupuesto >= plan_premiun) {
                    plan_recomendado = "Plan Premium";
                    precio_base = plan_premiun;
                } else {
                    plan_recomendado = "Ninguno, porque no cumple todos los requisitos.";
                    precio_base = 0.0;
                }
            }
        }
        // Procesamiento de descuentos y salida de resultados
        if (precio_base > 0) {
            descuento = precio_base * 0.05;
            precio_final = precio_base - descuento;
            System.out.println("Plan recomendado: " + plan_recomendado);
            System.out.println("Precio base: " + precio_base + " $");
            System.out.println("Descuento: " + descuento + " $");
            System.out.println("Precio final: " + precio_final + " $");
        } else {
            System.out.println("Plan recomendado: " + plan_recomendado);
        }
        scanner.close();
    }
}