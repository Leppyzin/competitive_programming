#include <stdio.h>

int main(){
    int l,c,x,y;
    
    scanf("%d%d%d%d",&l,&c,&x,&y);
    
    if((x*c+y)%2 == 0){
        printf("Direita\n");
    } else {
        printf("Esquerda\n");
    }

    return 0;
}
