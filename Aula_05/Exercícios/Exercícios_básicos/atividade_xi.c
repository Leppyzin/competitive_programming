#include <stdio.h>

int main(){
    int n,div;
    scanf("%d",&n);
    
    for(int i=1; i < n; i++){
        if(n%i == 0){
            div += i;
            printf("%d\n",div);
        }
    }

    return 0;
}
