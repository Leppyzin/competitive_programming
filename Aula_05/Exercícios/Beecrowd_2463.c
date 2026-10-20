#include <stdio.h>

int main(){
    int n,i,vidas,aux=0,aux2=0;
    scanf("%d",&n);
    
    for(i=1; i<=n; i++){
        scanf("%d",&vidas);
        
        aux += vidas;
        if(aux < 0){
            aux = 0;
        }
        if(aux > aux2){
            aux2 = aux;
        }
    }
    
    printf("%d\n",aux2);

    return 0;
}
