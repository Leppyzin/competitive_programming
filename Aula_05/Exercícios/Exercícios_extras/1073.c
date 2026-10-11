#include <stdio.h>

int main(){
    int x,pot;
    scanf("%d",&x);
    
    for(int i=2; i<=x; i += 2){
        pot = i*i;
        printf("%d^2 = %d\n",i,pot);
    }
    
    return 0;
}
