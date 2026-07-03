# Estrutura de repetição

  Uma estrutura de repetição permite que blocos de comandos, expressões e instruções (ou, simplesmente, bloco de código) sejam executados repetidas vezes enquanto uma condição for verdadeira.
  Há casos onde é preciso que um bloco de comandos seja executado mais de uma vez se determinada condição for verdadeira:

  Código em pseudocódigo
 
 ```
 leia A e B;
 enquanto A < B
     A recebe A + 1;
     imprima A;
 Fim Enquanto

 ```
  Para isso, precisamos de uma estrutura de repetição que permita executar um conjunto de comandos quantas vezes forem necessárias. 

  Segue o exemplo em fluxograma:

  ![fluxo_rep](https://github.com/Leppyzin/competitive_programming/blob/main/Arquivos_img/fluxo_rep.png)

  **ATENÇÃO!!** De acordo com a condição, os comandos serão repetidos zero (se falsa) ou mais vezes (enquanto a condição for verdadeira). Essa estrutura normalmente é denominada laço ou loop.

  Note que a sequência de comandos a ser repetida está subordinada a uma condição. Por **condição** entende-se qualquer expressão relacional (ou seja, que use os operadores >,<,>=,<=,== e !=) que resulte em uma resposta do tipo **verdadeiro** ou **falso.** A condição pode ainda ser uma expressão que utiliza operadores:

  - **Matemáticos:** +,-,*,/,%
  - **Relacionais:** >,<,>=,<=,==,!=\
  - **Lógicos:** &&,||

  Na execução do comando **enquanto,** a condição será avaliada e:

   - Se a condição for considerada **verdadeira,** a sequência de comandos será executada. Ao final da sequência de comandos, o fluxo do programa é desviado novamente para o teste da condição.
   - Se a condição for considerada **falsa,** a sequência de comandos não será executada.


### Laço infinito

  Um laço infinito (ou loop infinito) é uma sequência de comandos em um programa de computador que sempre se repete, ou seja, infinitamente. Isso geralmente ocorre por algum erro de programação, quando:

  - Não definimos uma condição de parada.
  - A condição de parada existe, mas nunca é atingida.

   Basicamente, um laço infinito ocorre quando cometemos algum erro ao especificar a condição (ou expressão condicional) que controla a repetição. Outro erro comum que produz um laço infinito é o de esquecer algum comando dentro da sequência de comandos da repetição.

   A Linguagem C contempla as seguintes estruturas de repetição:

   ### 1. [Fundamentos de Operadores](https://github.com/Leppyzin/competitive_programming/blob/main/Aula_05/Fundamentos%20de%20Operadores/fundamentos.md)
   
   ### 2. [Laço While](https://github.com/Leppyzin/competitive_programming/blob/main/Aula_05/La%C3%A7o%20While/While.md)

   ### 3. [Laço For]()

   ### 4. [Laço Do-while](https://github.com/Leppyzin/competitive_programming/blob/main/Aula_05/La%C3%A7o%20Do-while/do-while.md)

   ## Exercícios Resolvidos

   
 
  

  

  
