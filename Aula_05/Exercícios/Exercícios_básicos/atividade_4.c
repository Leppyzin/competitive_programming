#include <stdio.h>

int main(){
    int n;
    
    printf("quantos multiplos de 3 voce quer?\n");
    scanf("%d",&n);
    
    for(int i=1; n >= i;i++){
        printf("%d\n",3*i);
    }
    
    

    return 0;
}
