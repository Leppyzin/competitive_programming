//O problema 1 é bem básico, ele utiliza uma variável do tipo inteiro e utiliza a soma de dois inteiros, execute isso e parábens!! resolveu o problema!

#include <stdio.h>

int main(){ //estrutura basica da linguagem C
    int x,y,r; //declarando minhas variáveis do tipo inteiro
    char buf[64]; //buffer para leitura segura

    fgets(buf, sizeof(buf), stdin); //recebendo os valores variáveis do meu usúario.
    sscanf(buf, "%d %d", &x, &y);
  
    r = x+y; //aqui estou atribuindo "==" um valor da soma dos 2 termos para a minha variável

    printf("X = %d\n",r); // aqui estou apenas printando meu resultado no caso a soma das minhas duas variáveis

    return 0; //confirma que está tudo bem com o programa.
}
