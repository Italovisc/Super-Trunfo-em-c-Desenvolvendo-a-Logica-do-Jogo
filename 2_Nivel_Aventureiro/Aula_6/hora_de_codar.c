#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Declaração das variáveis e setando número aleatório
    int escolhaJogador, escolhaSistema;
    srand(time(0));



    // Output do menu interativo e Input de escolha do jogador
    printf("------ JOKENPÔ ------\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Escolha uma opção: ");
    scanf("%d", &escolhaJogador);



    // Criação da escolha do sistema
    escolhaSistema = rand() % 3 + 1;



    // Análise das escolhas e embate Jogador vs. Sistema
    switch (escolhaJogador) {
        case 1:
            printf("\nJogador: Pedra");
        break;


        case 2:
            printf("\nJogador: Papel");
        break;


        case 3:
            printf("\nJogador: Tesoura");
        break;


        default:
            printf("\nOpção inválida.\n");
        break;
    }


    switch (escolhaSistema) {
        case 1:
            printf("\nSistema: Pedra\n");
        break;


        case 2:
            printf("\nSistema: Papel\n");
        break;


        case 3:
            printf("\nSistema: Tesoura\n");
        break;
    }


    if (escolhaJogador == escolhaSistema) {
        printf("\nEmpate!");
    } 
    else if ((escolhaJogador == 1) && (escolhaSistema == 3) || (escolhaJogador == 2) && (escolhaSistema == 1) || (escolhaJogador == 3) && (escolhaSistema == 2)) {
        printf("\nVocê ganhou!");
    }
    else {
        printf("\nVocê perdeu!");
    }



    return 0;
}