/*
Questão 15. Filtragem Numérica Simultânea com Operadores Lógicos — Criar um programa em C
que solicite ao usuário um número limite inteiro positivo NUM. Em seguida, o programa deve imprimir
todos os números no intervalo fechado de 1 até NUM que sejam múltiplos de 3 e de 5 ao mesmo
tempo (por exemplo: 15, 30, 45, ...). Caso nenhum número satisfaça a condição, informe o usuário.
*/

#include <stdio.h>

int main() {
    int NUM, i;
    int encontrou = 0;

    printf("Digite um numero limite inteiro positivo (NUM): ");
    scanf("%d", &NUM);

    if (NUM < 1) {
        printf("Por favor, insira um numero maior ou igual a 1.\n");
        return 0;
    }

    printf("\nNumeros multiplos de 3 e 5 ao mesmo tempo de 1 ate %d:\n", NUM);

    for (i = 1; i <= NUM; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            encontrou = 1;
        }
    }

    if (!encontrou) {
        printf("Nenhum numero no intervalo atende a condicao.\n");
    } else {
        printf("\n");
    }

    return 0;
}
