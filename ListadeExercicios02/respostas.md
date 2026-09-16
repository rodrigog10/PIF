# Respostas: Lista Cap. 2
## Programação Imperativa e Funcional

> **Repositório:** utilizar o mesmo repositório do GitHub criado para a Lista 1.  
> **Pasta:** `/Lista-Cap2`  
> **Arquivo:** `respostas.md`

---

# PARTE I: QUESTÕES TEÓRICAS E ANALÍTICAS

## Questão 01: Truncamento de Tipos e Coerção Implícita

### a)
O valor exibido será:

```text
O valor armazenado é: 2
```

### b)
A variável `valor_inteiro` é do tipo `int`, mas recebe o valor `2.97`, que é um número de ponto flutuante. Na atribuição, a parte decimal é descartada.

Isso acontece porque o C faz uma **conversão implícita de tipos** e descarta a parte decimal.

### c)
Para manter a precisão, o programador pode utilizar `float` ou `double`. Caso seja necessário arredondar o valor, pode utilizar funções apropriadas da biblioteca `<math.h>`, como `round()`.

---

## Questão 02: Entrada Standard de Caracteres vs. Bibliotecas Legadas

### a)
A biblioteca `<conio.h>` não faz parte do padrão ANSI C. Funções como `getch()` e `getche()` dependem de implementações específicas e, por isso, não são portáveis para sistemas modernos como Linux e macOS.

### b)
Na biblioteca padrão `<stdio.h>`, podemos usar:

- `getchar()`: lê um caractere da entrada padrão.
- `putchar()`: escreve um caractere na saída padrão.

### c)

```c
#include <stdio.h>

int main() {
    int caractere;

    do {
        caractere = getchar();
    } while (caractere == '\n');

    printf("Caractere lido: %c\n", caractere);

    return 0;
}
```

---

## Questão 03: Formatação de Saída em Bases Numéricas e ASCII

```c
#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("Decimal: %d | Hexadecimal: %x | Octal: %o | ASCII: %c\n",
           numero, numero, numero, numero);

    return 0;
}
```

---

## Questão 04: Operadores de Atribuição Composta e Precedência

Estado inicial:

```text
a = 1, b = 2, c = 3, d = 4
```

### 1. `a += b + c`

```text
b + c = 2 + 3 = 5
a = 1 + 5 = 6
```

Estado:

```text
a = 6, b = 2, c = 3, d = 4
```

### 2. `b *= c = d + 2`

A expressão é avaliada da direita para a esquerda nas atribuições:

```text
d + 2 = 4 + 2 = 6
c = 6
b = 2 * 6 = 12
```

Estado:

```text
a = 6, b = 12, c = 6, d = 4
```

### 3. `d %= a + a + a`

```text
a + a + a = 6 + 6 + 6 = 18
d = 4 % 18 = 4
```

Estado:

```text
a = 6, b = 12, c = 6, d = 4
```

### 4. `d -= c -= b -= a`

As atribuições compostas são associativas da direita para a esquerda:

```text
b -= a
b = 12 - 6 = 6

c -= b
c = 6 - 6 = 0

d -= c
d = 4 - 0 = 4
```

Estado:

```text
a = 6, b = 6, c = 0, d = 4
```

### 5. `a += b += c += 7`

```text
c += 7
c = 0 + 7 = 7

b += c
b = 6 + 7 = 13

a += b
a = 6 + 13 = 19
```

### Resultado final

```text
a = 19
b = 13
c = 7
d = 4
```

---

## Questão 05: Avaliação de Expressões Lógicas e Relacionais

Valores:

```c
int i = 1, j = 2, k = 3, n = 2;
float x = 3.3, y = 4.4;
```

### a)

```text
i < j + 3
1 < 5 → 1
```

**Resultado: 1**

### b)

```text
2 * i - 7 <= j - 8
2 - 7 <= 2 - 8
-5 <= -6 → 0
```

**Resultado: 0**

### c)

```text
-x + y >= 2.0 * y
-3.3 + 4.4 >= 8.8
1.1 >= 8.8 → 0
```

