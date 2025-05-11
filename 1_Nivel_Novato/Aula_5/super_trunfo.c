// Incluí a biblioteca string.h para usar a função strcspn, possibilitando a leitura de cidades de nome composto
#include <stdio.h>
#include <string.h>



int main() {
    // Declaração de variáveis
    char estado[] = "A", codigo[] = "A01", cidade[20];
    char estado2[] = "B", codigo2[] = "B02", cidade2[20];

    int pontos_turisticos, pontos_turisticos2;
    int populacao, populacao2;

    float pib, pib2;
    float area, area2;



    // Coleta dos dados da carta 1
    // OBS: usei fgets para ler o nome da cidade, pois a função scanf não lê strings com espaços
    // OBS2: getchar() é usado para limpar o buffer do teclado, evitando que o próximo scanf leia o \n que ficou no buffer
    printf("Digite o nome da cidade: ");
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = '\0';

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos);
    getchar();



    // Coleta dos dados da carta 2
    // OBS: também usei fgets para ler o nome da cidade 2
    printf("\nDigite o nome da cidade 2: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Digite a população da cidade 2: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade 2: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade 2: ");
    scanf("%d", &pontos_turisticos2);



    // Cálculo da densidade e PIB per capita
    float densidade = (float)populacao / area;
    float densidade2= (float)populacao2 / area2;

    float pibpc = pib * 1000000000 / (float)populacao;
    float pibpc2 = pib2 * 1000000000 / (float)populacao2;



    // Output das cartas
    printf("\n---------- Carta 1 ----------\n- Estado: %s\n- Código: %s\n- Cidade: %s\n- População: %d habitantes\n- Área: %.2fkm²\n- PIB: R$%.2f bilhões\n- Pontos Turísticos: %d\n- Densidade populacional: %.2fhab/km²\n- PIB per capita: R$%.2f reais\n", estado, codigo, cidade, populacao, area, pib, pontos_turisticos, densidade, pibpc);

    printf("\n---------- Carta 2 ----------\n- Estado: %s\n- Código: %s\n- Cidade: %s\n- População: %d habitantes\n- Área: %.2fkm²\n- PIB: R$%.2f bilhões\n- Pontos Turísticos: %d\n- Densidade populacional: %.2fhab/km²\n- PIB per capita: R$%.2f reais\n", estado2, codigo2, cidade2, populacao2, area2, pib2, pontos_turisticos2, densidade2, pibpc2);



    // Cálculo do super poder
    float super = populacao + area + pib + pontos_turisticos + (1 / densidade)  + pibpc;
    float super2 = populacao2 + area2 + pib2 + pontos_turisticos2 + ( 1 / densidade2) + pibpc2;



    // Output do embate e comparação dos valores
    printf("\n---------- RESULTADO ----------\n");

    if (populacao > populacao2) {
        printf("- POPULAÇÃO: A Carta 1 venceu! (%d habitantes)\n", populacao);
    } else {
        printf("- POPULAÇÃO: A Carta 2 venceu! (%d habitantes)\n", populacao2);
    }
    

    if (area > area2) {
        printf("- ÁREA: A Carta 1 venceu! (%.2fkm²)\n", area);
    } else {
        printf("- ÁREA: A Carta 2 venceu! (%.2fkm²)\n", area2);
    }


    if (pib > pib2) {
        printf("- PIB: A carta 1 venceu! (R$%.2f bilhões)\n", pib);
    } else {
        printf("- PIB: A Carta 2 venceu! (R$%.2f bilhões)\n", pib2);
    }

    
    if (pontos_turisticos > pontos_turisticos2) {
        printf("- PONTOS TURÍSTICOS: A Carta 1 venceu! (%d)\n", pontos_turisticos);
    } else {
        printf("- PONTOS TURÍSTICOS: A Carta 2 venceu! (%d)\n", pontos_turisticos2);
    }

    
    if (densidade < densidade2) {
        printf("- DENSIDADE POPULACIONAL: A Carta 1 venceu! (%.2fhab/km²)\n", densidade);
    } else {
        printf("- DENSIDADE POPULACIONAL: A Carta 2 venceu! (%.2fhab/km²)\n", densidade2);
    }

    
    if (pibpc > pibpc2) {
        printf("- PIB PER CAPITA: A Carta 1 venceu! (R$%.2f reais)\n", pibpc);
    } else {
        printf("- PIB PER CAPITA: A Carta 2 venceu! (R$%.2f reais)\n", pibpc2);
    }


    if (super > super2) {
        printf("- PONTUAÇÃO FINAL: A Carta 1 venceu! (%.2f)\n", super);
    } else {
        printf("- PONTUAÇÃO FINAL: A Carta 2 venceu! (%.2f)\n", super2);
    }



    return 0;
}