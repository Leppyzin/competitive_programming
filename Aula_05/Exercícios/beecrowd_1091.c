#include <stdio.h>

int main(){
    int k,n,m,x,y;
    
    while(scanf("%d",&k) && k != 0){
        scanf("%d%d",&n,&m);
        for(int i=0;i<k;i++){
            scanf("%d%d",&x,&y);
            
            if(n == x || m == y){
                printf("divisa\n");
            } else if(x > n){
                if(y > m){
                    printf("NE\n");
                } else {
                    printf("SE\n");
                }
            } else if(x < n){
                if(y > m){
                    printf("NO\n");
                } else {
                    printf("SO\n");
                }
            }
        }
    }

    return 0;
}
