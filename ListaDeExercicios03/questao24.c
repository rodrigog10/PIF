/*
Questão 24. Padrão Visual em X (Diagonais Cruzadas) — Crie um programa em C que solicite uma
dimensão ímpar N (entre 3 e 19). O programa deve utilizar laços aninhados e condicionais lógicas para
desenhar um padrão visual de duas diagonais que se cruzam no centro forming um 'X' com o caractere
'*'. Por exemplo, para N = 5:
*   *
 * *
  *
 * *
*   *
*/

#include <stdio.h>

int main() {
    int N, i, j;

    printf("Digite a dimensao impar N (entre 3 e 19): ");
    scanf("%d", &N);

    if (N < 3 || N > 19 || N % 2 == 0) {
        printf("Dimensao invalida! O valor deve ser um numero impar entre 3 e 19.\n");
        return 0;
    }

    printf("\n");

    for (i = 1; i <= N; i++) {
        for (j = 1; j <= N; j++) {
            if (j == i || j == (N - i + 1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
