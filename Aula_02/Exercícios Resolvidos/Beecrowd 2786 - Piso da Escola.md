# Piso da Escola

 ### Eita diretora que gosta de complicar o fácil, nunca tinha visto eoem.

```
#include <stdio.h>

int main(){
    int lar,comp,inteira,metade; //declaracao das variaveis
    
    scanf("%d\n%d",&lar,&comp); //Leitura das variaveis
    
    inteira = (lar*comp) + ((lar-1)*(comp-1));  //Calculo para saber a quantidade dos pisos do tipo 1
    metade = (((lar-1)*2) + ((comp-1)*2)); //Calculo para saber a quantidade dos pisos do tipo 2

    printf("%d\n%d\n",inteira,metade); //imprimindo os resultados
    
    return 0;
}
```

  Um problema que muitas pessoas usariam IF e ELSE sem necessidade alguma, entao cuidado com esses peguinhas, tem muito peguinha que eh so para pesar o programa, tem que ficar de zoio.
