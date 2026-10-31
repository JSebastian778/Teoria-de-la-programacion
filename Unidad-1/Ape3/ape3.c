#include <stdio.h>
int main() {
    float tam_doc, cant_doc;
    float tam_video, cant_video;
    float tam_img, cant_img;
    float tam_prog, cant_prog;
    float disco_gb;
    float esp_doc, esp_video, esp_img, esp_prog;
    float esp_total_mb, esp_total_gb, porcentaje;
    printf("Ingrese el tamano de los documentos (MB): ");
    scanf("%f", &tam_doc);
    printf("Ingrese la cantidad de documentos: ");
    scanf("%f", &cant_doc);
    printf("Ingrese el tamano de los video (MB): ");
    scanf("%f", &tam_video);
    printf("Ingrese la cantidad de videos: ");
    scanf("%f", &cant_video);
    printf("Ingrese el tamano de las imagenes (MB): ");
    scanf("%f", &tam_img);
    printf("Ingrese la cantidad de imagenes: ");
    scanf("%f", &cant_img);
    printf("Ingrese el tamano de los programas (MB): ");
    scanf("%f", &tam_prog);
    printf("Ingrese la cantidad de programas: ");
    scanf("%f", &cant_prog);
    printf("Ingrese el tamano del disco (GB): ");
    scanf("%f", &disco_gb);
    esp_doc = cant_doc * tam_doc;
    esp_video = cant_video * tam_video;
    esp_img = cant_img * tam_img;
    esp_prog = cant_prog * tam_prog;
    esp_total_mb = esp_doc + esp_video + esp_img + esp_prog;
    esp_total_gb = esp_total_mb / 1024;
    if (disco_gb > 0) {
        porcentaje = (esp_total_gb / disco_gb) * 100;
    } else {
        porcentaje = 0;
    }
    printf("\n Resultado del almacenamiento: \n");
    printf("Espacio total de documentos: %.2f MB\n", esp_doc);
    printf("Espacio total de videos: %.2f MB\n", esp_video);
    printf("Espacio total de las imagenes: %.2f MB\n", esp_img);
    printf("Espacio total de los programas: %.2f MB\n", esp_prog);
    printf("Espacio total de todo (MB): %.2f MB\n", esp_total_mb);
    printf("Espacio total de todo (GB): %.2f GB\n", esp_total_gb);
    printf("Almacenamiento total en el disco: %.2f%%\n", porcentaje);
    return 0;
}