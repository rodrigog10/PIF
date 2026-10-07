/*
Questão 10. Geração de Múltiplos com Formatação em Colunas — Desenvolva um programa que
determine e exiba no console os 100 primeiros múltiplos inteiros e positivos de 3 (isto é: 3, 6, 9, 12,
...). A saída deve ser formatada organizadamente em colunas contendo 10 números por linha separados
por tabulação (\t).
*/

#include <stdio.h>

int main() {
    int i, multiplo;

    for (i = 1; i <= 100; i++) {
        multiplo = i * 3;
        printf("%d\t", multiplo);

        if (i % 10 == 0) {
            printf("\n");
        }
    }

    return 0;
}
