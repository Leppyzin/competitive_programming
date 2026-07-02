# Operadores de Incremento e Decremento

**Atenção!!** incremento apenas vale para operadores de soma e decremento apenas para operador de subtração. Não existe operação similar para operadores de multiplicação e divisão.

## Incremento

  O operador de incremento (++) são usados para aumentar o valor de uma variável em 1 unidade. Isso é:

  ```
i = i+1
```

 É uma operação equivalente a ```i++```.

 veja abaixo:

 ```
int i;

i = 1;
i = i+1;
printf("%d\n",i);
```

Podemos escrever o código também da seguinte forma:

```
int i;

i = 1;
i++;
printf("%d\n",i);
```

 Ou então assim:

 ```
int i;

i = 1;

printf("%d\n",i++);
```

## Decremento

Já o operador decremento (--) subtrai o valor da variável em uma unidade. Portanto, 

```
i = i-1
```

É uma operação equivalente a ```i--.```

## Ressaltando

 O incremento e decremento podem ser usados em outros tipos de variáveis, como o é o exemplo do ```char```, ```float```... e por aí vai. Você sempre consegue usar o Decremento ou Icremento idependente da situação.

 - Eles podem ser usados em qualquer variável numérica, como ```char```, ```int```,```float```, ```double```,```long```, etc. Em todos esses casos, eles adicionam ou subtraem 1 do valor da variável.
 - No caso de ```char```, o incremento e o decremento funcionam sobre o código ASCII (ou outro conjunto de caracteres utilizado).

 **Exemplo:**

 ```
char letra = 'A';
letra++;
printf("%c", letra); // B
```

 - Em variáveis de ponto flutuante (```float``` e ```double```), o operador também soma ou subtrai exatamente ```1.0```.

 - Você **Não pode** usar ```++``` ou ```--``` em constantes, literais ou expressões.

  **EXEMPLO:**

```
5++; // Erro
(a + b)++; // Erro
```

- Esses operadores só funcionam em variáveis que podem ser modificadas (l-values).
- Existe uma diferença importante entre **Pré-incremento (++)** e **Pós-incremento (x++):**

## Tipos de Incremento e Decremento

   Os operadores ```++``` e ```--``` podem ser usados de duas maneiras diferentes:

   **### Pós-Incremento (i++) e Pós-Decremento (i--)**

   O operador incrementa ou decrementa o valor que está na variável associadoa depois desta variável ter sido utilizada na expressão ou operação correspondente. Com isso, o valor original da variável é usado antes da alteração:

   No trecho de código-fonte a seguir:

   ```
int i,x,y;

i = 5;
x = i++;

printf("x = %d\n",x);
printf("i = %d\n",i);
```

 A saída é:

 ```
x = 5
i = 6
```

 Pois na operação ```x = i++;```, a ordem das operações é:

   1. ```x``` recebe o valor de ```i,``` ou seja, ```x = i``` => ```x = 5```
   2. Executa-se então ```i=i+1```. Logo ```i = 5 + 1 = 6.```

 Já no exemplo adiante:

 ```
int i,x,y;

i = 5;
x = i--;

printf("%d\n",x);
printf("%d\n",i);
```
 A saída é:
 ```
X = 5
i = 4
```

pois na operação ```x = i--;```, a ordem das operações é:

  1. ```x``` recebe o valor de ```i```, ou seja, ```x = i``` => ```x = 5```
  2. Em seguida, ```x``` recebe o valor de ```i```, ou seja, ```x = i``` => ```x = 6```.

 O mesmo vale para o pré-decremento. Recomenda-se fazer alguns exercícios abaixo para fixação do conteúdo.

 ## Atribuição Composta

  A atribuição composta é uma forma de simplificar operações que combinam um operador aritmérico ou lógico com uma atribuição. Em vez de escrever a operação completa, você pode usar operadores compostos, que tornam o código mais compacto e legível. A tabela abaixo sumariza os operadores aritméticos:

  |  Operador  |  Significado  | Equivalente em expressão |
  -------------|---------------|--------------------------|
  ```+=```     | Soma e atribui| ```x += y``` == ```x = x + y``` |
  ```-=```     | Subtrai e atribui  |  ```x -= y``` == ```x = x - y``` |
  ```*=```     | Multiplica e atribui | ```x *= y``` == ```x = x * y``` |
  ```/=```     | Divide e atribui | ```x /= y``` == ```x = x / y``` |
  ```%=```     | Calcula o Módulo e atribui | ```x %= y``` == ```x = x % y```|

  ## Exercícios

   O que o código-fonte abaixo gera como saída??

   ```
#include <stdio.h>

int main(){

    int i;

    i = 3;
    if(i++ > 3){
        printf("A\n");
    } else {
        printf("B\n");
    }

    return 0;
}
```

e esse código-fonte abaixo?

```
#include <stdio.h>

int main(){

    int i;

    int = 3;
    if(++i >= 3){
        printf("A\n");
    } else {
        printf("B\n");
    }

    return 0;
}
```
