# Laço For

## Definição

É uma estrutura de repetição do tipo **contada** que executa um bloco de código-fonte múltiplas vezes, geralmente com um contador controlando o número de repetições. A sintaxe básica do ```for``` é:

```
for (inicialização; condição; incremento){
        sequência de comandos;
}
```
ou também assim
```
for(inicialização; condição de permanência no laço; evolução){
    // bloco de comandos a ser repetido
}
```

 As principais partes do ```for``` são: 

  - Inicialização: colocar um valor inicial para a variável responsável pela contagem (variável contadora) necessários para controlar a quantidade de iterações ou passos a serem executados pelo laço. Vale ressaltar que a inicialização é executada apenas uma vez, no início do laço;
  - Condição de permanência no laço: trata-se de uma comparação como ocorre na estrutura if-else que verifica se a repetição deve continuar. Enquanto a condição for verdadeira, o laço continuará executando.
  - Evolução: atualização da variável de controle a cada iteração após a finalização da execução de todo o bloco do código-fonte no escopo do laço for.

 Observe o exemplo abaixo:

 ```
#include <stdio.h>

int main(){
    int i;
    for(i = 1; i <= 5; i++){
        printf("i = %d\n", i);
    }

    return 0;
}
```

 Veja que o programa acima executa **exatamente** 5 iterações (5 passadas no bloco de código do laço for), gerando a seguinte saída:

```
i = 1
i = 2
i = 3
i = 4
i = 5
```
 O passo-a-passo do Laço For no código-fonte acima é o seguinte:

 1. Inicialização: ```i = 1;``` é executado.
 2. Verificação da condição: ```i <= 5``` é avaliado. Se for verdadeiro, deve-se permanecer no laço.
 3. Execução do bloco de código: ```printf("i = %d\n", i); é executado.
 4. Incremento: ```i++``` é executado.
 5. Retorna o passo 2 e repete o processo até que a condição seja falsa.

 ## Exemplos

 ### Contar números de N até 1, reduzindo de 2 em 2:

 ```
int i,n;

scanf("%d",&n);

for(i = n; i >= 1;i = i-2){
    printf("i = %d\n",i);
}
```

para ```n=10```, o programa executa **exatamente** 5 iterações, gerando a seguinte saída:

```
i = 10
i = 8
i = 6
i = 4
i = 2
```

Encontrar o menor dentre N elementos lidos da entrada

```
int i,n,a,menor;

scanf("%d",&n);

scanf("%d",&menor);

for(i = 0; i < n; i++){
    scanf("%d",&a);
    if(a < menor){
        menor = a;
    }
}
```


Encontrar o maior dentre N elementos lidos da entrada

```
int maior,i,n,a;

scanf("%d",&n);

scanf("%d", &maior);

for(i = 0; i < n; i++){
    scanf("%d",&a);
    if(){
        maior = a;
    }
}
```

Somar N elementos lidos da entrada

```
long long soma;
int i,n,a;

scanf("%d",&n);

soma = 0;

for(i = 0; i < n; i++){
    scanf("%d",&a);
    soma = soma + a;
}
```

## Formas de manipular a leitura do ```for```

```
#include <stdio.h>
#define n 10

int main(){

    // Em alguns compiladores, declarar uma variavel como o tamanho do vetor causa erro de compilacao, por isso usamos o #define

    int i, vet[n] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for(i = 0; i < n; i++){ // retorna o vetor na ordem declarada
        printf("%d ", vet[i]);
    }

    printf("\n");

    for(i = n-1; i >= 0; i--){ // retorna o vetor de tras para frente 
        printf("%d ", vet[i]); 
    }

    printf("\n");

    for(i = n-1; i >= n/2; i--){
        printf("%d ",vet[i]);
    }

    printf("\n");

    return 0;
}
```

## Comandos break e continue dentro do laço ```for```

Para saber detalhes sobre o funcionamento desses comandos, leia [comandos break e continue.](https://github.com/Leppyzin/competitive_programming/blob/main/Aula_05/La%C3%A7o%20While/While.md)

### Break

```
#include <stdio.h>

