# Expressões de comparação

  Na Linguagem C, uma condição é definida por uma única expressão ou por uma expressão de comparações(algo que contém uma combinação de várias comparações). As expressões sempre retornam um valor verdade(Booliano): **Verdadeiro** ou **Falso.** Como não existem tipos específicos **bool** na Linguagem C, Variáveis inteiras são utilizadas para armazenar e representar seguindo a convenção:
  
  - **Verdadeiro:** Valor inteiro diferente de zero
  - **Falso:** Valor inteiro igual a zero

  Por **condição** entende-se tudo aquilo que usa operadores relacionais ou qualquer expressão relacional (ou seja, que use os operadores >, <, >=, <=, == ou !=) que resulte em uma resposta do tipo **verdadeiro** ou **falso.**
==)
  Por exemplo, para a condição x > 0 temos que:

   - Se o valor de x for um valor **POSITIVO,** a condição será considerada **VERDADEIRA.**
   - Se o valor de X for um valor **NEGATIVO ou igual a ZERO,** a condição será considerada **FALSA.**

  Já uma expressão condicional é qualquer expressão que resulte em uma resposta do tipo **verdadeiro** ou **falso,** ela pode ser contruída utilizando operadores:

  -**Matemáticos:** +,-,*,/,%==)
  -**Relacionais:>,<,>=,<=,==**
  -**Booliano/Lógicos: &&,||**

  Esses operadores permitem criar condições mais complexas, como mostra o exemplo seguinte, no qual se deseja saber se a divisão de **x** por 2 é maior do que o valor de **y** menos 3:

  -**x/2 > y-3**

  ```
  x eh maior ou igual a y?
       x >= y
==)
  x eh maior do que y+2?
       x > y+2

  x-5 eh diferente de y+3?
       x-5 != y+3

  x eh maior do que y e menor do que z?
       (x > y) && (x < z)
   ```

  Quando o compilador avalia uma condição, ele quer um valor de retorno (**Verdadeiro ou Falso**) para poder tomar a decisão. No entanto, essa expressão condicional não necessita ser uma expressão no sentido convencional.

  **Uma variável sozinha pode ser uma expressão condicional e retornar seu próprio valor.**

  Para entender isso, é importante lembrar que o computador trabalha internamente em termos de 0's e 1's. Assim, se uma condição:

  - É considera **FALSA,** o computador considera que aquela condição possui valor **ZERO.**
  - É considerada **VERDADEIRA**, o computador considera que aquela condição possui um valor **DIFERENTE DE ZERO**

  Isso significa para a gente que o valor de uma variável do tipo inteiro pode ser a resposta de uma expressão condicional:

  - Se o valor da variável for igual a **ZERO,** a condição é **FALSA.**
  - Se o valor da variável for **DIFERENTE DE ZERO,** a condição é **VERDADEIRA.**

## Comparações Simples

  As notações a seguir consideram-se dois valores ```a``` e ```b```, que podem ser numéricos (```int```,```float```,```double``` e ```long long int```), ou do tipo ```char```(Lembrem-se da tabela ASCII).

### Igualdade 

 Retorna **Verdadeiro** se ```a``` for igual a ```b```, ou falso caso contrário. Basicamente, essa comparação responde a pergunta "a é igual a b?"

 sintaxe da comparação:
 ```a == b```

 ### Diferente (!=)

  Retorna verdadeiro se ```a``` for diferente de ```b```, ou falso caso contrário. Basicamente, essa comparação responde a pergunta: "a é diferente de b??"

  sintaxe da comparação: 
  ``` a != b ```
  

  ### Maior (>)

  Retorna verdadeiro se ```a``` for maior de que ```b```, ou falso caso contrário. Basicamente, essa comparação responde a pergunta: "a é maior que b?"

  sintaxe da comparação:
  ```a > b```

  ### Maior (>=)

   Retorna verdadeiro se ```a``` for maior ou igual a ```b```, ou falso caso contrário. Basicamente, essa comparação responde a pergunta: "a é maior ou igual a b?"

   sintaxe da comparação:
   ```a >= b```

   **É errado digitar ```=>```, isso não existe.**   

   ### Menor (<)

   Retorna verdadeiro se ```a``` for menor do que ```b```, ou falso caso contrário. Basicamente, essa comparação responde a pergunta: "a é menor que b?"

   sintaxe da comparação:
   ```a < b```

  ### Menor ou igual (<=)

   Retorna verdadeiro se ```a``` for menor ou igual a ```b```, ou falso caso contrário. Basicamente essa comparação responde a pergunta: "a é menor ou igaul a b?"

   sintaxe da comparação:
   ```a <= b```

   ## Operadores Lógicos para Múltiplas Comparações

  A composição de múltiplos comparadores demanda o uso de operadores lógicos. Nas tabelas a seguir, as variáveis ```A``` e ```B``` são valores verdade, em que ```1``` é a constante associada ao valor verdadeiro, e o ```0``` é o valor verdade falso.


  ### OPERADOR LÓGICO NÃO (!)

  A | ! A |
 ---|-----|
  0 |  1  |
  1 |  0  |

  ### OPERADOR LÓGICO E (&&)

  A | B | A && B|
  --|---| ----- |
  0 | 0 |   0   |
  0 | 1 |   0   |
  1 | 0 |   0   |
  1 | 1 |   1   |

  ### OPERADOR LÓGICO OU (||)

  A | B | A II B |
  --|---|--------|
  0 | 0 |    0   |
  0 | 1 |    1   |
  1 | 0 |    1   |
  1 | 1 |    1   |

  
