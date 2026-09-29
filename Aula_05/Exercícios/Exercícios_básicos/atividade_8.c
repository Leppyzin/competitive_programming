#include <stdio.h>

int main(){
    int n,media,valores,media2;
    scanf("%d",&n);
    
    for(int i=1; i <= n; i++){
        scanf("%d",&valores);
        valores += valores;
        media += valores;
        media2 = (media/n)/2;
    }
    printf("%d\n",media2);

    return 0;
}
