/*
Questão 14. Sequência de Quadrados e Acumulador Global — Desenvolva um programa que
imprima todos os números inteiros de 1 a 100, acompanhados de seus respectivos quadrados (1 -> 1,
2 -> 4, 3 -> 9, ..., 100 -> 10000). Ao final da listagem, o programa deve calcular e exibir a soma total
dos quadrados de todos esses 100 números.
*/

#include <stdio.h>

int main() {
    int i, quadrado;
    long long int soma_total = 0;

    for (i = 1; i <= 100; i++) {
        quadrado = i * i;
        soma_total += quadrado;
        printf("%d -> %d\n", i, quadrado);
    }

    printf("\nSoma total dos quadrados: %lld\n", soma_total);

    return 0;
}
