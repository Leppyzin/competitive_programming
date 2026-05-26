# Operadores de Atribuição simplificada

  Como vimos anteriormente, muitos operadores são sempre usados em conjunto com o operador de atribuição. Para tornar essa tarefa mais simples, a linguagem C permite simplificar algumas expressões, como mostra a Tabela a seguir;

  operador | significado | exemplo |
  ---------|-------------|---------|
  operador "+=" | soma e atribui | (x += y) = (x = x + y) |
  operador "-=" | subtrai e atribui | (x -= y) = (x = x - y) |
  operador "*=" | multiplica e atribui | (x *= y) = (x = x * y) |
  operador "/=" | divide e atribui quociente | (x /= y) = (x = x / y) | 
  operador "%=" | divide e atribui o resto | (x %/ y) = (x = x % y) | 
  operador "&=" | E bit a bit e atribui | (x &= y) = (x = x & y) |
  operador "I=" | OU bit a bit e atribui | (x I= y) = (x = x I y) |
  operador "^=" | OU exclusivo e atribui | (x ^= y) = (x = x ^ y) |
  operador "<<="| Desloca à esquerda e atribui | (x <<= y) = (x = x <<= y) |
  operador ">>="| Desloca à direita e atribui | (x >>= y) = (x = x >>= y) |

   Como se pode notar, esse tipo de operador é muito útil quando a variável que vai receber o resultado da expressão é também um dos operandos da expressão. Por exemplo, a expressão

   ```x = x + y - 10;```

   pode ser reescrita usando o operador simplificado como

   ```x += y - 10;```

   **Apesar de ser útil**, devemos tomar cuidado com esse tipo de operador, principalmente quando unimos numa mesma expressão operadores com diferentes precedências.

   Algumas simplificações podem mudar o sentido da expressão original devido à questão da precedência (por exemplo, multiplicações e divisões são sempre realizadas antes de somas e subtrações).