**Resultado: 0**

### d)

```text
x == y
3.3 == 4.4 → 0
```

**Resultado: 0**

### e)

```text
!(n - j)
!(2 - 2)
!0 → 1
```

**Resultado: 1**

### f)

```text
!n - j
!2 - 2
0 - 2 = -2
```

**Resultado da expressão: -2**

> Observação: se esse valor fosse usado posteriormente em um contexto lógico, qualquer valor diferente de zero seria considerado verdadeiro.

### g)

```text
i && j && k
1 && 2 && 3 → 1
```

**Resultado: 1**

### h)

```text
i || j - 3 && k
1 || ((2 - 3) && 3)
1 || (-1 && 3)
1
```

**Resultado: 1**

### i)

```text
i < j && 2 >= k
1 < 2 && 2 >= 3
1 && 0 → 0
```

**Resultado: 0**

### j)

```text
i == 2 || j == 4 || k == 5
0 || 0 || 0 → 0
```

**Resultado: 0**

---

## Questão 06: Comportamento e Precedência dos Incrementos

### a) Trecho A

```c
int n = 5;
int x = ++n;
```

O `++n` é um incremento **prefixado**. Primeiro `n` é incrementado e depois seu novo valor é utilizado na atribuição.

```text
n = 6
x = 6
```

Saída:

```text
Trecho A: n = 6, x = 6
```

### Trecho B

```c
int m = 5;
int y = m++;
```

O `m++` é um incremento **pós-fixado**. Primeiro o valor atual de `m` é utilizado e depois `m` é incrementado.

```text
m = 6
y = 5
```

Saída:

```text
Trecho B: m = 6, y = 5
```

### b)

A instrução:

```c
printf("%d\t%d\t%d\n", n, n+1, n++);
```

modifica `n` por meio de `n++` enquanto também acessa `n` nos outros argumentos da mesma chamada.

A ordem de avaliação dos argumentos de uma função não deve ser presumida dessa forma. Como há uma modificação e outros acessos a `n` na mesma expressão sem uma sequência adequada, o comportamento é **indefinido**.

Uma forma segura é separar a modificação em uma instrução diferente.

---

# PARTE II: QUESTÕES PRÁTICAS DE IMPLEMENTAÇÃO

> **Importante:** conforme as regras da atividade, cada questão prática deve ser salva em um arquivo `.c` individual dentro da pasta `/Lista-Cap2`, por exemplo `exercicio07.c`, `exercicio08.c` etc.

## Questão 07: Leitura e Inversão Formatada de Datas

```c
#include <stdio.h>

int main() {
    int dia, mes, ano;

    printf("Digite uma data (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    printf("%04d/%02d/%02d\n", ano, mes, dia);

    return 0;
}
```

---

## Questão 08: Potências e Divisão com Ponto Flutuante

```c
#include <stdio.h>

int main() {
    int numero;
    int quadrado;
    double decima_parte;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    quadrado = numero * numero;
    decima_parte = numero / 10.0;

    printf("Quadrado: %d\n", quadrado);
    printf("Decima parte: %.2f\n", decima_parte);

    return 0;
}
```

Aqui foi usado `10.0` para que a divisão seja feita como ponto flutuante, e não como divisão inteira.

---

## Questão 09: Operações Aritméticas Básicas e Cast de Tipos

```c
#include <stdio.h>

int main() {
    int a, b;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    printf("Soma: %d\n", a + b);
    printf("Subtracao: %d\n", a - b);
    printf("Multiplicacao: %d\n", a * b);

    if (b != 0) {
        printf("Divisao real: %.2f\n", (double)a / b);
    } else {
        printf("Nao e possivel dividir por zero.\n");
    }

    /*
     * Para evitar matematicamente a divisao por zero,
     * o divisor deve ser diferente de zero antes da operacao.
     */

    return 0;
}
```

---

## Questão 10: Conversão de Temperatura de Celsius

```c
#include <stdio.h>

int main() {
    double celsius, fahrenheit, kelvin;

    printf("Digite a temperatura em Celsius: ");
    scanf("%lf", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    kelvin = celsius + 273.15;

    printf("Fahrenheit: %.2f\n", fahrenheit);
    printf("Kelvin: %.2f\n", kelvin);

    return 0;
}
```

