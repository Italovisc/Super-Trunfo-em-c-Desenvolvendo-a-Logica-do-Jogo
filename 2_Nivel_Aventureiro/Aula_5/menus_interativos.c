#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Declaração de variáveis
    int opcao;
    int numSistema;
    int numUsuario;



    // Output do menu interativo e Input de escolha do usuário
    printf("------ MENU PRINCIPAL ------\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);



    // Output com base na escolha do usuário
    switch (opcao) {
        case 1:
            srand(time(0));
            numSistema = rand() % 10;

            printf("\nDigite um número de 0 a 9: ");
            scanf("%d", &numUsuario);

            if (numUsuario == numSistema) {
                printf("\nVocê acertou!\n");
                printf("O número secreto era: %d", numSistema);
            } 
            else {
                printf("\nVocê errou!\n");
                printf("O número secreto era: %d", numSistema);
            }
        break;


        case 2:
            printf("\nA explicação das regras...\n");
        break;


        case 3:
            printf("\nSaindo do jogo...\n");
        break;

        
        default:
            printf("\nOpção inválida.\n");
        break;
    }



    return 0;
}