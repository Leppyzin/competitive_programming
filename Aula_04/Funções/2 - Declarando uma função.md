# Declarando uma função

  Em linguagem C, a declaração de uma função pelo programador segue esta forma geral:

  ```
  tipo_retorno nome_função (lista_de_parâmetros){
      sequência de declarações e comandos
  }
  ```

  O **nome_função** é como aquele trecho de código será conhecido dentro do programa. Para definir esse nome, valem basicamente as mesmas regras para se definir uma variável.

  ## local de delcaração de uma função

  Com relação ao local de declaração de uma função, ela deve ser definida ou declarada antes de ser utilizada, ou seja, antes da cláusula **main(),** como mostra o exemplo a seguir:

  ```
  #include <stdio.h>

  int Square (**int** a){
      return (a*a);
  }

  int main(){
      int n1,n2;
      printf("Entre com um numero: ");
      scanf("%d", &n1);

      n2 = Square(n1);
      printf("o seu quadrado vale: %d\n", n2);

      return 0;
  }
  ```

  Pode-se também declarar uma função depois da cláusura **main().** Nesse caso, é preciso declarar antes o protótipo da função:

  ```
  tipo_retornando nome_função (lista_de_parâmetros);
  ```

  O protótipo de uma função é uma declaração de função que omite o corpo mas especifica o seu nome, tipo de retorno e lista de parâmetros, como mostra no exemplo a seguir:

```
#include <stdio.h>

int Square (int a);

int main(){
    int n1,n2;
    printf("Entre com um numero: ");
    scanf("%d", &n1);
    n2 = Square(n1);

    printf("O seu quadrado vale: %d\n", n2);

    return 0;
}

int Square (int a){
    return (a*a);
}

```

### O protótipo de uma função não precisa incluir os nomes das variáveis passadas como parâmetros. Apenas os seus tipos já são suficientes.

  A inclusão do nome de cada parâmetro no protótipo de uma função é tarefa opcional. Podemos declarar o seu protótipo apenas com os tipos dos parâmetros que serão passados para a função. Os nomes dos parâmetros são importantes apenas na implementação da função. Assim, ambos os protótipos a seguir são válidos para uma mesma função:

  **int Square (int a);**
  **int Square (int);**
