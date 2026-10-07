/*
Questão 20. Tabela de Caracteres ASCII e Códigos Hexadecimais — Escreva um programa que
utilize um laço for para imprimir a tabela de caracteres da tabela ASCII para os códigos decimais
compreendidos entre 32 e 126 (caracteres imprimíveis). Para cada código, imprima o valor em decimal,
o valor equivalente em hexadecimal (usando o formatador %X) e o próprio caractere visível.
*/

#include <stdio.h>

int main() {
    int i;

    printf("%-10s %-15s %-10s\n", "Decimal", "Hexadecimal", "Caractere");
    printf("----------------------------------------\n");

    for (i = 32; i <= 126; i++) {
        printf("%-10d 0x%-13X %-10c\n", i, i, i);
    }

    return 0;
}
