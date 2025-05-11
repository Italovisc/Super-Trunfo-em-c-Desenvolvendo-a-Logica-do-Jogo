#include <stdio.h>

int main() {
    // Declaração de variáveis
    float nota;



    // Input de dados do usuário
    printf("Digite sua nota: ");
    scanf("%f", &nota);



    // Checagem de condições e Output de resposta
    if (nota >= 90) {
        printf("Você tirou Grau A!\n");
    } 

    else if (nota < 90 && nota >= 80) {
        printf("Você tirou Grau B!\n");
    } 

    else if (nota < 80 && nota >= 70) {
        printf("Você tirou Grau C!\n");
    } 

    else if (nota < 70 && nota >= 60) {
        printf("Você tirou Grau  D!\n");
    } 

    else if (nota < 60 && nota >= 50) {
        printf("Você tirou Grau E!\n");
    }
     
    else {
        printf("Você tirou Grau F!\n");
    }



    return 0;
}