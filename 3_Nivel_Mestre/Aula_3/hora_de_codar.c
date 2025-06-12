#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    // Declaração de variáveis
    int numJogador, numComputador, resultado;
    char tipoComparacao;



    // Geração do número do computador
    srand(time(0));
    numComputador = rand() % 100 + 1;



    // Interface de usuário
    printf("------ JOGO DE MAIOR OU MENOR ------\n");
    printf("M - Maior\n");
    printf("N - Menor\n");
    printf("I - Igual\n");

    printf("\nEscolha o tipo de comparação: ");
    scanf("%c", &tipoComparacao);

    printf("\nDigite seu número (entre 0 e 100): ");
    scanf("%d", &numJogador);

    printf("\nO seu número é: %d", numJogador);
    printf("\nO número do computador é: %d\n", numComputador);



    // Comparação dos números
    switch(tipoComparacao) {
        case 'M':
        case 'm':
            if (numJogador > numComputador) {
                printf("\nSeu número é maior!");
                printf("\nVocê venceu!");
            } 
            else {
                printf("\nSeu número é menor!");
                printf("\nVocê perdeu!");
            }
        break;


        case 'N':
        case 'n':
            if (numJogador < numComputador) {
                printf("\nSeu número é menor!");
                printf("\nVocê venceu!");
            }
            else {
                printf("\nSeu número é maior!");
                printf("\nVocê perdeu!");
            }
        break;


        case 'I':
        case 'i':
            if (numJogador == numComputador) {
                printf("\nOs dois números são iguais!");
                printf("\nVocê venceu!");
            }
            else {
                printf("\nOs dois números são diferentes!");
                printf("\nVocê perdeu!");
            }
        break;


        default:
            printf("\nOpção inválida!");
        break;
    }



    return 0;
}