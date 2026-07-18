# Estrutura Básica

Na linguagem C todo programa que é iníciado tem uma Estrutura Básica que é onde o nosso programa vai rodar o seu programa. Nas linguagens de programação sua maioria terá um esqueleto base para iniciar um programa.

## Estrutura básica do C

![estruturabas](https://github.com/Leppyzin/competitive_programming/blob/main/Arquivos_img/estruturabasica.png)

Você deve está pensando; "mas o que diabos é isso?". Calma pupilo, irei explicar cada pedaço para você.

## O código anterior é bem básico, mas nos permite a aprender alguns conceitos básicos da linguagem C

- ``` #include <stdio.h> ```: Declarações globais; Bibliotecas usadas pelo o programa. Temos no Início do Programa regiões onde são feitas as suas declarações globais, ou seja, aquelas que são validas para todo o programa. Uma biblioteca é um conjunto de funções (pedaços de código) já implementados e que podem ser utilizados pelo programador. Essa biblioteca do exemplo fornece para o programa funções essencias para **saída e entrada de dados**, mas isso fica para outro momento por enquanto. No exemplo, o comando #include <nome_da_biblioteca> é utilizado para declarar as bibliotecas que serão utilizadas.

- ``` main ```: Todo o programa em linguagem C deve conter a função **main()**. Essa função é responsável pelo início da execução do programa, e é dentro dela que colocamos os comandos que queremos que o programa execute. Todo programa em C também deve conter a função **main()**.

- ``` {} ```: As chaves definem o início ("{") e o fim ("}") de um bloco de comandos/instruções. No exemplo, as chaves definem o início e o fim do programa.

- ``` int ```: A função main() foi definida como uma função **int**(ou seja, inteira) e, por isso, precisa devolver um valor **inteiro**. Temos então a necessidade do comando **return 0** apenas para informar que o seu programa chegou ao seu final e que está tudo *OK*

- ``` ; ```: A declaração de um comando **quase sempre** termina com (";"). Em breve, veremos quais programas não terminam com **;**

- ``` () ```: Os parenteses definem o início ( "(" ) e o fim ( ")" ) da lista de argumentos de uma função. Um argumento é a informação que será passada para a função agir. No exemplo podemos ver que o **main** é uma função.

## Comandos que também são importantes

 Esse comandos são comandos de etiqueta, não são obrigatorios em meu programa. Mas, por questões de organização e embelezamento do código nós usamos os mesmos para que quem vizualize o código consiga entender as funcionalidades com mais simplicidade.

- ``` \n ```: Quebra de linha; esse comando auxilia na função **printf()** que falaremos em breve. Momentaneamente, ele auxilia o programador a organizar a sua mensagem de texto, ou seja, a saída de dados do usúario do programa

### comentários

- ``` /* COMENTARIO */ ```: O comentário de Bloco faz com que o programador consiga comentar diversas linhas de códigos. Ou então, que varias linhas sejam ignoradas pelo o compilador.

- ``` // COMENTARIO ```; Comentário de linha permite que o programador comente uma **única linha**. Sendo muito utilizado para explicar partes específicas.

## Função printf();

a função **printf()** está definida na biblioteca **stdio.h**. Ela serve para imprimir uma mensagem de texto na tela, ou seja, permite que você mande uma **saída de dados** para o computador, assim tendo na tela a mensagem que você quer. A forma de uso é relativamente simples, basta digitar o comando **printf("COMENTARIO\n");** que assim você terá sua mensagem impressa. A função printf() da linguagem C utilizada para realizar a saída de dados formatados na saída padrão (geralmente o terminal). O texto a ser escrito deve estar entre aspas duplas ,e, dentro dele, podemos também colocar caracteres especiais, como o “\n”, que indica que é para mudar de linha antes de continuar a escrever na tela.

exemplo de uso:

```
#include <stdio.h>

int main(){

    printf("One Piece eh melhor que Naruto \n");

    return 0;
}

```

## Conceito Inicial de Variável

Uma variável é uma abstração que representa uma posição na memória, associada a um identificador, onde valores de um determinado tipo podem ser armazenados e manipulados ao longo da execução de um programa. Desenvolveremos melhor esse conceito em breve! Por enquanto, I don't want to know!! apenas abstraia.

## Imprimindo uma variável na tela

```
#include <stdio.h>

int main(){

    int a,b,s;

    a = 10;
    b = 5;
    s = a+b;

    printf("A soma de %d mais %d eh: %d\n",a,b,s);

    return 0;
}
```
