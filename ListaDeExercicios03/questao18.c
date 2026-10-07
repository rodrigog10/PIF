/*
Questão 18. Inversão de Dígitos de um Número Inteiro (Algoritmo Numérico) — Elabore um
programa que solicite ao usuário um número inteiro positivo (ex: 12345) e construa um novo número
inteiro com os dígitos em ordem inversa (ex: 54321). Dica: utilize um laço enquanto o número for
maior que zero, extraindo o último dígito com o operador resto (%) e reduzindo o número com a
divisão inteira (/).
*/

#include <stdio.h>

int main() {
    int numero, numero_original, digito;
    int numero_invertido = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Erro: O numero deve ser positivo.\n");
        return 0;
    }

    numero_original = numero;

    while (numero > 0) {
        digito = numero % 10;
        numero_invertido = (numero_invertido * 10) + digito;
        numero = numero / 10;
    }

    printf("\nNumero original: %d\n", numero_original);
    printf("Numero invertido: %d\n", numero_invertido);

    return 0;
}
