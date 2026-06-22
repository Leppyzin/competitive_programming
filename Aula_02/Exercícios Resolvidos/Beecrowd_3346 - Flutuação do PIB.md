# Flutuação do PIB

 Probleminha insuportável 

 ```
#include <stdio.h>

int main(){
    double pibini,f1,f2,pibfin,aux1,aux2; //declaracao das nossas variaveis

    pibini = 100.00; // declaracao de um pib inicial/padrao
    
    scanf("%lf%lf",&f1,&f2); // Leitura de dados

    aux1 = pibini * ((f1/100.00)+1); // aux1 para somar o primeiro valor da variação do pib
    
    aux2 = (aux1 * ((f2/100.00) + 1)); // aux2 somando o segundo valor da variação do pib com base no primeiro 
    
    printf("%.6lf\n",aux2-100); // Imprimindo na tela usando -100 para voltar no valor padrão da variação do pib

    return 0;
}
```
