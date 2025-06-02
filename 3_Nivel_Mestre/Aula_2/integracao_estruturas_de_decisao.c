#include <stdio.h>



int main() {
    // Declaração de variáveis
    int opcao;
    float nota1, nota2, nota3, media;



    // Output do menu e Input da escolha do usuário
    printf("------ MENU DO ESTUDANTE ------\n");
    printf("1. Calcular Média\n");
    printf("2. Determinar Status\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);



    // Checagem da escolha do usuário
    switch (opcao) {
        case 1: 
            printf("\n------ CÁLCULO DE MÉDIA ------\n");

            printf("Digite a primeira nota: ");
            scanf("%f", &nota1);

            printf("Digite a segunda nota: ");
            scanf("%f", &nota2);

            printf("Digite a terceira nota: ");
            scanf("%f", &nota3);


            if ((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10) && (nota3 >= 0 && nota3 <= 10)) {
                media = (nota1 + nota2 + nota3) / 3;


                printf("\nA sua média é: %.2f", media);
            } 
            else {
                printf("\nValores de nota inválidos!");
            }
        break;


        case 2:
            printf("\n------ DETERMINAR STATUS ------\n");
            
            printf("Digite sua média: ");
            scanf("%f", &media);


            media >= 6 ? printf("\nAprovado!") : printf("\nReprovado!");
        break;


        case 3:
            printf("\nSaindo do programa...");
        break;


        default:
            printf("\nOpção inválida!");
        break;
    }



    return 0;
}