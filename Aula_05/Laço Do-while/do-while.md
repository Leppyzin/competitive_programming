# Laço Do-while

## Definição

A estrutura de repetição ```do-while```, ao contrário da [while](https://github.com/Leppyzin/competitive_programming/blob/main/Aula_05/La%C3%A7o%20While/While.md), executa uma série de comandos **antes** de verificar se a condição é verdadeira. Isso significa que o bloco de código será executado ao menos uma vez.

```
do{
    // bloco de comandos
} while(condição);
```

 Note que o ponto e vírgula vem após a condição do ```while```, sendo necessário para o bom funcionamento do código.

 A ordem de execução do laço ```do-while```, como se segue:

   1. Entra no bloco ```do```;
   2. Executa o que está dentro do bloco;
   3. Avalia a condição definida do ```while```.
   4. Se for verdadeira, volta para o começo do bloco ```do```, e se for falsa, encerra o laço.


  A funcionalidade da estrutura ```do-while``` é geralmente elaborada tendo em vista menus interativos com o usuário ou validações de entrada.

  ### Exemplos

  **Menu Interativ:**

```
#include <stdio.h>

int main(){
    int n;

    do{
        printf("Menu:\n");
        printf("a) Digite qualquer numero diferente de 0 para repetir o laco\n");
        printf("b) Digite 0 para sair do laco");

        scanf("%d",&n);
    } while(n != 0);

    printf("Fim do programa.\n");

    return 0;
}
```

### Validação de entrada

```
#include <stdio.h>

int main(){
    int senha;

    do{
        scanf("%d",&senha);
    } while(senha != 4321);

    return 0;
    return 0;
}
```

 Esse bloco de código lerá um número até que a condição do ```while``` seja falsa, portanto igual a 4321. No entanto, podemos executar essa mesma função com o ```while```:

 ```
    scanf("%d", &senha);

    while(senha != 4321){
        scanf("%d",&senha);
    }
```
