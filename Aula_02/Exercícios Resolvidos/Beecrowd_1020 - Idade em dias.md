# Idade em dias
## um programa bem chato, se nao for pro papel nao sai nada.

```
#include <stdio.h>

int main(){
    int entrada,dia,mes,ano,aux; //declaracao das variaveis
    scanf("%d",&entrada); //leitura das variaveis

    ano = entrada/365;  //leitura da quantidade de ano/s
    
    aux = entrada%365; //leitura para uma variavel auxiliar do resto dos dias que sobrou do ano

    dia = aux%30; //leitura da quantidade de dias com o resto que sobrou do ano por 30 para calcular o resto dos dias

    mes = aux/30; //leitura da quantidade de mes(es), que eh o resultado da divisao do resto de ano por 30

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",ano,mes,dia);

    return 0;
}
```
 Num sei pra q saber a idade em dias, ninguem sabe quantos dias de vida tem, eoem.
