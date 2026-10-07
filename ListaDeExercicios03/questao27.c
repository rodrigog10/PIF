/*
Questão 27. Simulador de Caixa Eletrônico (Decomposição de Cédulas) — Escreva um programa
que simule o saque de um caixa eletrônico. O usuário informa o valor do saque em reais (número
inteiro positivo). O programa deve calcular e exibir a menor quantidade de cédulas de R$ 100, R$ 50,
R$ 20, R$ 10, R$ 5 e R$ 2 necessárias para compor o valor. Utilize laços de repetição para efetuar as
subtrações sucessivas.
*/

#include <stdio.h>

int main() {
    int valor;
    int c100 = 0, c50 = 0, c20 = 0, c10 = 0, c5 = 0, c2 = 0;

    printf("Digite o valor do saque (inteiro positivo): R$ ");
    scanf("%d", &valor);

    if (valor <= 0) {
        printf("Valor invalido! O valor deve ser um inteiro positivo.\n");
        return 0;
    }

    if (valor == 1 || valor == 3) {
        printf("Nao e possivel sacar este valor com as cedulas disponiveis (R$ 100, 50, 20, 10, 5, 2).\n");
        return 0;
    }

    if ((valor % 2 != 0) && valor >= 5) {
        c5++;
        valor -= 5;
    }

    while (valor >= 100) {
        c100++;
        valor -= 100;
    }
    while (valor >= 50) {
        c50++;
        valor -= 50;
    }
    while (valor >= 20) {
        c20++;
        valor -= 20;
    }
    while (valor >= 10) {
        c10++;
        valor -= 10;
    }
    while (valor >= 2) {
        c2++;
        valor -= 2;
    }

    printf("\n--- Cedulas Entregues ---\n");
    if (c100 > 0) printf("Cedulas de R$ 100: %d\n", c100);
    if (c50 > 0)  printf("Cedulas de R$ 50: %d\n", c50);
    if (c20 > 0)  printf("Cedulas de R$ 20: %d\n", c20);
    if (c10 > 0)  printf("Cedulas de R$ 10: %d\n", c10);
    if (c5 > 0)   printf("Cedulas de R$ 5: %d\n", c5);
    if (c2 > 0)   printf("Cedulas de R$ 2: %d\n", c2);

    return 0;
}

