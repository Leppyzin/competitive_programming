# Tapetes

 O problema do tapetão deu trabalho para muita gente KKKKKKKK

 Achei um problema bem divertido e treina bastante a lógica


 ```
#include <stdio.h> // Estrutura basica

int main(){
    long long int total,aux,l,n,sa; // Para nao termos problemas com OverFlow, declaremos como long long int
    
    scanf("%lld%lld",&l,&n); // Leitura de dados
    
    aux = n-1; // auxiliar para definir o resto dos tapetes que nao vamos usar
    
    sa = ((l-n+1)); // conta para descobrir a area total do maior tapete, onde nós vamos pegar o comprimento e diminuir pela a quantidade de tapetes para depois adicionarmos +1 para termos o maior tapete (considerando 10-5 = 5 + 1 = 6) 
    
    total = sa*sa+aux; // após esse passo muito chato, basta somar o quadrado do seu maior tapete ao restante 6^2 + aux = 40
    
    printf("%lld\n",total);

    return 0;
}
```
