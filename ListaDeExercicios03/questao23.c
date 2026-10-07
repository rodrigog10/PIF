/*
Questão 23. Desenho de Moldura e Quadrado Vazado com Caracteres — Desenvolva um
programa que solicite ao usuário a dimensão do lado de um quadrado L (com L entre 3 e 20). O
programa deve utilizar laços aninhados para desenhar no console um quadrado vazado composto pelo
caractere 'X'. Por exemplo, para L = 5, a saída deve ser:
XXXXX
X X
X X
X X
XXXXX
*/

#include <stdio.h>

int main() {
    int L, i, j;

    printf("Digite o lado do quadrado L (entre 3 e 20): ");
    scanf("%d", &L);

    if (L < 3 || L > 20) {
        printf("Dimensoa invalida! O valor deve estar entre 3 e 20.\n");
        return 0;
    }

    printf("\n");

    for (i = 1; i <= L; i++) {
        for (j = 1; j <= L; j++) {
            if (i == 1 || i == L || j == 1 || j == L) {
                printf("X");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
