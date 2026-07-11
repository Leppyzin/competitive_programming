# Ordenação

 **Ordenação** é o processo de reorganizar os elementos de uma estrutura de dados, como um vetor ou lista, de acordo com uma determinada **relação de ordem**. Essa relação pode ser, por exemplo,
 **numérica crescente, alfabética, decrescente**, entre outras.

  Você deverá utilizar a **ordenação** para facilitar operações de busca ou análise dos dados. Muitos algoritmos e aplicações dependem de dados ordenados para obter eficiência ou resultados corretor.

  ## Ideia

   O laço externo (relacionado com a variável ```i```) percorre cada elemento do vetor. É nessa posição que o i-ésimo menor elemento será encontrado. O laço interno (relacionado com a variável ```j```) compara o elemento ```v[i]``` (na posição i) com todos os elementos após ele (j>i),
   isto é, ```v[i+1], v[i+2],...,v[n-1].```. Sempre que o elemento ```v[i]``` for maior que ```v[j]```, os dois elementos são trocados. No final, o vetor estará ordenado em ordem crescente.

   ```
void ordena(int v[1000],int n){
    int i,j,backup;

    for(i = 0; i < n-1; i++){
        for(j = i+1; j < n; j++){
            if(v[i] > v[j]){
                backup = v[i];
                v[i] = v[j];
                v[j] = backup;
            }
        }
    }
}
```
**Atenção:** como esse algoritmo de ordenação é exetremamente ineficiente, ele deve ser executado somente para casos em que ```n``` seja menor ou igual 1000. Caso contrário, para valores de ```n``` maiores do que 1000, você pode receber o veredito **Time Limit Exceeded** no juíz automático.

## Código-fonte Completo (com Entrada)

```
#include <stdio.h>

void ordena(int v[1000], int n){
    int i,j,aux;

    for(i = 0; i < n-1; j++){
        if(v[i] > v[j]){
            aux = v[i];
            v[i] = v[j];
            v[j] = aux;
        }
    }
}

int main(){
    int i,n;
    int arr[1000];

    scanf("%d",&n);

    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    ordena(arr,n);

    for(i = 0; i < n-1; i++){
        printf("%d ",arr[i]);
    }
    printf("%d\n",arr[n-1]);

    return 0;  
}
```
