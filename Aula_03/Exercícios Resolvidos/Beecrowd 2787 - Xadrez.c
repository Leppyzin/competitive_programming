#include <stdio.h>

int main(){
    int l,c,n,aux;
    scanf("%d%d",&l,&c);
    
    n = l%2;
    aux = c%2;
    
    if(n == 0 && aux == 1){
        printf("0\n");
    } else if (n == 1 && aux == 1){
        printf("1\n");
    } else if(n == 1 && aux == 0){
        printf("0\n");
    } else if(n == 0 && aux == 0){
        printf("1\n");
    }
    
    return 0;
}
