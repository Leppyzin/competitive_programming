# Imposto de Renda

Exercício muito chato sobre a "Taxa das bruzinha"!!

```
#include <stdio.h>

int main(){
    float aux,sala,salaf,aux2,aux3,somat,aux4;
    
    scanf("%f",&sala);
    
    if(sala <= 2000.00){
        printf("Isento\n");
        return 0;
    }
    
    salaf = sala - 2000.00;
    
    
    
    if(salaf > 0){
        if(salaf <= 1000.00){
            aux = salaf*0.08;
            printf("R$ %.2f\n",aux);
            return 0;
        } else {
            salaf = salaf - 1000.00;
            aux = 1000.00*0.08;
        }
    } if(salaf > 0){
        if(salaf <= 1500.00){
            aux2 = salaf*0.18;
            printf("R$ %.2f\n",aux+aux2);
            return 0;
        } else {
            salaf = salaf - 1500.00;
            aux3 = 1500.00*0.18;
        } 
    } if(salaf > 0){
        aux4 = salaf*0.28;
        somat = aux+aux2+aux3+aux4;
        printf("R$ %.2f\n",somat);
        return 0;
    }
    

    return 0;
}
```
