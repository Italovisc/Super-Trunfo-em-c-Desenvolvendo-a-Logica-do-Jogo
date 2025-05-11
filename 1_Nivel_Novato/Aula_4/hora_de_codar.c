#include <stdio.h>

int main() {
    // Definição das variáveis
    unsigned int estoque;
    float temperatura, umidade;



    // Input dos valores
    printf("Número de produtos em estoque: ");
    scanf("%u", &estoque);

    printf("Temperatura do ambiente: ");
    scanf("%f", &temperatura);

    printf("Umidade do ambiente: ");
    scanf("%f", &umidade);



    // Checagem das condições dos valores e Output
    if (estoque > 1000) {
        printf("\nO estoque (%u) está abastecido.\n", estoque);
    } else {
        printf("\nO estoque (%u) precisa ser abastecido.\n", estoque);
    }


    if (temperatura > 30) {
        printf("A temperatura (%.2f) está alta.\n", temperatura);
    } else {
        printf("A temperatura (%.2f) está dentro dos parâmetros.\n", temperatura);
    }


    if (umidade > 50) {
        printf("A umidade (%.2f) está alta.\n", umidade);
    } else {
        printf("A umidade (%.2f) está dentro dos parâmetros.\n", umidade);
    }




    return 0;
}