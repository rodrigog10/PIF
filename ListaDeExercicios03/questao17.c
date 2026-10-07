/*
Questão 17. Estatísticas de Turma (Menor, Maior, Média e Contagem) — Faça um programa para
ler uma sequência de notas de alunos (valores reais de 0.0 a 10.0). A entrada de dados deve ser
encerrada quando o usuário digitar a nota '-1.0'. Ao final, o programa deve exibir: a) Total de alunos
avaliados; b) A maior nota da turma; c) A menor nota da turma; d) A média geral da turma.
*/

#include <stdio.h>

int main() {
    double nota, soma = 0.0, maior = -1.0, menor = 11.0, media;
    int total_alunos = 0;

    printf("Digite as notas dos alunos de 0.0 a 10.0 (ou -1.0 para encerrar):\n");

    while (1) {
        printf("Digite a nota: ");
        scanf("%lf", &nota);

        if (nota == -1.0) {
            break;
        }

        if (nota < 0.0 || nota > 10.0) {
            printf("Nota invalida! Insira um valor entre 0.0 e 10.0.\n");
            continue;
        }

        soma += nota;
        total_alunos++;

        if (nota > maior) {
            maior = nota;
        }
        if (nota < menor) {
            menor = nota;
        }
    }

    if (total_alunos > 0) {
        media = soma / total_alunos;
        printf("\n--- Estatisticas da Turma ---\n");
        printf("a) Total de alunos avaliados: %d\n", total_alunos);
        printf("b) Maior nota da turma: %.1f\n", maior);
        printf("c) Menor nota da turma: %.1f\n", menor);
        printf("d) Media geral da turma: %.2f\n", media);
    } else {
        printf("\nNenhuma nota valida foi registrada.\n");
    }

    return 0;
}
