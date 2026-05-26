# Operadores relacionais

  Os operadores relacionais são aqueles que operam sobre dois valores (**valores, variáveis, constantes ou chamadas de funções**) e/ou expressões e verificam a magnitude (qual é maior ou menor) e/ou igualdade entre eles.

  ### Os operadores relacionais são operadores de comparação de valores.

   A linguagem C possui um total de seis operadores relacionais, como mostra a tabela a seguir;

   Operador | Significado | Exemplo |
   ---------|-------------|---------|
Operador ">"| maior ou igual a | x > 5  | 
Operador ">="| Maior ou igual a | x >= 10 |
Operador "<" | Menor do que    |   x < 5 |
Operador "<="| Menor ou igual a | x <= 10 |
Operador "=="| Igual a         | x == 0  |
Operador "!="| Diferente de    | x != 0  | 

  Como resultado, esse tipo de operador retorna:

   - O valor **UM** (1), se a expressão relacional for considerada **verdadeira.**
   - O valor **ZERO** (0), se a expressão relacional for considerada **falsa**

     ### Não existem operadores relacionais: "=<, "=>" e "<>".

     Os símbolos "=<" e "=>" estão digitados na ordem invertida. O correto é "<=" (menor ou igual a) e  ">=" (maior ou igual a).
     Já o símbolo "<>" é o operador de diferente da linguagem Pascal, não da linguagem C. O correto é "!=".

     ### Não confunda o operador de atribuição "=" com o operador de comparação "==".

      Esse é um erro bastante comum quando se está programando em Linguagem C. O operador de atribuição é definido por **UM** símbolo de igual (=), enquanto
     o operador de comparação é definido por **DOIS** Símbolos de igual (==). Se você tentar colocar o operador de comparação em uma operação de atribuição,
      o compilador acusará um erro. O mesmo não acontece se você acidentalmente colocar o operador de atribuição "=" no lugar do operador de comparação "==".
