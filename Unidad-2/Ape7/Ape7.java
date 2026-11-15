import java.util.Scanner;
public class Ape7 {
    public static void main(String[] args) {
        // Inicialización del objeto Scanner para la lectura de datos por consola
        Scanner scanner = new Scanner(System.in);
        // Declaración de variables sin valores iniciales asignados
        double eval_individual, trabajo_grupal, eval_final, nota_final;
        String nivel_desempeno;
        // Entrada de datos
        System.out.print("Ingrese la nota de evaluación individual (0 - 10): ");
        eval_individual = scanner.nextDouble();
        System.out.print("Ingrese la nota de trabajo grupal (0 - 10): ");
        trabajo_grupal = scanner.nextDouble();
        System.out.print("Ingrese la nota de evaluación final (0 - 10): ");
        eval_final = scanner.nextDouble();
        // Validación del rango de calificaciones (0 a 10)[cite: 2]
        if ((eval_individual >= 0 && eval_individual <= 10) && 
            (trabajo_grupal >= 0 && trabajo_grupal <= 10) && 
            (eval_final >= 0 && eval_final <= 10)) {
            // Cálculo del promedio ponderado[cite: 2]
            nota_final = (eval_individual * 0.30) + (trabajo_grupal * 0.30) + (eval_final * 0.40);
            // Estructura condicional múltiple para el nivel de desempeño[cite: 2, 3]
            if (nota_final >= 9.00) {
                nivel_desempeno = "Excelente";
            } else if (nota_final >= 8.00) {
                nivel_desempeno = "Muy bueno";
            } else if (nota_final >= 7.00) {
                nivel_desempeno = "Bueno";
            } else if (nota_final >= 5.00) {
                nivel_desempeno = "Regular";
            } else {
                nivel_desempeno = "Deficiente";
            } 
            // Salida de resultados sin saltos de línea manuales dentro del texto[cite: 3]
            System.out.println("Evaluación Individual (30%): " + eval_individual);
            System.out.println("Trabajo Grupal (30%): " + trabajo_grupal);
            System.out.println("Evaluación Final (40%): " + eval_final);
            System.out.println("Promedio Ponderado Final:  " + String.format("%.2f", nota_final));
            System.out.println("Nivel de Desempeño: " + nivel_desempeno);
            // Condiciones adicionales y estado final[cite: 3]
            if (nota_final < 7.00) {
                System.out.println("Mensaje: El estudiante requiere refuerzo académico.");
                System.out.println("Estado: Reprobado");
            } else {
                System.out.println("Estado: Aprobado");
            }
            if (nota_final >= 9.00) {
                System.out.println("Mensaje: Felicitaciones, Rendimiento sobresaliente.");
            }  
        } else {
            System.out.println("Error: Una o más calificaciones están fuera del rango permitido (0 a 10).");
        }
        // Cierre del Scanner
        scanner.close();
    }
}