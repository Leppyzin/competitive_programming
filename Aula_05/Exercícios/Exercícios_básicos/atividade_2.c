#include <stdio.h>

int main(){
    int n,aux;
    scanf("%d",&n);
    aux = n;
    
    for(int i = 0; n >= i; i++){
        printf("%d\n",aux--);
    }


    return 0;
}
