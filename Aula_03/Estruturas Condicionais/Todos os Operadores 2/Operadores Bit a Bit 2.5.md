# Operadores Bit a Bit

  A linguagem C permite que se façam alterações "bit a bit" em valores numéricos. Na memória do computador, um valor ou número é sempre representado por sua forma binária. Assim, o número **44** é representado pelo seguinte conjunto de 0s e 1s na memória: **00101100.** Os operadores bit a bit permitem que o programador faça operações em cada bit do número de maneira direta.

  ### Os operadores bit a bit ajudam os programadores que queiram tabalhar com o computador em "Baixo Nível"!!  

  <br>

  ### Os seis operadores bit a bit

  ![bit a bit](https://github.com/Leppyzin/Programacao_Competitiva/blob/main/Arquivos_img/Operadores_bit_a_bit.png?raw=true)

  Na tabela acima, temos os operadores ~,&,|, e ^, que são operações lógicas que atuam em cada um dos bits do número (por isso, bit a bit). Já os operadores de deslocamento << e >> servem para rotacionar o conjunto de bits do número à esquerda ou à direita.

  ### Os operadores bit a bit só podem ser usados nos tipos **char**, **int** e **long**.  

   Os operadores bit a bit não podem ser aplicados sobre valores dos tipos **float** e **double**.
   Em parte, isso se deve à maneira como um valor real, também conhecido como **ponto flutuante**, é representado nos computadores. A representação desses tipos segue a criada por Konrad Zuse, pela qual um número é dividido em uma *mantissa* (**M**) e um *exponente* (**E**). O valor representado é obtido pelo produto *M * 2<sup>e<\sup>*. Como se vê, a representação desses tipos é bem mais complexa: Não se trata de apenas um conjunto de 0s e 1s na memória.  


   Uma coisa que nós podemos deixar para destrinchar futuramente...
  
