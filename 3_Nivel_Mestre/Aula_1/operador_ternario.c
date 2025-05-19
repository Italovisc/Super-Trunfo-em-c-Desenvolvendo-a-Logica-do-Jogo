#include <stdio.h>

int main() {
    // Declaração de variáveis
    int idade = 16;
    int temperatura = 28;

    int num1 = 40;
    int num2 = 20;
    int maior;



    // Checagem de condições
    idade >= 18 ? printf("Você é maior de idade.\n") : printf("Você não é maior de idade.\n");

    temperatura > 30 ? printf("Está calor.\n") : printf("Está frio.\n");

    num1 > num2 ? (maior = num1) : (maior = num2);
    printf("O maior número é: %d\n", maior);



    return 0;
}