int main(){

    int i,soma = 0, n;

    scanf("%d",&n);

    for(i = 1; i <= n; i++){

        if(soma > 20){
            break;
        }

        soma += i;

        // se em algum momento a soma dos numeros de i a n for maior que 20, nao serao somados mais numeros e o laco sera interrompido
    }

    printf("O resultado maxio da soma foi: %d\n",soma);
    printf("O ultimo numero somado foi: %d\n", i-1);

    return 0;
}
```


### Continue 

```
#include <stdio.h>

int main(){
    int i;

    printf("Comando continue antes do printf:\n");

    for(i = 1; i <= 10; i++){
        if(i == 5){
            continue;
        }
        printf("%d\n",i);
    }

    printf("Comando continue depois do printf:\n");

    /* bloco de código ineficiente */

    for(i = 1; i <= 10; I++){
        printf("%d\n",i);
        if(i == 5){
            continue;
        }
    }

    return 0;
}
```

## Usando o Operador ',' no comando For

  Na linguagem C o operador ',' é um separador de comandos. Ele permite determinar uma lista de expressões que devem ser executadas sequencialmente, inclusive dentro do comando **for**.

  Como no exemplo abaixo:
  
  ```
  #include <stdio.h>

  int main(){

     int i,j;

     for(i = 0, j = 100; i < j; i++,j--){
        printf("i = %d e j = %d \n",i,j);
     }

     return 0;
  }
  ```

  Nesse código anterior, foram definidos dois comandos para a cláusula de inicialização: i = 0 e j = 100. Cada comando na inicialização é separado pelo operador de vírgula (,). A cláusula de inicialização só termina quando o operador de ponto e vírgula (;) é encontrado. Na fase de incremento, novamente, o valor das duas variáveis é modificado: o valor de *i* é incrementado (i++), enquanto o de *j* é decrementado (j--). Novamente, cada comando na cláusula de incremento é separado pelo operador (,).

  ### ATENÇÃO!

   A variável utilizada no laço **for** não precisa ser necessariamente do tipo **int**. Podemos, por exemplo, usar uma variável do tipo **char** para imprimir uma sequência de caracteres.

   ```
   #include <stdio.h>

   int main(){
   char c;

   for (c = 'A'; c <= 'Z'; c++){
        printf("Letra = %c\n",c);
   }

      return 0;
   }

   ```

  Nesse exemplo, utilizamos uma variável do tipo **char** para controle de laço. Essa variável se inicia com o caractere letra "A" e o laço é executado até que a variável do laço possua como valor o caractere "Z".

## Aninhamento de Repetições

  Como nós já vimos anteriormente, existe o alinhamento de IFs, Cujo o intuito é justamente deixar o código de uma maneira mais legível. Da mesma forma acontece com For/while/do-while na linguagem C.

  Uma repetição aninhada é simplesmente um comando de repetição utilizado dentro do bloco de comandos de um outro, semelhante ao que é feito com o comando **if**.

  A forma geral de um comando de repetição aninhado é:

  ```
   repeticao(condicao){
      sequencia de comandos;
      repeticao(condicao2){
            sequencia de comandos;
            repeticao...
      }
  }
 
```

em que **repetição** representa um dos três possíveis comandos de repetição da linguagem C: **while, for e do-while**.

 Em um aninhamento de repetições, o programa começa a testar as condições começando pela **condição 1** da primeira repetição. Se o resultado dessa condição for diferente de zero (verdadeiro), o programa executará o bloco de comando associados a ela, aí incluído o segundo comando de repetição. Note que os comandos da segunda repetição só serão executados se a condição da primeira for cumprida. Esse processo se repete para cada comando de repetição que o programa encontrar dentro do bloco de comando que ele executar.
 O aninhamento de comandos de repetição é muito útil quando se tem de percorrer dois conjuntos de valores que estão relacionados dentro de um programa. 

 ### Exemplo de uso

  Para imprimir uma Matriz identidade (composta de apenas 1s e 0s na diagonal principal) de tamanho 4x4 é preciso percorrer as quatro linhas da Matriz e, para cada linha, percorrer as suas quatro colunas. Um único comando de repetição não é o suficiente para realizar essa tarefa.

  ```
#include <stdio.h>

int main(){
    int i,j;
    for (i = 1;i<5;i++){
        for(j = 1; j<5; j++){
            if(i == j){
                printf("1 \n");
            } else {
                printf("0 \n");
            }
        }
    }

    return 0; 
}
```
