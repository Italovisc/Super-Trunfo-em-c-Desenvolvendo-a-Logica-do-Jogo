#include <stdio.h>

int main() {
    // Delclaração das variáveis
    int opcao;
    float saldo = 1000;



    // Input de dados do usuário
    printf("------ ESCOLHA UMA OPÇÃO ------\n");
    printf("1. Verificar saldo\n");
    printf("2. Fazer depósito\n");
    printf("3. Fazer saque\n");
    scanf("%d", &opcao);



    // Checagem de condições e Output de dados
    switch (opcao) {
        case 1:
            printf("\nO seu saldo é R$%.2f\n", saldo);
        break;

        case 2:
            printf("\nDigite o banco no qual você deseja depositar: ");
            printf("\nDigite a agência na qual você deseja depositar: ");
            printf("\nDigite a conta na qual você deseja depositar: ");
        break;

        case 3:
            printf("\nDigite o valor a ser sacado: ");
        break;

        default:
            printf("\nOpção inválida!");
    }



    return 0;
}