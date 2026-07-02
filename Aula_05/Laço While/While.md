# Laço While

## Estrutura Básica

  A estrutura de repetição while é usada para repetir um bloco de código enquanto uma condição for verdadeira. Uma condição é descrita por uma [Expressão de comparação](https://github.com/Leppyzin/competitive_programming/blob/main/Aula_03/Estruturas%20Condicionais/Definindo%20condi%C3%A7%C3%B5es%201.1/Express%C3%B5es%20de%20compara%C3%A7%C3%A3o%201.2.md) da mesma maneira que nas estruturas ```if-else```. A sintaxe básica é a seguinte:

```
while (CONDICAO) {
    /*comando 1*/
    /*comando 2*/
}
```

  A ordem de execução do laço ```while``` é como se segue:

   1. Avalia-se a CONDICAO, que é a condição de permanência dentro da estrutura de repetição;
   2. Se o resultado de CONDICAO for verdadeiro, o bloco de código dentro do ```while``` (chamado de **escopo** do laço while) é executado por completo. Cada passada completa por todos os comandos e expressões dentro do escopo do laço while é denominada **iteração.** Após a execução de todos os comandos e expressões (a finalização da iteração), o fluxo do algoritmo volta para a avaliação da condição, isto é, para o Passo 1. Assim, será verificado se uma nova iteração será executada ou não;
   3. Se a condição for falsa, o bloco de código dentro do ```while``` não será executado e o algoritmo retoma seu fluxo natural, isto é, na primeira linha imediatamente após o laço ```while```.

   A condição da estrutura ```while``` é geralmente elaborada visando contar a quantidade de iterações ou aguardar um estado esperado de variáveis do algoritmo.


### Exemplo

 Elabore um algoritmo que leia ```n``` números inteiros separados por espaço da entrada padrão e imprima cada um deles na tela, um por linha:

 ```
#include <stdio.h>

int main(){
    int n,a,i;

    printf("Digite a quantidade de inteiros a serem lidos: ");
    scanf("%d",&n);

    i = 1;

    while (i <= n){ // condicao de permanencia no while: enquanto o valor i for menor ou igual
        printf("Digite o inteiro %d: ",i);
        scanf("%d",&a); // le o valor de a
        printf("%d\n",a); // imprime o valor de a lido
        i = i+1; // Contabiliza que uma iteracao foi finalizada
    }

    return  0;
}
```

### **Importante!!!**

  Cuidado com o **LOOP INFINITO!!** trata-se da situação em que o código-fonte fica "preso" dentro da estrutura da repetição devido à condição de permanência na estrutura de repetição sempre retornar verdadeiro. Isso ocorre quando uma expressão de comparação é mal formulada, nunca alcançando um resultado falso que faz interromper o laço.

  ## Quando Utilizar?

   O laço While é mais indicado do que os demais tipos de laço em Linguagem C quando você estiver elaborando um algoritmo e tiver que executar blocos de comandos repetidas vezes, mas não se sabe de antemão a quantidade de iterações a serem efetuadas. Em outras palavras, pode ser mais fácil utilizar o laço while quando temos que executar uma quantidade indefinida, mas finida, de iterações.

  ## Exemplo 1

  Leia um número inteiro positivo ```n``` e determine a quantidade de bits iguais a 1 que ele possui em sua representação binária. Imprima um único número inteiro em uma linha como resposta. Por exemplo, o número inteiro 21 é denotado pelo número 10101 no sistema binário. Existem 3 bits iguais a 1 nesse número.

  Vamos utilizar a ideia do tão conhecido algoritmo ""Sucessivas Divisões" para converter um número inteiro na base decimal para seu correspondente na base binária. 

  ```
#include <stdio.h>

int main(){
    int n,i,a,n_bits_1;

    scanf("%d",&n);

    n_bits_1 = 0; // inicializa a variavel que armazena a quantidade de bits iguais a 1 no nuemro n

    while (n > 0){
        n_bits_1 = n_bits_1 + (n%2);
        n = n/2;
    }

    printf("%d\n",n_bits_1);

    return 0;
}
```

Analisando o algoritmo acima, pode-se verificar que não é possível estimar a quantidade de iterações a serem executadas em um primeiro momento. Isso significa que vamos executando as iterações enquanto a condição ajustada para este problema em específico for verdadeira.

## Exemplo 2 (Contagem)

 Leia ```n``` números inteiros separados por espaço e imprima a soma entre eles.

 ```
#include <stdio.h>

int main(){
    int n,i,a;
    long long int soma;

    scanf("%d",&n);

    i = 1; // iniciando variavel contadora
    soma = 0; // Variavel que acumula o valor da soma dos n inteiros a serem lidos

    while (i <= n){
        scanf("%d",&a);
        soma = soma + a;
        i = i+1;
    }

    printf("%lld\n", soma);

    return 0;
}
