# Operadores Lógicos

 Certas situações não podem ser modeladas apenas utilizando os operadores aritméticos e/ou relacionais. Um exemplo bastante simples disso disso é saber se determinada variável x está dentro de uma faixa de valores. Por exemplo, a expressão matemática 

 ```0 < x < 10```

  Indica que o valor x deve ser maior do que 0 (Zero) e também menor do que 10. 

  Para modelar esse tipo de situação, a Linguagem C possui um conjunto de três operadores lógicos, como mostra a tabela;

  ![Tabela_Operadores_Logicos](https://github.com/Leppyzin/Programacao_Competitiva/blob/main/Arquivos_img/OperadoresLogicos.png?raw=true)

  Esses operadores permitem representar situações lógicas unindo duas ou mais expressões relacionais simples em uma composta:

  - Operador **E** (&&): a expressão resultante só é verdadeira se **ambas** as expressões unidas por esse operador também forem. Por exemplo, a expressão (x >= 0 && x <= 9) será verdadeira somente se as expressões (x >= 0) e (x <= 9) forem verdadeiras.
  - Operador **OU** (||): a expressão resultante é verdadeira se **alguma** das expressões unidas por esse operador também for. Por exemplo, a expressão (a == 'F' || b != 32) será verdadeira se uma de suas expressões, (a == 'F') ou/|| (b != 32), for verdadeira.
  - Operador **NEGAÇÃO** (!): inverte o valor lógico da expressão à qual se aplica. Por exemplo, a expressão !(x == 10) se transforma em (x > 10 || x < 10).

 Os operadores Lógicos atuam sobre valores lógicos e retornam um valor lógico:

  - 1: se a expressão é verdadeira.
  - 0: se a expressão é falsa.

    

  
