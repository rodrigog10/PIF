/*
Questão 21. Jogo de Adivinhação com Letras Aleatórias e Dicas (rand()) — Desenvolva um jogo
interativo em C que sorteie uma letra minúscula aleatória entre 'a' e 'z' usando a função rand() % 26 +
'a' da biblioteca <stdlib.h>. O programa deve pedir para o usuário adivinhar a letra. A cada tentativa
errada, o programa deve informar se a letra secreta vem antes ou depois da letra digitada no alfabeto.
Quando o usuário acertar, exiba uma mensagem de parabéns e o total de tentativas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char letra_secreta, palpite;
    int tentativas = 0;

    srand(time(NULL));

    letra_secreta = rand() % 26 + 'a';

    printf("Bem-vindo ao jogo de adivinhacao!\n");
    printf("Eu sorteei uma letra minuscula de 'a' a 'z'. Tente adivinhar!\n\n");

    while (1) {
        printf("Digite seu palpite: ");
        scanf(" %c", &palpite);
        tentativas++;

        if (palpite == letra_secreta) {
            printf("\nParabens! Voce acertou a letra secreta '%c'!\n", letra_secreta);
            printf("Total de tentativas utilizadas: %d\n", tentativas);
            break;
        } else if (palpite < letra_secreta) {
            printf("Dica: A letra secreta vem DEPOIS de '%c' no alfabeto.\n\n", palpite);
        } else {
            printf("Dica: A letra secreta vem ANTES de '%c' no alfabeto.\n\n", palpite);
        }
    }

    return 0;
}
