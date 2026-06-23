#include <stdio.h>

int main(){
    int b,g,s,d,aux;
    scanf("%d%d",&b,&g);
    
    aux = g/2;
    
    if(b > aux || b == aux){
        printf("Amelia tem todas bolinhas!\n");
        return 0;
    }
    
    if(g%2 == 0){
       d = g/2;
       s = d-b;
       printf("Faltam %d bolinha(s)\n",s);
    } else{
        g-1;
        d = g/2;
        if(d%2 == 0){
            s = d-b;
            printf("Faltam %d bolinha(s)\n",s);
            
        }
    }


    return 0;
}
