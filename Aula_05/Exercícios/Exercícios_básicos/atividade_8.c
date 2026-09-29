#include <stdio.h>

int main(){
    int n, media = 0, valores;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        scanf("%d", &valores);
        media += valores;
    }

    media = media / n;

    printf("%d\n", media);

    return 0;
}
