# Problema 2413 - Busca na internet

  Nesse problema conseguimos perceber que o João é muito é cheio de frescura, como nós percebemos isso mas não queremos perder a amizade dele, vamos ajudá-lo;

  Esse nosso problema tem duas(2) resoluções, uma delas é de fato a detalhada e explicada, explica o que você está fazendo de fato... Vamos mostrar essas duas formas de resolver os problemas.
  
```
#include <stdio.h>

int main(){
     int p,x,s; //Declaração das minhas variáveis

    scanf("%d",&p); //Leitura da Entrada do meu problema e número de pessoas que clicaram no terceiro link

    s = p*2; //Conta da quantidade de pessoas que clicaram no segundo link
    x = s*2; //Conta da quantidade de pessoas que clicaram no primeiro link

    printf("%d\n",x); //Imprimindo meu resultado

    return 0;
}
```
### Atenção!!
  **João não quer que você seja um betinha, João quer que você entenda a Lógica dele primeiro e só depois ele quer que você otimize o código para ele**

  Então pensando no bem da nossa amizade com o João, vamos manter a primeira resolução como a principal pois é a que envolve a lógica da coisa.

## Parte Otimizada/Simples do código

```
#include <stdio.h>

int main(){
    int p,x; //Declaração das minhas variáveis
    
    scanf("%d",&p); //Leitura da minha variável do terceiro link
    
    x = p*4; //Conta otimizada do cálculo de pessoas do terceiro para o primeiro link
    
    printf("%d\n",x); //Impressão do resultado da quantidade de pessoas que clicaram no terceiro link

    return 0;
}
```

   ## Também temos a segunda opção mais simples e otimizada ainda
``` 
#include <stdio.h>

int main(){
    int p;
        
    scanf("%d",&p);
        
    printf("%d\n",p*4);
    
    return 0;
}
```

 ### Ambas recebem "Accepted" no Beecrowd

 Então você deve está se perguntando o que diferencia uma da outra. É justamente a lógica. Em uma nós temos a lógica mais pura do problema, em outra nós temos uma lógica mais "direta" e na outra mais enxuta ainda. 
 **MODESTO E AGORA???? I DON'T KNOW, O QUE EU FAÇO??** A Solução é simples maguinho... Ela é simples, só não é facil!! RSRS. **FAÇAM AS TRÊS SOLUÇÕES, FOCANDO PRIMEIRO NA SOLUÇÃO LÓGICA E SÓ DEPOIS NA OTIMIZADA!!**

 # ATENÇÃO!!!!

 ### REPAREEEEE!!!!!!!!!! João não pede um programa otimizado e enxuto, ele pede um programa com a lógica correta. Logo, se deu Accepted no Beecrowd, parabéns, você conseguiu :)