---

## Questão 11: Conversor de Ângulos de Graus para Radianos

```c
#include <stdio.h>

int main() {
    const double PI = 3.141593;
    double graus, radianos;

    printf("Digite o angulo em graus: ");
    scanf("%lf", &graus);

    radianos = graus * (PI / 180.0);

    printf("Radianos: %.6f\n", radianos);

    return 0;
}
```

---

## Questão 12: Operadores Unários de Antecessor e Sucessor

```c
#include <stdio.h>

int main() {
    int numero;
    int antecessor, sucessor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    antecessor = numero;
    --antecessor;

    sucessor = numero;
    ++sucessor;

    printf("Antecessor: %d\n", antecessor);
    printf("Sucessor: %d\n", sucessor);

    return 0;
}
```

O operador `--` diminui o valor em uma unidade, enquanto `++` aumenta o valor em uma unidade.

---

## Questão 13: Cálculo de Áreas de Figuras Planas Básicas

```c
#include <stdio.h>

int main() {
    double lado;
    double base_retangulo, altura_retangulo;
    double base_triangulo, altura_triangulo;

    printf("Digite o lado do quadrado: ");
    scanf("%lf", &lado);

    printf("Digite a base e a altura do retangulo: ");
    scanf("%lf %lf", &base_retangulo, &altura_retangulo);

    printf("Digite a base e a altura do triangulo retangulo: ");
    scanf("%lf %lf", &base_triangulo, &altura_triangulo);

    printf("Area do quadrado: %.2f\n", lado * lado);
    printf("Area do retangulo: %.2f\n",
           base_retangulo * altura_retangulo);
    printf("Area do triangulo retangulo: %.2f\n",
           (base_triangulo * altura_triangulo) / 2.0);

    return 0;
}
```

---

## Questão 14: Fórmula de Heron

```c
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, p, area;

    printf("Digite os tres lados do triangulo: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    p = (a + b + c) / 2.0;

    area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("Area do triangulo: %.2f\n", area);

    return 0;
}
```

No GCC, a biblioteca matemática pode ser vinculada com:

```bash
gcc exercicio14.c -o exercicio14 -lm
```

---

## Questão 15: Cálculo de Média Aritmética Simples e Ponderada

```c
#include <stdio.h>

int main() {
    double n1, n2, n3, n4;
    double media_simples, media_ponderada;

    printf("Digite as quatro notas: ");
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    media_simples = (n1 + n2 + n3 + n4) / 4.0;

    media_ponderada =
        (n1 * 1.0 + n2 * 1.0 + n3 * 2.0 + n4 * 2.0) / 6.0;

    printf("Media simples: %.2f\n", media_simples);
    printf("Media ponderada: %.2f\n", media_ponderada);

    return 0;
}
```

---

## Questão 16: Quantidade de Degraus em uma Escada

```c
#include <stdio.h>
#include <math.h>

int main() {
    double altura_degrau_cm;
    double altura_total_m;
    double altura_total_cm;
    int degraus;

    printf("Digite a altura de cada degrau em cm: ");
    scanf("%lf", &altura_degrau_cm);

    printf("Digite a altura total desejada em metros: ");
    scanf("%lf", &altura_total_m);

    altura_total_cm = altura_total_m * 100.0;

    degraus = (int)ceil(altura_total_cm / altura_degrau_cm);

    printf("Numero minimo de degraus: %d\n", degraus);

    return 0;
}
```

---

## Questão 17: Geometria do Círculo com Constantes

```c
#include <stdio.h>

int main() {
    const double PI = 3.141593;
    double raio;
    double area, circunferencia;

    printf("Digite o raio do circulo: ");
    scanf("%lf", &raio);

    area = PI * raio * raio;
    circunferencia = 2.0 * PI * raio;

    printf("Area: %.2f\n", area);
    printf("Circunferencia: %.2f\n", circunferencia);

    return 0;
}
```

---

