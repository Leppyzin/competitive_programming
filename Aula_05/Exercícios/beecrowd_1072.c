#include <stdio.h>

int main(){
    long long int n,x,in=0,out=0;
    
    scanf("%lld",&n);
    
    for(int i=0; i < n;i++){
        scanf("%lld",&x);
        
        if(x >= 10 && x <= 20){
            in++;
        } else {
            out++;
        }
    }
    
    printf("%lld in\n",in);
    printf("%lld out\n",out);

    return 0;
}
