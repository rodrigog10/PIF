# Respostas Teóricas

## Q05

Não, o programa não está correto. Faltam:
- `#include <stdio.h>` para usar printf()
- `#include <stdlib.h>` para usar system()
- `int` como tipo de retorno da main()
- `return 0;` no final da função

## Q06

**Erros de sintaxe:**
- `int a=1; b=2; c=3:` - b e c não têm tipo declarado, e termina com : em vez de ;
- `printf("0s números são: %d%d%d\n, a, b, c, d);` - string malformada e variável d não declarada

**Erros de lógica:**
- Tentar usar a variável d que não existe

## Q07

a) Quebra de linha + tab + "Bom dia! Shirley."

b) "Você já tomou café? " + quebra de linha

c) Quebra de linha + quebra de linha + "A solução não existe!" + quebra de linha + "Não insista."

d) "Duas" + tab + "linhas" + tab + "de" + tab + "saída" + quebra de linha + "ou" + tab + "uma?"

e) "um" + quebra + "dois" + quebra + "três" + quebra

## Q08

O programa imprime:
- Uma quebra de linha (\n)
- Uma tabulação (\t)
- A string "Primeiro programa" com aspas (\" imprime o caractere aspas literalmente)

## Q09

Os caracteres entre aspas simples são interpretados como seus valores ASCII:
- '\n' = quebra de linha (ASCII 10)
- '\t' = tabulação (ASCII 9)
- '\"' = aspas (ASCII 34)

Saída: quebra de linha, tabulação, aspas seguidas de "Primeiro programa"

## Q10

Alternativa b) Verdadeiro

C é case-sensitive. peso, Peso e PESO são três variáveis diferentes na memória.

## Q11

| Constante | Classificação | Tipo |
|-----------|---------------|------|
| \r | Sequência de escape | char |
| 2130 | Inteira decimal | int |
| -123 | Inteira decimal negativa | int |
| 33.28 | Ponto flutuante | float/double |
| 0XFA | Inteira hexadecimal | int |
| 0101 | Inteira octal | int |
| 2.0e30 | Notação científica | double |
| \xDC | Sequência de escape hex | char |
| '\"' | Caractere | char |
| '\\' | Sequência de escape | char |
| 'F' | Caractere | char |
| 0 | Inteira decimal | int |
| '\0' | Caractere nulo | char |
| "F" | String | char* |
| -4567.89 | Ponto flutuante negativa | double |

## Q12

| Instrução | Status | Justificativa |
|-----------|--------|---------------|
| int a; | Correto | - |
| float b; | Correto | - |
| double float c; | Incorreto | Não se pode combinar double e float |
| unsigned char d; | Correto | - |
| unsigned e; | Correto | Assume unsigned int |
| long float f; | Incorreto | Não existe long float; seria long double |
| long g; | Correto | Assume long int |
| long double h; | Correto | - |

## Q13

Resposta: c)

Headers são arquivos de texto ASCII contendo protótipos de funções, definições de constantes, macros e tipos.

## Q14

Resposta: a)

Instruir o compilador a carregar as definições das funções da biblioteca padrão antes de compilar.

## Q15

Resposta: c)

#include é uma diretiva do pré-processador, executada antes da compilação propriamente dita.

## Q16

Resposta: c)

O pré-processador lê e interpreta as diretivas antes da compilação.

## Q17

Corretas: a), b) e c)

- `printf ( "Primeiro programa" );` ✓
- `printf( "Primeiro programa" );` ✓
- `printf("Primeiro programa");` ✓
- `printf "Primeiro programa" ;` ✗

C ignora espaçamento, mas parênteses são obrigatórios.
