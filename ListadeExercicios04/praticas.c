/*
 * Lista Cap. 4 - Questões Práticas (07 a 28)
 * Cada questão está em sua própria função (questao07 ... questao28).
 */

#include <stdio.h>
#include <math.h>

/* ---------- Questão 07: raiz quadrada ou quadrado ---------- */
void questao07(void) {
    double x;
    printf("Digite um número real: ");
    scanf("%lf", &x);

    if (x >= 0)
        printf("Raiz quadrada: %.2f\n", sqrt(x));
    else
        printf("Quadrado: %.2f\n", x * x);
}

/* ---------- Questão 08: ano bissexto ---------- */
void questao08(void) {
    int ano;
    printf("Digite um ano: ");
    scanf("%d", &ano);

    if (ano <= 0) {
        printf("Erro: o ano deve ser um inteiro positivo!\n");
        return;
    }

    if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0))
        printf("%d é bissexto.\n", ano);
    else
        printf("%d não é bissexto.\n", ano);
}

/* ---------- Questão 09: média ponderada ---------- */
void questao09(void) {
    double lab, sem, fin, media;
    printf("Nota do Trabalho de Laboratório: ");
    scanf("%lf", &lab);
    printf("Nota da Avaliação Semestral: ");
    scanf("%lf", &sem);
    printf("Nota do Exame Final: ");
    scanf("%lf", &fin);

    media = (lab * 2 + sem * 3 + fin * 5) / 10.0;
    printf("Média ponderada: %.2f\n", media);

    if (media >= 5.0)
        printf("Situação: Aprovado\n");
    else if (media >= 3.0)
        printf("Situação: Em Recuperação\n");
    else
        printf("Situação: Reprovado\n");
}

/* ---------- Questão 10: paridade e sinal ---------- */
void questao10(void) {
    int n;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("%d é PAR.\n", n);
    else
        printf("%d é ÍMPAR.\n", n);

    if (n > 0)
        printf("%d é POSITIVO.\n", n);
    else if (n < 0)
        printf("%d é NEGATIVO.\n", n);
    else
        printf("%d é ZERO.\n", n);
}

/* ---------- Questão 11: ordenação de três valores ---------- */
void questao11(void) {
    int a, b, c, t;
    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b) { t = a; a = b; b = t; }
    if (b > c) { t = b; b = c; c = t; }
    if (a > b) { t = a; a = b; b = t; }

    printf("Ordem crescente: %d %d %d\n", a, b, c);
}

/* ---------- Questão 12: dia da semana ---------- */
void questao12(void) {
    int dia;
    printf("Digite um número de 1 a 7: ");
    scanf("%d", &dia);

    switch (dia) {
        case 1: printf("Domingo\n");        break;
        case 2: printf("Segunda-feira\n");  break;
        case 3: printf("Terça-feira\n");    break;
        case 4: printf("Quarta-feira\n");   break;
        case 5: printf("Quinta-feira\n");   break;
        case 6: printf("Sexta-feira\n");    break;
        case 7: printf("Sábado\n");         break;
        default: printf("Erro: Opção Inválida!\n");
    }
}

/* ---------- Questão 13: calculadora com menu ---------- */
void questao13(void) {
    char op;
    double a, b;

    printf("Escolha a operação:\n");
    printf("  +  Soma\n  -  Subtração\n  *  Multiplicação\n  /  Divisão\n  ^  Potenciação\n");
    printf("Operação: ");
    scanf(" %c", &op);

    printf("Primeiro operando: ");
    scanf("%lf", &a);
    printf("Segundo operando: ");
    scanf("%lf", &b);

    switch (op) {
        case '+': printf("Resultado: %.2f\n", a + b); break;
        case '-': printf("Resultado: %.2f\n", a - b); break;
        case '*': printf("Resultado: %.2f\n", a * b); break;
        case '/':
            if (b == 0)
                printf("Erro: divisão por zero!\n");
            else
                printf("Resultado: %.2f\n", a / b);
            break;
        case '^': printf("Resultado: %.2f\n", pow(a, b)); break;
        default:  printf("Erro: operação inválida!\n");
    }
}

