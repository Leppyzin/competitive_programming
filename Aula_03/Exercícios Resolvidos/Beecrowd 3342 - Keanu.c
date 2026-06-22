#include <stdio.h>

int main(){
    int n,a,b;
    scanf("%d",&n);
    
    n = n*n;
    
    if(n%2 == 0){
        a = n/2;
        b = n/2;
        printf("%d casas brancas e %d casas pretas\n",a,b);
    } else if(n%2 == 1){
        a = (n+1)/2;
        b = (n-1)/2;
        printf("%d casas brancas e %d casas pretas\n",a,b);
    }

    return 0;
}
