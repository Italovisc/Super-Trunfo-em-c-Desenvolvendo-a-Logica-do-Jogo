#include <stdio.h>

int main() {
    // Declaração das variáveis
    int a = 5;
    int b = -10;
    int c = 1;



    // Comparação das variáveis
    if (a > 0 && b > 0) {
        printf("Os dois números são positivos.\n");
    } else {
        printf("Pelo menos um dos números é negativo.\n");
    }


    if (a > 0 || b > 0) {
        printf("Pelo menos um dos números é positivo.\n");
    } else {
        printf("Os dois números são negativos.\n");
    }
    
    
    if (!a) {
        printf("A variável é zero.\n");
    } else {
        printf("A variável é diferente de zero.\n");
    }


    if (!(a > 0)) {
        printf("A variável é negativa.\n");
    } else {
        printf("A variável é positiva.\n");
    }


    if (a > 0 && b < 0 || c == 0) {
        printf("A condição é verdadeira.\n");
    } else {
        printf("A condição é alsa.\n");
    }



    return 0;
}