/*
Questão 28. Sistema de Folha de Pagamento com Menu Contínuo (do-while & switch) —
Desenvolva um programa completo para gerenciamento de folha de pagamento de uma empresa. O
programa deve exibir um menu de opções em um laço do-while contínuo:
1. Reajuste Salarial (Calcula e exibe novo salário: 15% de aumento para salários até R$ 2.000,00 e
10% para salários superiores).
2. Retenção de Imposto de Renda (Calcula desconto: 8% para salários até R$ 3.000,00 e 15% para
salários superiores).
3. Encerrar Programa.
O programa deve validar as opções do menu e só finalizar a execução quando a opção 3 for
expressamente selecionada.
*/

#include <stdio.h>

int main() {
    int opcao;
    double salario, resultado;

    do {
        printf("\n--- MENU FOLHA DE PAGAMENTO ---\n");
        printf("1. Reajuste Salarial\n");
        printf("2. Retencao de Imposto de Renda\n");
        printf("3. Encerrar Programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o salario atual: R$ ");
                scanf("%lf", &salario);
                if (salario <= 2000.00) {
                    resultado = salario * 1.15;
                } else {
                    resultado = salario * 1.10;
                }
                printf("Novo salario reajustado: R$ %.2f\n", resultado);
                break;

            case 2:
                printf("Digite o salario para calculo do IR: R$ ");
                scanf("%lf", &salario);
                if (salario <= 3000.00) {
                    resultado = salario * 0.08;
                } else {
                    resultado = salario * 0.15;
                }
                printf("Valor do desconto de IR: R$ %.2f\n", resultado);
                break;

            case 3:
                printf("Programa encerrado.\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
        }
    } while (opcao != 3);

    return 0;
}