/* ---------- Questão 14: conceito por nota e faltas ---------- */
void questao14(void) {
    float nota;
    int faltas;
    char conceito;

    printf("Digite a nota: ");
    scanf("%f", &nota);
    printf("Digite o número de faltas: ");
    scanf("%d", &faltas);

    if (nota >= 9.0f)
        conceito = (faltas <= 20) ? 'A' : 'B';
    else if (nota >= 7.5f)
        conceito = (faltas <= 20) ? 'B' : 'C';
    else if (nota >= 5.0f)
        conceito = (faltas <= 20) ? 'C' : 'D';
    else if (nota >= 4.0f)
        conceito = (faltas <= 20) ? 'D' : 'E';
    else
        conceito = 'E';

    printf("Conceito: %c\n", conceito);
}

/* ---------- Questão 15: elegibilidade para aposentadoria ---------- */
void questao15(void) {
    int idade, tempo;
    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite o tempo de serviço (anos): ");
    scanf("%d", &tempo);

    if (idade >= 65 || tempo >= 30 || (idade >= 60 && tempo >= 25))
        printf("O trabalhador PODE se aposentar.\n");
    else
        printf("O trabalhador NÃO pode se aposentar.\n");
}

/* ---------- Questão 16: eficiência de combustível ---------- */
void questao16(void) {
    float km, litros, consumo;
    printf("Distância percorrida (km): ");
    scanf("%f", &km);
    printf("Litros consumidos: ");
    scanf("%f", &litros);

    if (litros <= 0) {
        printf("Erro: a quantidade de litros deve ser maior que zero!\n");
        return;
    }

    consumo = km / litros;
    printf("Consumo: %.2f km/l\n", consumo);

    if (consumo < 8.0f)
        printf("Venda o carro!\n");
    else if (consumo <= 14.0f)
        printf("Econômico!\n");
    else
        printf("Super econômico!\n");
}

/* ---------- Questão 17: pagamento e comissão ---------- */
void questao17(void) {
    double valor, final, parcela, comissao;
    int opcao;

    printf("Valor total da compra: ");
    scanf("%lf", &valor);
    printf("Forma de pagamento (1 = À Vista com 10%% de desconto; 2 = Parcelado em 3x sem juros): ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        final = valor * 0.90;
        comissao = final * 0.05;
        printf("Valor final à vista: R$ %.2f\n", final);
    } else if (opcao == 2) {
        parcela = valor / 3.0;
        comissao = valor * 0.05;
        printf("Valor de cada parcela (3x): R$ %.2f\n", parcela);
    } else {
        printf("Erro: opção de pagamento inválida!\n");
        return;
    }

    printf("Comissão do vendedor: R$ %.2f\n", comissao);
}

/* ---------- Questão 18: conversor de temperaturas ---------- */
void questao18(void) {
    int opcao;
    double temp;

    printf("1. Celsius para Fahrenheit\n");
    printf("2. Celsius para Kelvin\n");
    printf("3. Fahrenheit para Celsius\n");
    printf("4. Kelvin para Celsius\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Temperatura em Celsius: ");
            scanf("%lf", &temp);
            printf("Resultado: %.2f °F\n", temp * 1.8 + 32);
            break;
        case 2:
            printf("Temperatura em Celsius: ");
            scanf("%lf", &temp);
            printf("Resultado: %.2f K\n", temp + 273.15);
            break;
        case 3:
            printf("Temperatura em Fahrenheit: ");
            scanf("%lf", &temp);
            printf("Resultado: %.2f °C\n", (temp - 32) / 1.8);
            break;
        case 4:
            printf("Temperatura em Kelvin: ");
            scanf("%lf", &temp);
            printf("Resultado: %.2f °C\n", temp - 273.15);
            break;
        default:
            printf("Erro: opção inválida!\n");
    }
}

/* ---------- Questão 19: tipo de triângulo ---------- */
void questao19(void) {
    double a, b, c;
    printf("Digite os três lados: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a < b + c && b < a + c && c < a + b) {
        if (a == b && b == c)
            printf("Triângulo EQUILÁTERO.\n");
        else if (a == b || b == c || a == c)
            printf("Triângulo ISÓSCELES.\n");
        else
            printf("Triângulo ESCALENO.\n");
    } else {
        printf("Erro: Os lados fornecidos não formam um triângulo!\n");
    }
}

