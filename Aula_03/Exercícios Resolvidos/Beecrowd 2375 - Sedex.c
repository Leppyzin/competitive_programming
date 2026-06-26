#include <stdio.h>

int main(){
    int n,a,l,p;
    scanf("%d%d%d%d",&n,&a,&l,&p);
    
    if(n <= a && n <= l && n <= p){
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}
