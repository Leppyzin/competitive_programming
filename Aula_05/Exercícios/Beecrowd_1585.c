#include <stdio.h>

int main(){
    int area,n,x,y;
    scanf("%d",&n);
    
    for(int i=0; i < n; i++){
        scanf("%d%d",&x,&y);
        area = x*y/2;
        printf("%d cm2\n",area);
    }

    return 0;
}
