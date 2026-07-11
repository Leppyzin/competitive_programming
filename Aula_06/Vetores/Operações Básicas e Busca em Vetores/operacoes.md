# Tarefas com Vetores 

Listamos a seguir algumas tarefas comuns ao se trabalhar com vetores em Linguagem C.

## Somar os n elementos de um vetor

```
#include <stdio.h>

int main(){
    int i,n, soma;
    int arr[1000];

    scanf("%d",&n);

    for(i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    soma = 0;

    for(i = 0; i < n; i++){
        soma = soma + arr[i];
    }
    printf("Soma = %d\n", soma);

    return 0;
}
```
