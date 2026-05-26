# Estrutura IF-ELSE

## O comando IF

  O comando **if** é utilizado sempre que é necessário 
escolher entre dois caminhos dentro do programa ou quando se deseja executar um ou mais comandos que estejam sujeitos ao resultado de um teste.
  <br>

   A forma geral de um comando **if** é:

```
    if(condição) {
        sequencia de comandos;
    }
```

 Na execução do comando **if** a condição será avaliada e:

   - Se a condição for **VERDADEIRA**, a sequência de comando será executada.
   - Se a condição for **FALSA**, a sequência de comandos não será executada, e o programa continuará a partir do primeiro comando
seguinte ao final do comando **if**.

  Exemplo de um código para demonstrar como o **if** pode ser usado;

  ![exemploif](https://github.com/Leppyzin/Programacao_Competitiva/blob/main/Arquivos_img/exeif.png?raw=true)

  ### Saída

  ![exemploifterminal](https://github.com/Leppyzin/Programacao_Competitiva/blob/main/Arquivos_img/codigoifterminal.png?raw=true)

   Nesse exemplo, a mensagem de que o número é maior do que 10 será exibida apenas se a condição for verdadeira.
  Se a condição for falsa, nenhuma mensagem será exibida na tela. Relembrando a ideia de fluxogramas, é possível ter uma boa noção do que nosso
  programa faz;

  ![exemplofluxoif](https://github.com/Leppyzin/Programacao_Competitiva/blob/main/Arquivos_img/fluxogramaif.png?raw=true)

  <br>

  ### diferente da maioria dos comandos, não se usa (;) depois da condição do comando *IF*

  Na linguagem C, o operador ponto e vírgula (;) é utilizado para separar as instruções do programa. Colocá-lo logo após
o comando **if**, faz com que o compilador entenda que o comando **if** já terminou e trate o comando seguinte como se ele estivesse
fora do **if**.

  <br>
  <br>
  <br>

## O uso das chaves {}

  No comando **if**, e em fiversos outros comandos da linguagem C, usam-se os operadores de chaves ({}) para demilitar um bloco de instruções.

  ### por definição, comandos de condição (**if e else**) ou repetição (**while,for e do while**) atuam apenas sobre o comando seguinte a eles.

  Desse modo, se o programador desejar que mais de uma instrução seja executada por aquele comando **if**, esse conjunto de instruções deve estar contido dentro de um bloco delimitado por chaves ({})

```
    if(condição) {
        comando 1;
        comando 2;
        ...
        comando n;
    }
```

## Comando ELSE

  O comando **else** pode ser entendido como um complemento do comando **if**. Ele auxilia o comando **if** na tarefa de escolher entre os vários caminhos a serem seguidos dentro do programa..

  ### O comando *ELSE* é opcional, e sua sequência de comandos somente será executada se o valor da condição que está sendo testada pelo comando *IF* for *FALSA*.

  A forma geral de um comando **else** é:

  ```
      if(condição) {
          primeira sequência de comandos;
      }
      else {
          segunda sequência de comandos;
      }
  ```

### Se o comando *IF* diz o que fazer quando a condição é verdadeira, o comando *ELSE* trata da condição quando ela é falsa(sim, tipo aquele teu amigo).

  Isso fica bem claro quando olhamos a representação do comando else em um fluxograma.

  ![fluxoelse](https://github.com/Leppyzin/Programacao_Competitiva/blob/main/Arquivos_img/elsefluxo.png?raw=true)

  <br>

  Antes, na execução do comando **if**, a condição era avaliada e:

   - Se a condição fosse **verdadeira**, a **primeira** sequência de comandos era executada.
   - Se a condição fosse **falsa**, a sequência de comandos não era executada e o programa seguia o seu fluxo-padrão.

  Com o comando **else**, temos agora que: 
    - Se a condição for **verdadeira**, a **primeira** sequência de comandos (bloco **if**) será executada.
    - Se a condição for **falsa**, a **segunda** sequência de comandos (bloco **else**) será executada.

### O comando *else* não tem condição, ele é o caso contrário do comando *IF*.

 O comando **else** deve ser entendido como um complemento do comando **IF** for **FALSA**. Portanto, não é necessário estabelecer uma condição para o comando **else**: ele é o oposto de **if**.

### Como no caso de *IF*, não se usa o ponto e vírgula (;) depois do comando **else**.

 Como no caso de **if**, colocar o operador de ponto e vírgula (;) logo após o comando **else** já terminou e trate o comando seguinte (**printf()**) como se ele estivesse fora do **else**. 

### A sequência de comandos de *IF* é independente da sequência de comandos de *ELSE*. Cada comando tem o seu próprio conjunto de chaves ({}).

 Se o comando **if** for executado em um programa, o seu comando **else** não será executado. Portanto, não faz sentido usar o mesmo conjunto de chaves ({}) para definir os dois conjuntos de comandos.

  
