# Respostas de Código

## Q01

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano_nascimento = 2004;
    printf("Meu ano de nascimento: %d\n", ano_nascimento);
    system("PAUSE");
    return 0;
}
```

## Q02

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero_euler = 2.71828f;
    printf("Número de Euler: %.3f\n", numero_euler);
    system("PAUSE");
    return 0;
}
```

## Q03

```c
/* Esse programa mostra o uso de comentários em várias linhas
* e mostra também o uso de comentários em uma única linha
*
* Primeiro programa
***************************************************************/
/* Prog1.C */

#include <stdio.h> /* Para printf() */
#include <stdlib.h> /* Para system() */

int main() /* Função main */
{ /* início do corpo da função main */
    printf("Primeiro programa."); /* Chamada à função printf */
    system("PAUSE"); /* Chamada à função system */
    return 0;
} /* Fim do corpo da função main */
```

## Q04

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Existem %d semanas no ano.\n", 52);
    system("PAUSE");
    return 0;
}
```

## Q18

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lapis = 4.88;
    float borrachas = 234.54;
    float canetas = 42.04;
    float cadernos = 8.00;
    float fitas = 13.05;
    
    printf("%12s %8.2f\n", "Lapis", lapis);
    printf("%12s %8.2f\n", "Borrachas", borrachas);
    printf("%12s %8.2f\n", "Canetas", canetas);
    printf("%12s %8.2f\n", "Cadernos", cadernos);
    printf("%12s %8.2f\n", "Fitas", fitas);
    
    system("PAUSE");
    return 0;
}
```

## Q19

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("um\ndois\ntrês\n");
    system("PAUSE");
    return 0;
}
```

## Q20

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%c%c%c%c\n", 0xC9, 0xCD, 0xCD, 0xBB);
    printf("%c%c%c%c\n", 0xBA, 0x20, 0x20, 0xBA);
    printf("%c%c%c%c\n", 0xBA, 0x20, 0x20, 0xBA);
    printf("%c%c%c%c\n", 0xC8, 0xCD, 0xCD, 0xBC);
    
    system("PAUSE");
    return 0;
}
```

## Q21 - Versão 1

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Treinamento em programação.\nLinguagem C.\n");
    system("PAUSE");
    return 0;
}
```

## Q21 - Versão 2

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Treinamento em programação.\n");
    printf("Linguagem C.\n");
    system("PAUSE");
    return 0;
}
```

## Q21 - Versão 3

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 
           0xC9, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD,
           0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD,
           0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xBB);
    
    printf("%c Treinamento em programação.%c\n", 0xBA, 0xBA);
    printf("%c Linguagem C.%c\n", 0xBA, 0xBA);
    
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
           0xC8, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD,
           0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD,
           0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xBC);
    
    system("PAUSE");
    return 0;
}
```

## Q22

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%c%c%c%c%c%c%c%c\n", 0xDC, 0xDC, 0xDB, 0xDB, 0xDB, 0xDB, 0xDC, 0xDC);
    printf("%c%cO%c%c%c%c%c%cO%c\n", 0xDF, 0x20, 0xDF, 0xDF, 0xDF, 0xDF, 0xDF, 0x20, 0xDF);
    
    printf("%c%c%c%c%c%c%c%c%c%c%c\n", 0xDC, 0xDC, 0xDB, 0x20, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB);
    printf("%c%cO%c%c%c%c%c%c%c%cO%cO%c\n", 0xDF, 0x20, 0xDF, 0xDF, 0xDF, 0xDF, 0xDF, 0xDF, 0xDF, 0x20, 0xDF, 0xDF);
    
    system("PAUSE");
    return 0;
}
```

## Q23

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("XXXXX\n");
    printf("X   X\n");
    printf("X   X\n");
    printf("X   X\n");
    printf("XXXXX\n");
    
    system("PAUSE");
    return 0;
}
```

## Q24

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%-10s %s\n", "ALUNO(A)", "NOTA");
    printf("=========== =====\n");
    printf("%-10s %.1f\n", "ALINE", 9.0);
    printf("%-10s %s\n", "MÁRIO", "DEZ");
    printf("%-10s %.1f\n", "SÉRGIO", 4.5);
    printf("%-10s %.1f\n", "SHIRLEY", 7.0);
    
    system("PAUSE");
    return 0;
}
```

## Q25

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("CCCCC\nC\nC\nCCCCC\n");
    system("PAUSE");
    return 0;
}
```

## Q26

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("      X\n");
    printf("     X*X\n");
    printf("    X+XoX\n");
    printf("   X*X+X*X\n");
    printf("  XXXXXXXXX\n");
    printf("     XX\n");
    printf("     XX\n");
    printf("    XXXX\n");
    
    system("PAUSE");
    return 0;
}
```

## Q27

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int segundos_totais, horas, minutos, segundos;
    
    printf("Digite um valor em segundos: ");
    scanf("%d", &segundos_totais);
    
    horas = segundos_totais / 3600;
    minutos = (segundos_totais % 3600) / 60;
    segundos = segundos_totais % 60;
    
    printf("%d segundos equivalem a: %d hora(s), %d minuto(s) e %d segundo(s)\n",
           segundos_totais, horas, minutos, segundos);
    
    system("PAUSE");
    return 0;
}
```

## Q28

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor1, valor2, valor3;
    double media;
    
    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &valor1);
    
    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &valor2);
    
    printf("Digite o terceiro valor inteiro: ");
    scanf("%d", &valor3);
    
    media = (valor1 + valor2 + valor3) / 3.0;
    
    printf("A média aritmética dos três valores é: %.2f\n", media);
    
    system("PAUSE");
    return 0;
}
```
