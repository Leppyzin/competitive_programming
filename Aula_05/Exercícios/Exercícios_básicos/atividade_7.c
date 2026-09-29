#include <stdio.h>

int main(){
    int n,aux,aux2=0;
    printf("digite a quantidade de valores que voce quer somar:\n");
    scanf("%d",&n);
    
    for(int i=0; i < n; i++){
        scanf("%d",&aux);
        aux2 += aux;
    }
    printf("a soma dos seus valores eh: %d\n",aux2);

    return 0;
}
