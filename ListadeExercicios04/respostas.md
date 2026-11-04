# Lista Cap. 4 - Respostas Teóricas (Questões 01 a 06)

Cesar School | Programação Imperativa e Funcional

---

## Questão 01 - Expressões Condicionais e Atribuição vs. Igualdade

**a)** `if (x = 0)` não compara `x` com zero: ele **atribui** 0 a `x`. A expressão de atribuição tem como valor o valor atribuído, que é 0. Como 0 é falso, o bloco `else` (se existir) é executado, o bloco do `if` é ignorado, e `x` passa a valer 0, perdendo o valor anterior.

**b)** Em C não existe tipo booleano nativo (antes do C99 e, mesmo com `<stdbool.h>`, o resultado é um inteiro). Qualquer expressão escalar é avaliada assim:
- valor igual a 0 (inteiro ou real 0.0) é **falso**;
- qualquer valor diferente de 0 é **verdadeiro**.

**c)** `if (x = -5)` atribui -5 a `x`. A expressão resulta em -5, que é diferente de 0, portanto é **verdadeira**. O bloco associado **será executado**, e `x` terminará com o valor -5. Isso segue o padrão ANSI C, em que qualquer valor não nulo é considerado verdadeiro.

---

## Questão 02 - Associação do else e Aninhamento

**a)** A saída será:

```
Opção B
```

`x > 10` é verdadeiro, então o `if` externo executa seu corpo. Dentro dele, `y > 10` é falso (y = 5). A cláusula `else` pertence ao `if` interno, então "Opção B" é impressa. "Opção A" não aparece porque sua condição é falsa.

**b)** Regra: o `else` é associado ao **`if` mais próximo ainda não pareado**, dentro do mesmo bloco. Sem chaves, a indentação não tem efeito sobre a associação.

**c)** Versão com chaves para que "Opção B" seja impressa apenas quando `x <= 10`:

```c
if (x > 10) {
    if (y > 10)
        printf("Opção A\n");
} else {
    printf("Opção B\n");
}
```

---

## Questão 03 - Operador Ternário vs. if-else

**a)** A expressão `(media >= 7.0) ? 'A' : 'R'` avalia a condição. Se for verdadeira, o resultado é `'A'`; caso contrário, é `'R'`. Esse resultado é atribuído a `situacao`. Com `media = 6.8`, a condição é falsa, então `situacao` recebe `'R'`.

**b)**

```c
if (media >= 7.0)
    situacao = 'A';
else
    situacao = 'R';
```

**c)** Não. O operador ternário é uma **expressão** que produz um único valor, então:
- não pode conter múltiplos comandos separados por `;`;
- não pode conter declarações de variáveis ou estruturas de repetição;
- não substitui `if` sem `else` que executa ações (como `printf` seguido de outras instruções);
- em um bloco com vários comandos, é preciso usar `if-else` com chaves `{ }`.

---

## Questão 04 - switch-case e Fall-Through

**a)** A saída exata é:

```
Prata
Ouro
```

Como `codigo = 2`, o controle entra no `case 2`. Não há `break` após o `printf` de "Prata", então a execução "cai" (fall-through) para o `case 3` e imprime "Ouro". O `break` só aparece depois de "Ouro", encerrando o `switch`.

**b)** O `break` encerra a execução do `switch`, impedindo que os casos seguintes sejam executados. Quando ele é omitido, o fenômeno se chama **fall-through** (queda através dos casos).

**c)** A expressão do `switch` deve ser de tipo **inteiro** (`char`, `int`, `short`, `long`, `unsigned`, ou um `enum`). Os rótulos `case` também devem ser constantes inteiras. **Não é permitido** usar `float` ou `double`, pois o `switch` depende de comparação exata com constantes inteiras, e valores reais não são comparáveis com segurança para isso. Para intervalos de valores reais, use `if-else`.

---

## Questão 05 - Avaliação de Curto-Circuito

Dados: `a = 0`, `b = 5`, `c = 10`.

**a)** A condição é `a != 0 && ++b > 5`. Como `a != 0` é falso, o operador `&&` não avalia o lado direito. Portanto, `++b` **não é executado**. O `else` é executado: `c -= 2`, resultando em `c = 8`. A saída é:

```
a = 0, b = 5, c = 8
```

**b)**
- **E (`&&`)**: o segundo operando só é avaliado se o primeiro for verdadeiro. Se o primeiro for falso, o resultado já é falso e o restante é ignorado.
- **OU (`||`)**: o segundo operando só é avaliado se o primeiro for falso. Se o primeiro for verdadeiro, o resultado já é verdadeiro e o restante é ignorado.

**c)** Com `if (a == 0 || ++b > 5)`: `a == 0` é verdadeiro, então o `||` não avalia `++b`. Assim, `b` continua valendo **5**. A condição é verdadeira, então `c += 10`, resultando em **`c = 20`**.

---

## Questão 06 - Cadeias if Independentes vs. else-if

**a)** Para `idade = 65`, a saída é:

```
Idoso
Adulto
Jovem
```

Os três primeiros `if` são **independentes**: cada um é avaliado separadamente, e como 65 satisfaz todas as condições (`>= 60`, `>= 18`, `>= 12`), todas as mensagens são impressas. O `else` pertence apenas ao último `if` (`idade >= 12`), por isso "Criança" não aparece.

**b)** Em uma sequência de `if` independentes, **todas** as condições são avaliadas e várias podem ser verdadeiras ao mesmo tempo. Em uma cadeia `else-if`, as condições são avaliadas em ordem e a execução **para na primeira verdadeira**, garantindo que apenas um bloco seja executado.

**c)**

```c
if (idade >= 60)
    printf("Idoso\n");
else if (idade >= 18)
    printf("Adulto\n");
else if (idade >= 12)
    printf("Jovem\n");
else
    printf("Criança\n");
```