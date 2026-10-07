/*
Questão 26. Mapeamento e Soma de Primos em um Intervalo Fechado [A, B] — Desenvolva um
programa que solicite ao usuário dois números inteiros positivos A e B (garantindo A < B). O programa
deve encontrar e listar todos os números primos situados no intervalo fechado [A, B], e ao final exibir a
soma total de todos os primos encontrados nesse intervalo.
*/

#include <stdio.h>

int main() {
    int A, B, i, j, eh_primo;
    long long int soma_primos = 0;

    printf("Digite o valor de A (positivo): ");
    scanf("%d", &A);
    printf("Digite o valor de B (positivo e maior que A): ");
    scanf("%d", &B);

    if (A <= 0 || B <= 0 || A >= B) {
        printf("Valores invalidos! Garanta que ambos sejam positivos e que A < B.\n");
        return 0;
    }

    printf("\nNumeros primos no intervalo [%d, %d]:\n", A, B);

    for (i = A; i <= B; i++) {
        if (i < 2) {
            continue;
        }

        eh_primo = 1;

        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                eh_primo = 0;
                break;
            }
        }

        if (eh_primo) {
            printf("%d ", i);
            soma_primos += i;
        }
    }

    printf("\n\nSoma total dos primos encontrados: %lld\n", soma_primos);

    return 0;
}

