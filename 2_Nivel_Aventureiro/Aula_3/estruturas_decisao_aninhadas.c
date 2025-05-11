#include <stdio.h>

int main() {
    // Declaração de variáveis
    int idade, dependentes;
    float renda;



    // Input dos dados de usuário
    printf("Informe sua idade: ");
    scanf("%d", &idade);

    printf("Informe sua renda mensal: ");
    scanf("%f", &renda);

    printf("Informe o número de dependentes: ");
    scanf("%d", &dependentes);



    // Checagem de condições e Input
    if (idade <= 18 || idade >= 65) {
        if (renda <= 2000) {
            if (dependentes > 2) {
                printf("\nVocê atende aos critérios do programa social.");
            } 
            else {
                printf("\nVocê não atende aos critérios de dependentes do programa social.");
            }
        } 
        else {
            printf("\nVocê não atende aos critérios de renda do programa social.");
        }
    } 
    else {
        printf("\nVocê não atende aos critérios de idade do programa social.");
    }



    return 0;
}