## Questão 18: Geometria da Esfera e Frações de Ponto Flutuante

```c
#include <stdio.h>

int main() {
    const double PI = 3.141593;
    double raio;
    double area, volume;

    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    area = 4.0 * PI * raio * raio;
    volume = (4.0 / 3.0) * PI * raio * raio * raio;

    printf("Area da superficie: %.2f\n", area);
    printf("Volume: %.2f\n", volume);

    return 0;
}
```

Foi usado `4.0 / 3.0` para evitar o truncamento da divisão inteira `4 / 3`.

---

## Questão 19: Cálculo de Salário Líquido

```c
#include <stdio.h>

int main() {
    int dias;
    double bruto, imposto, liquido;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias);

    bruto = dias * 30.0;
    imposto = bruto * 0.08;
    liquido = bruto - imposto;

    printf("Valor bruto: R$ %.2f\n", bruto);
    printf("Valor liquido: R$ %.2f\n", liquido);

    return 0;
}
```

---

## Questão 20: Teorema de Pitágoras e a Hipotenusa

```c
#include <stdio.h>
#include <math.h>

int main() {
    double lado_a, lado_b, hipotenusa;

    printf("Digite o primeiro cateto: ");
    scanf("%lf", &lado_a);

    printf("Digite o segundo cateto: ");
    scanf("%lf", &lado_b);

    hipotenusa = sqrt(lado_a * lado_a + lado_b * lado_b);

    printf("Hipotenusa: %.2f\n", hipotenusa);

    return 0;
}
```

No GCC:

```bash
gcc exercicio20.c -o exercicio20 -lm
```

---

## Questão 21: Leitura de Caractere e Exibição de seu Código ASCII

```c
#include <stdio.h>

int main() {
    char caractere;

    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    /*
     * O valor inteiro representa o codigo numerico associado
     * ao caractere na tabela ASCII.
     */

    printf("Caractere: %c\n", caractere);
    printf("Codigo ASCII: %d\n", (unsigned char)caractere);

    return 0;
}
```

---

## Questão 22: Conversão de Caixa Alta para Baixa via ASCII

```c
#include <stdio.h>

int main() {
    char letra;

    printf("Digite uma letra maiuscula: ");
    scanf(" %c", &letra);

    letra = letra + ('a' - 'A');

    printf("Letra minuscula: %c\n", letra);

    return 0;
}
```

A diferença entre `'A'` e `'a'` na tabela ASCII é de 32 posições.

---

## Questão 23: Cálculo de Horário de Término de Experimento

```c
#include <stdio.h>

int main() {
    int horas, minutos, segundos;
    int duracao;
    int inicio_total, fim_total;
    int hora_final, minuto_final, segundo_final;

    printf("Digite o horario de inicio (hora minuto segundo): ");
    scanf("%d %d %d", &horas, &minutos, &segundos);

    printf("Digite a duracao em segundos: ");
    scanf("%d", &duracao);

    inicio_total = horas * 3600 + minutos * 60 + segundos;
    fim_total = (inicio_total + duracao) % (24 * 3600);

    hora_final = fim_total / 3600;
    fim_total %= 3600;

    minuto_final = fim_total / 60;
    segundo_final = fim_total % 60;

    printf("Horario de termino: %02d:%02d:%02d\n",
           hora_final, minuto_final, segundo_final);

    return 0;
}
```

---

## Questão 24: Conversor de Velocidade de km/h para m/s

```c
#include <stdio.h>

int main() {
    double kmh, ms;

    printf("Digite a velocidade em km/h: ");
    scanf("%lf", &kmh);

    ms = kmh / 3.6;

    printf("Velocidade em m/s: %.2f\n", ms);

    return 0;
}
```

---

## Questão 25: Salário Líquido com Gratificação e Tributação

```c
#include <stdio.h>

int main() {
    double salario_base;
    double gratificacao;
    double imposto;
    double salario_liquido;

    printf("Digite o salario-base: ");
    scanf("%lf", &salario_base);

    gratificacao = salario_base * 0.05;
    imposto = salario_base * 0.07;

    salario_liquido = salario_base + gratificacao - imposto;

    printf("Gratificacao: R$ %.2f\n", gratificacao);
    printf("Imposto: R$ %.2f\n", imposto);
    printf("Salario liquido: R$ %.2f\n", salario_liquido);

    return 0;
}
```

