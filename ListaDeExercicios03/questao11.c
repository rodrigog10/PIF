/*
Questão 11. Intervalo Numérico Dinâmico (Crescente e Decrescente) — Escreva um programa que
leia dois números inteiros quaisquer, A e B, fornecidos pelo usuário. O programa deve imprimir todos
os números inteiros situados no intervalo fechado entre A e B. Se A for menor ou igual a B, a
impressão deve ser em ordem crescente; caso A seja maior que B, a impressão deve ser em ordem
decrescente.
*/

#include <stdio.h>

int main() {
    int A, B, i;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    printf("\nIntervalo fechado entre %d e %d:\n", A, B);

    if (A <= B) {
        for (i = A; i <= B; i++) {
            printf("%d ", i);
        }
    } else {
        for (i = A; i >= B; i--) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
