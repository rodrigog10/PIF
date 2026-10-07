/*
Questão 22. Geração do Triângulo de Floyd com Laços Aninhados — Escreva um programa em C
que leia um número inteiro positivo N e imprima N linhas do Triângulo de Floyd. Por exemplo, se N =
5, a saída na tela deve ser exatamente:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

#include <stdio.h>

int main() {
    int N, i, j;
    int numero = 1;

    printf("Digite o numero de linhas (N): ");
    scanf("%d", &N);

    if (N < 1) {
        printf("Por favor, insira um numero maior ou igual a 1.\n");
        return 0;
    }

    printf("\n");

    for (i = 1; i <= N; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", numero);
            numero++;
        }
        printf("\n");
    }

    return 0;
}
