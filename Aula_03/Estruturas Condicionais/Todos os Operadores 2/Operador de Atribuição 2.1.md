# O operador de Atribuição "="

  Uma das operações mais utilizadas em programação é a operação de atribuição "=". Ela é responsável por armazenar determinado valor em uma variável. Em linguagem C, o uso do operador de atribuição "=" segue está forma geral:

  ``` nome_da_variavel = expressão```

  Por expressão entende-se qualquer combinação de **Valores**, **Variáveis**, **constantes** ou **chamada de funções** utilizando os operadores
  matématicos ```+```,```-```,```*```,```/``` e ```%```, que resulte em uma resposta do mesmo tipo da variável definida por **nome_da_variável.**

  Veja o seguinte código como exemplo;

![atribuicao1](https://github.com/Leppyzin/Programacao_Competitiva/blob/main/Arquivos_img/atribuicao_codigo.png?raw=true)

### Saída

![atribuicao2](https://github.com/Leppyzin/Programacao_Competitiva/blob/main/Arquivos_img/atribuicao_codigo_resultado.png?raw=true)

 Nesse exemplo, conseguimos notar que o operador de at6-05-25 15-22-25ribuição pode ser utilizado no momento da declaração da variável (linha 8). Desse modo, a variável já é declarada possuindo um valor inicial.

 ### Atenção!!!!!

  O operador de atribuição "=" armazena o valor ou resultado de uma expressão contida à sua **direita** na variável especificada à sua esquerda.

  A seguir veremos formas incorretas e corretas de se armazenar uma variável:

  ![correta](https://github.com/Leppyzin/Programacao_Competitiva/blob/main/Arquivos_img/corretoeerradoatribuicao.png?raw=true)

  ### Atençãoo 2.0!!!!

  É importante sempre ter em mente que o operador de atribuição "=" calcula a expressão à direita do operador "=" e atribui esse valor à variável à esquerda do operador, nunca o contrário.

  ### Informação que pode ser importante!!!

   A linguagem C suporta múltiplas atribuições. Como por exemplo no código a seguir:

   ![matribuicoes](https://github.com/Leppyzin/Programacao_Competitiva/blob/main/Arquivos_img/codigo_matribuicao.png?raw=true)

   ### Saída

   ![matribuicoesr](https://github.com/Leppyzin/Programacao_Competitiva/blob/main/Arquivos_img/codigo_matribuicaor.png?raw=true)

   Nesse exemplo, o valor 5 é copiado para a variável z. Lembre-se: o valor da **direita** é sempre armazenado na variável especificada à sua **Esquerda.** Em seguida, o valor de z é copiado para a variável y e, na sequência, o valor de y é copiado para x.
   A linguagem C também permite a atribuição entre tipos básicos diferentes. O compilador **converte** automaticamente o valor do lado direito para o tipo do lado esquerdo do comando de atribuição "=". Durante a etapa de conversão de tipos, pode haver perda de informação.
   **Na conversão de tipos pode haver perda de informação.**

   

    

  