/* ---------- Questão 20: equação do segundo grau ---------- */
void questao20(void) {
    double a, b, c, delta, x1, x2;
    printf("Digite a, b e c (a != 0): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("Erro: 'a' não pode ser zero!\n");
        return;
    }

    delta = b * b - 4 * a * c;

    if (delta < 0)
        printf("A equação não possui raízes reais.\n");
    else if (delta == 0)
        printf("Raiz única: x = %.2f\n", -b / (2 * a));
    else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("x1 = %.2f\nx2 = %.2f\n", x1, x2);
    }
}

/* ---------- Questão 21: reajuste salarial ---------- */
void questao21(void) {
    double salario, percentual, aumento;
    int cargo;

    printf("Salário atual: R$ ");
    scanf("%lf", &salario);
    printf("Código do cargo (1 = Técnico; 2 = Gerente; 3 = Demais Cargos): ");
    scanf("%d", &cargo);

    switch (cargo) {
        case 1:
            percentual = (salario <= 3000) ? 0.15 : 0.10;
            break;
        case 2:
            percentual = (salario <= 5000) ? 0.10 : 0.05;
            break;
        case 3:
            percentual = 0.08;
            break;
        default:
            printf("Erro: código de cargo inválido!\n");
            return;
    }

    aumento = salario * percentual;
    printf("Aumento: R$ %.2f\n", aumento);
    printf("Novo salário: R$ %.2f\n", salario + aumento);
}

/* ---------- Questão 22: impostos estaduais ---------- */
void questao22(void) {
    double valor, aliquota;
    int estado;

    printf("Valor do produto: R$ ");
    scanf("%lf", &valor);
    printf("Estado de destino (1 = MG, 2 = SP, 3 = RJ, 4 = MS): ");
    scanf("%d", &estado);

    switch (estado) {
        case 1: aliquota = 0.07; break;
        case 2: aliquota = 0.12; break;
        case 3: aliquota = 0.15; break;
        case 4: aliquota = 0.08; break;
        default:
            printf("Erro: código de estado inválido!\n");
            return;
    }

    printf("Preço final com imposto: R$ %.2f\n", valor * (1 + aliquota));
}

/* ---------- Questão 23: data por extenso ---------- */
void questao23(void) {
    int dia, mes, ano;
    printf("Digite a data (dia mês ano): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    if (mes < 1 || mes > 12 || dia < 1 || dia > 31) {
        printf("Erro: data inválida!\n");
        return;
    }

    printf("%d de ", dia);
    switch (mes) {
        case 1:  printf("janeiro");   break;
        case 2:  printf("fevereiro"); break;
        case 3:  printf("março");     break;
        case 4:  printf("abril");     break;
        case 5:  printf("maio");      break;
        case 6:  printf("junho");     break;
        case 7:  printf("julho");     break;
        case 8:  printf("agosto");    break;
        case 9:  printf("setembro");  break;
        case 10: printf("outubro");   break;
        case 11: printf("novembro");  break;
        case 12: printf("dezembro");  break;
    }
    printf(" de %d\n", ano);
}

/* ---------- Questão 24: classificação de triângulo por ângulos ---------- */
void questao24(void) {
    int a, b, c;
    printf("Digite os três ângulos internos: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b + c != 180) {
        printf("Erro: a soma dos ângulos deve ser exatamente 180°!\n");
        return;
    }

    if (a == 90 || b == 90 || c == 90)
        printf("Triângulo RETÂNGULO.\n");
    else if (a > 90 || b > 90 || c > 90)
        printf("Triângulo OBTUSÂNGULO.\n");
    else
        printf("Triângulo ACUTÂNGULO.\n");
}

