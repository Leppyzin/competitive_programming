#include <stdio.h>

int main(){
    int res=0;
    
    for(int i=0; i <=1000;i++){
        if(i%3 == 0 || i%5 == 0){
            res += i;
        }
    }
    printf("%d\n",res);

    return 0;
}
