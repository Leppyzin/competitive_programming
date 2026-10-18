#include <stdio.h>

int main()
{
    int x,c,n;
    scanf("%d",&c);
    x = 1;
    while(x <= c){
        scanf("%d",&n);
        if(n > 8000){
          printf("Mais de 8000!\n");
        } else {
          printf("Inseto!\n");
        }
        x++;
    }
    return 0;
}