/* ---------- Questão 25: troco com menor quantidade de cédulas ---------- */
void questao25(void) {
    int total, pago, troco, n;

    printf("Valor total a pagar: R$ ");
    scanf("%d", &total);
    printf("Valor entregue pelo cliente: R$ ");
    scanf("%d", &pago);

    if (total <= 0 || pago <= 0) {
        printf("Erro: os valores devem ser inteiros positivos!\n");
        return;
    }
    if (pago < total) {
        printf("Erro: valor entregue insuficiente!\n");
        return;
    }

    troco = pago - total;
    printf("Troco: R$ %d\n", troco);

    if (troco == 0) {
        printf("Não há troco a devolver.\n");
        return;
    }

    n = troco / 100; if (n > 0) printf("R$ 100: %d cédula(s)\n", n); troco %= 100;
    n = troco / 50;  if (n > 0) printf("R$ 50: %d cédula(s)\n", n);  troco %= 50;
    n = troco / 20;  if (n > 0) printf("R$ 20: %d cédula(s)\n", n);  troco %= 20;
    n = troco / 10;  if (n > 0) printf("R$ 10: %d cédula(s)\n", n);  troco %= 10;
    n = troco / 5;   if (n > 0) printf("R$ 5: %d cédula(s)\n", n);   troco %= 5;
    n = troco / 2;   if (n > 0) printf("R$ 2: %d cédula(s)\n", n);   troco %= 2;

    if (troco != 0)
        printf("Atenção: sobrou R$ %d, que não pode ser formado com as cédulas disponíveis.\n", troco);
}

/* ---------- Questão 26: dias do mês e fevereiro bissexto ---------- */
void questao26(void) {
    int mes, ano, dias;
    const char *nomes[] = {"", "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
                           "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

    printf("Número do mês (1 a 12): ");
    scanf("%d", &mes);
    printf("Ano corrente: ");
    scanf("%d", &ano);

    if (mes < 1 || mes > 12) {
        printf("Erro: mês inválido!\n");
        return;
    }

    if (mes == 2) {
        if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0))
            dias = 29;
        else
            dias = 28;
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        dias = 30;
    } else {
        dias = 31;
    }

    printf("%s possui %d dias", nomes[mes], dias);
    if (mes == 2)
        printf(" (%s)", dias == 29 ? "ano bissexto" : "ano não bissexto");
    printf(".\n");
}

/* ---------- Questão 27: tarifador de estacionamento ---------- */
void questao27(void) {
    int horas;
    double valor = 0.0;

    printf("Número de horas inteiras: ");
    scanf("%d", &horas);

    if (horas <= 0) {
        printf("Erro: o tempo deve ser de pelo menos 1 hora!\n");
        return;
    }

    if (horas <= 2)
        valor = horas * 2.00;
    else if (horas <= 4)
        valor = 2 * 2.00 + (horas - 2) * 2.50;
    else
        valor = 2 * 2.00 + 2 * 2.50 + (horas - 4) * 3.00;

    printf("Tempo total: %d hora(s)\n", horas);
    printf("Valor final: R$ %.2f\n", valor);
}

/* ---------- Questão 28: URA bancária ---------- */
void questao28(void) {
    int opcao;

    printf("=== Atendimento Automático ===\n");
    printf("1 - Consultar Saldo\n");
    printf("2 - Efetuar Extrato\n");
    printf("3 - Fazer Transferência\n");
    printf("4 - Falar com Atendente\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: printf("Direcionando para consulta de saldo...\n");        break;
        case 2: printf("Direcionando para o extrato...\n");                break;
        case 3: printf("Direcionando para transferências...\n");           break;
        case 4: printf("Aguarde, direcionando para um atendente...\n");    break;
        default: printf("Opção inválida! Tente novamente.\n");
    }
}

/* ---------- Menu principal ---------- */
int main(void) {
    int escolha;

    do {
        printf("\n===== Lista Cap. 4 - Questões Práticas =====\n");
        printf("Digite o número da questão (7 a 28) ou 0 para sair: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 7:  questao07(); break;
            case 8:  questao08(); break;
            case 9:  questao09(); break;
            case 10: questao10(); break;
            case 11: questao11(); break;
            case 12: questao12(); break;
            case 13: questao13(); break;
            case 14: questao14(); break;
            case 15: questao15(); break;
            case 16: questao16(); break;
            case 17: questao17(); break;
            case 18: questao18(); break;
            case 19: questao19(); break;
            case 20: questao20(); break;
            case 21: questao21(); break;
            case 22: questao22(); break;
            case 23: questao23(); break;
            case 24: questao24(); break;
            case 25: questao25(); break;
            case 26: questao26(); break;
            case 27: questao27(); break;
            case 28: questao28(); break;
            case 0:  printf("Encerrando.\n"); break;
            default: printf("Questão inexistente.\n");
        }
    } while (escolha != 0);

    return 0;
}
