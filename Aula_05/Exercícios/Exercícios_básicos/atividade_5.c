#include <stdio.h>

int main(){
    int n,aux;
    scanf("%d",&n);
    
    for(int i=0; i <= n; i++){
        if(i%2 == 0){
            aux += i;
            printf("%d\n",aux);
        }
    }


    return 0;
}
