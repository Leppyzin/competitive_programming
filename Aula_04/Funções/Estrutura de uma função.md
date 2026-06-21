# Estrutura de uma função

Em linguagem C, temos funções que retornam valores e que não retornam valores. Vamos começar estudando as funções que retornam valores.


uma função sempre cuida de funcionalidades e operações específicas. Uma função pode ser chamada quantas vezes forem necessárias no decorrer do código-fonte após a sua definição. Como resultando, ganha-se em abstração do código-fonte, pois a função ```main``` fica mais legível e limpa, sendo possível apresentar o fluxo principal do algoritmo do programa sem detalhes desnecessários.

## Função com Retorno

 Uma função com retorno possui a seguinte estrutura:

 ```

  tipo nome_da_funcao(tipo1 var1, tipo 2 var2, ...){
      tipo var;

      /* ... comandos, expressões e instruções da função... */

      return var;
  }
```

 - ```tipo``` se refere ao tipo de retorno, que define o tipo do valor que a função devolve ao ser chamada (por exemplo, int, float, void);
 - ```nome_da_funcao``` identifica a função e permite chamá-la pelo nome no decorrer do código-fonte;
 - Parâmetros ```(tipo var1, tipo2 var2, ...)```: são valores que podem ser passados para a função, no formato ```tipo nome_da_variavel``` e separadas por vírgula, para que ela os utilize em seus comandos, expressões e instruções. Você pode definir uma função com diversos parâmetros, ou nenhum, dependendo do problema sendo resolvido;
 - Corpo: O bloco de código-fonte entra abre-chaves e fecha-chaves ```{}``` que descreve as operações e os passos efetuados pela função.

**Exemplo 1:** Uma função que determina o sucessor de um número:

```
int sucessor(int a){
    int s;
    s = a+1;
    return s;
}
```

**Exemplo 2:** Uma função que determina a soma de dois inteiros:
```
int soma(int x, int y){
    int s;
    s = x+y;
    return s;
}
```
**Exemplo 3:** Uma função que lê e retorna um valor inteiro - apenas para propósitos didáticos:

```
int leInteiro(){
    int n;

    scanf("%d", &n);

    return n;
}
```

## Chamada da Função

  A chamada de uma função é o comando que chama uma função definida previamente me um programa, fazendo com que o código da função seja executado. Durante a chamada, pode-se passar argumentos para a função, permitindo que ela execute operações específicas com base nesses valores.

  Uma chamada de função contém:
  
  - Nome da função: identifica qual função será executada. Ela deve estar previamente definida e acessível no código-fonte;

  - Argumentos: é o nome que se dá os valores passados para a função como entrada, dependendo de como os parâmetros da função foram definidos.

  - veja 
