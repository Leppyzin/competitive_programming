#include <stdio.h>

int main(){
    int n=0,pos=0;
    double a,media;
    
    while(n < 6){
        scanf("%lf",&a); 
        if(a >= 0){
            pos++;
            media += a;
        }
        n++;
    }
    
    printf("%d valores positivos\n",pos);
    printf("%.1lf\n",media/pos);
    

    return 0;
}
