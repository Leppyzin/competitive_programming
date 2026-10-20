#include <stdio.h>

int main(){
    int n;
    
    while(scanf("%d",&n) != EOF){
        printf("%d\n",(n+99)/100);
    }

    return 0;
}
