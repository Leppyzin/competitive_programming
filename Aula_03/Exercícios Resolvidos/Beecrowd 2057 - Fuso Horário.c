#include <stdio.h>

int main(){
    int hf,s,t,f,aux=24,soma;
    
    scanf("%d%d%d",&s,&t,&f);
  
    soma = (s+t+f);  
  
    if(soma >= 0){
        hf = s+t+f;
        if(hf <= 24 && hf >= 0){
            printf("%d\n",hf);
        } else if(hf > 24){
            hf = soma-aux;
            printf("%d\n",hf);
        }
    } else if (soma < 0) {
        hf = soma+aux;
        printf("%d\n",hf);
    }
    
    
    return 0;
}
