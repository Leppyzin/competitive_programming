#include <stdio.h>

int main(){
    int impar=0,par=0,pos=0,neg=0,a,b=0;
    while(b<5){
        scanf("%d",&a);
        if(a>=0){
            if(a%2 == 0){
                par++;
            } else{
                impar++;
            }
        } else {
            neg++;
            if(a%2 == 0){
                par++;
            } else{
                impar++;
            }
        } 
        if(a >= 1){
            pos++;
        }
        b++;
    }
    printf("%d valor(es) par(es)\n",par);
    printf("%d valor(es) impar(es)\n",impar);
    printf("%d valor(es) positivo(s)\n",pos);
    printf("%d valor(es) negativo(s)\n",neg);

    return 0;
}
