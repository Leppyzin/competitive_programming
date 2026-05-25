# Operadores Aritméticos

  Os operadores aritméticos são aqueles que operam sobre números (**valores, variáveis, constantes ou chamada de funções**) e/ou expressões e têm como resultados valores numéricos. A linguagem C possui um total de cinco operadores aritméticos.

  Operador | Significado | Exemplo |
  -------- | ----------- | ------- |
  operador (+)| Adição de dois valores | z = x+y |
  operador (-)| Subtração de dois valores | z = x-y |
  operador (*)| Multiplicação de dois valores | z = x*y |
  operador (/)| quociente de dois valores | z = x/y |
  operador (%)| resto de uma divisão | z = x%y |

  Note que os operadores aritméticos são sempre usados em conjunto com o operador de atribuição. Afinal de contas, alguém precisa receber o resultado da expressão aritmética.
  **Em uma expressão, as operações de multiplicação, divisão e resto são executadas antes das operações de adição e subtração. Para forçar uma operação a ser executada antes das demais, ela é colocada entre parênteses.**

   Considere a expressão
   ```z = x * y + 10;```

   Nela, o valor de **x** será multiplicado pelo o valor de **y**, e o resultado dessa multiplicação será somado ao valor **10** para só então ser atribuído à variável **z**. Se quusermos a operação de adição antes da de multiplicação, basta colocá-la entre **parênteses.**
 Assim, na expressão
 ```z = x * (y + 10);```

   O valor de **y** será multiplicado pelo valor de **y,** e o resultado dessa multiplicação será somado ao valor **10** para só então ser multiplicado.
