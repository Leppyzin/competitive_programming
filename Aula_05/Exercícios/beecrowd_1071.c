#include <stdio.h>

int main(){
    int soma=0,x,y,temp;
    scanf("%d%d",&x,&y);
    
    if(x > y){
        temp = x;
        x = y;
        y = temp;
    }
    
    for(int i=x+1; i < y;i++){
        if(i%2 != 0){
            soma += i;
        }
    }
    
     printf("%d\n",soma);

    return 0;
}
