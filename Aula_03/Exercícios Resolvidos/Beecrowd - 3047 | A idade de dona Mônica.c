#include <stdio.h>

int main(){
    int m,a,b,aux;
    
    scanf("%d%d%d",&m,&a,&b);
    
    aux = m - (a+b);
    
    if(aux > a && aux > b){
        printf("%d\n",aux);
    } else if(a > aux && a > b){
        printf("%d\n",a);
    } else if(b > a && b > aux){
        printf("%d\n",b);
    }

    return 0;
}