Matematicamente:

```text
salario_liquido = salario_base + 5% - 7%
salario_liquido = salario_base * 1.05 - salario_base * 0.07
salario_liquido = salario_base * 0.98
```

---

## Questão 26: Orçamento para Cercamento Perimetral

```c
#include <stdio.h>

int main() {
    double comprimento, largura, preco;
    double perimetro, metros_arame, custo;

    printf("Digite o comprimento do terreno em metros: ");
    scanf("%lf", &comprimento);

    printf("Digite a largura do terreno em metros: ");
    scanf("%lf", &largura);

    printf("Digite o preco por metro de arame: ");
    scanf("%lf", &preco);

    perimetro = 2.0 * (comprimento + largura);
    metros_arame = perimetro * 3.0;
    custo = metros_arame * preco;

    printf("Metros de arame: %.2f\n", metros_arame);
    printf("Custo total: R$ %.2f\n", custo);

    return 0;
}
```

---

## Questão 27: Geração de Valores Aleatórios via Resto de Divisão

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int dado1, dado2, dado3;

    srand(time(NULL));

    dado1 = rand() % 6 + 1;
    dado2 = rand() % 6 + 1;
    dado3 = rand() % 6 + 1;

    printf("Dado 1: %d\n", dado1);
    printf("Dado 2: %d\n", dado2);
    printf("Dado 3: %d\n", dado3);

    return 0;
}
```

A expressão `rand() % 6 + 1` produz valores inteiros de `1` a `6`.

---

## Questão 28: Cálculo de Salário Anual com Imposto Progressivo

```c
#include <stdio.h>

int main() {
    double horas_normais, horas_extras;
    double salario_bruto;
    double imposto;
    double salario_liquido;

    printf("Digite o total de horas normais trabalhadas no ano: ");
    scanf("%lf", &horas_normais);

    printf("Digite o total de horas extras trabalhadas no ano: ");
    scanf("%lf", &horas_extras);

    salario_bruto = (horas_normais * 10.0) +
                    (horas_extras * 15.0);

    imposto = (salario_bruto > 12000.0)
                  ? (salario_bruto - 12000.0) * 0.10
                  : 0.0;

    salario_liquido = salario_bruto - imposto;

    printf("Salario anual bruto: R$ %.2f\n", salario_bruto);
    printf("Imposto: R$ %.2f\n", imposto);
    printf("Salario anual liquido: R$ %.2f\n", salario_liquido);

    return 0;
}
```

A lógica usada para calcular o imposto é:

```text
se salario_bruto > 12000:
    imposto = (salario_bruto - 12000) * 10%
caso contrario:
    imposto = 0
```

---

# Estrutura de entrega

A estrutura esperada do repositório é:

```text
seu-repositorio/
├── ... arquivos da Lista 1 ...
│
└── Lista-Cap2/
    ├── respostas.md
    ├── exercicio07.c
    ├── exercicio08.c
    ├── exercicio09.c
    ├── exercicio10.c
    ├── exercicio11.c
    ├── exercicio12.c
    ├── exercicio13.c
    ├── exercicio14.c
    ├── exercicio15.c
    ├── exercicio16.c
    ├── exercicio17.c
    ├── exercicio18.c
    ├── exercicio19.c
    ├── exercicio20.c
    ├── exercicio21.c
    ├── exercicio22.c
    ├── exercicio23.c
    ├── exercicio24.c
    ├── exercicio25.c
    ├── exercicio26.c
    ├── exercicio27.c
    └── exercicio28.c
```

**Observação:** `respostas.md` contém as respostas teóricas e também os códigos das questões práticas como referência. Para a entrega, os códigos das questões práticas devem ser colocados nos respectivos arquivos `.c`, diretamente dentro de `/Lista-Cap2`, conforme as regras da atividade.
