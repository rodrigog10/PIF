/*
Questão 19. Cálculo do N-ésimo Termo da Sequência de Fibonacci — A sequência de Fibonacci é
dada por: 1, 1, 2, 3, 5, 8, 13, 21, 34, ... onde cada termo a partir do terceiro é a soma dos dois
anteriores. Escreva um programa que solicite ao usuário o número do termo desejado (N) e calcule e
imprima o valor correspondente desse termo, além de listar todos os termos até N.
*/

#include <stdio.h>

int main() {
    int N, i;
    long long int termo1 = 1, termo2 = 1, proximo;

    printf("Digite o numero do termo desejado (N): ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Por favor, insira um valor maior que 0.\n");
        return 0;
    }

    printf("\nSequencia de Fibonacci ate o %d-esimo termo:\n", N);

    if (N == 1) {
        printf("%lld\n", termo1);
        printf("\nO 1-esimo termo e: %lld\n", termo1);
    } else if (N == 2) {
        printf("%lld, %lld\n", termo1, termo2);
        printf("\nO 2-esimo termo e: %lld\n", termo2);
    } else {
        printf("%lld, %lld", termo1, termo2);

        for (i = 3; i <= N; i++) {
            proximo = termo1 + termo2;
            printf(", %lld", proximo);
            termo1 = termo2;
            termo2 = proximo;
        }

        printf("\n\nO %d-esimo termo e: %lld\n", N, termo2);
    }

    return 0;
}
