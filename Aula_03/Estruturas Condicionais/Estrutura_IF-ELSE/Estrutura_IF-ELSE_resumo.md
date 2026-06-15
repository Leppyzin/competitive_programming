# Estrutura IF-ELSE

 Na estrutura IF-ELSE nós conseguimos controlar os fluxos mais básicos e fundamentais, isto é, execução de diferentes comandos, expressões e instruções caso uma condição seja cumprida, sendo assim analisada duas condições, verdadeiro ou falso.

```
 if(condicao){
  bloco de comandos caso a CONDICAO seja verdadeira...
} else {
  bloco de comandos caso a CONDICAO seja falsa...
}
```

**CONDICAO:** É uma expressão que permite analisar uma condição, seja ela de comparação ou de combinações de comparações. Se a **CONDICAO** for verdadeira, apenas o bloco de códigos dentro do if(**também chamado de escopo do if**) é executado. Caso contrario apenas o bloco de comandos dentro do ELSE é executado. no I

**O comando ELSE não é obrigatório!!:** No inicio da sua jornada em comandos condicionais, vale ressaltar que não é obrigatório, logo você pode colocar vários comandos condicionais em sequência. 

### IMPORTANTE!! coloque identação (a famosa TAB) dentro dos comandos associados a cada bloco.

## Extensão de IF-Else para IF-Else-IF

 Para quem já entendeu e já se acostumou com a estrutura IF-ELSE clássica, existe uma estrutura denominada **if-else-if**, cuja sintaxe é apresentada a seguir;

 ```
 if(condicao 1) {
    bloco de comandos caso a condicao 1 seja concluída...
} else if(condicao 2) {
    bloco de comandos caso a condicao 2 seja concluída...
} else if(condição 3) {
    bloco de comandos caso a condicao 3 seja concluída...
} ...


} else if(condições n){
    bloco de comando caso a condicao n seja cumprida...
} else {
    bloco de comandos...
}
 ```

 O fluxo de execução da estrutura funciona como uma estrutura **if-else** aninhada. A condicao 1 é a primeira a ser avaliada e caso ela seja uma verdade, o bloco de comandos relacionado a ela acontece. Assim, sucessivamente... Caso todas as condições sejam falsas, o bloco ```else``` será executado por padrão (Default) que, por sinal, é opcional. 

 **IMPORTANTE:** o certo é colocar else if com espaço em branco separado entre as palavras else e if. É incorreto colocar elif (esse comando é do Python!!!) e elseif.

 As seguintes vantagens podem ser observadas com o uso do ```else-if```:

  - Não existe mais o efeito cascata na direita do código-fonte conforme se abre chaves('{}'). A identação fica pura.
  - Existem menos chaves;
  - Código-fonte menos verboso (menos caracteres visíveis).

## if-else com Operadores Ternários

Os operadores ternários são uma forma compacta de representar a estrutura if-else, utilizando três operadores:

```condicao ? comando_if_true : comando_if_false```

onde ```condicao``` é a equivalência da verificação do ```ìf```, ```comando_if_true``` a tarefa a ser executada se ```condicao``` for verdadeira e ```comando_if_false``` quando a condicao for falsa (como no ```else```).

 Representando os operadores de forma equivalente com a estrutura propriamente dita, seria:

 ```
if(condicao)
   comando_if_true;
else
   comando_if_false;
```
alguns cuidados serão necessários ao usar os operadores ternários, como:

 - Os comandos devem ser apenas expressões simples, como uma escolha de sim ou não, e não comandos múltiplos;
 - O uso execessivo pode causar dificuldade na leitura do código, com grandes poderes se tem grandes responsabilidades;

### Exemplo de código simples:

```
#include <stdio.h>

int main(){

    int num = 5;
    
    (num > 10) ? printf("%d eh maior que 10\n", num) : printf("%d eh menor ou igual a 10\n",num);

    return 0;
}
```
