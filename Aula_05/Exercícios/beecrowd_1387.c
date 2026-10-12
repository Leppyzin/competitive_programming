#include <stdio.h>

int main(){
    int s,l,r;
    while(1){
        scanf("%d %d",&l,&r);
        if(l == 0 && r == 0){
            break;
        }
        s = l+r;
        
        printf("%d\n",s);
        
    }
    return 0;
}
