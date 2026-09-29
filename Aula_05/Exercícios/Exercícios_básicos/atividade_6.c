#include <stdio.h>

int main(){
    int n,aux;
    scanf("%d",&n);
    aux = n;
    
    for(int i=1; i <= n; i++){
        printf("%d\n",aux--);
    }
    printf("FIM!\n");

    return 0;
}
