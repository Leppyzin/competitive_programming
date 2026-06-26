#include <stdio.h>

int main(){
    int a,b,c;
    
    scanf("%d%d%d",&a,&b,&c);
    
    if(a == c || a == b || b == c){
        printf("S\n");
    } else if((a + b == c) || (a + c == b) || (c + b) == a){
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}
