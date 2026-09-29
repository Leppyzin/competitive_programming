#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    
    for(int i=0; n >= i; i++){
        if(i%2 == 1){
            printf("%d\n",i);
        }
    }

    return 0;
}
