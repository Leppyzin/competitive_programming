#include <stdio.h>

int main(){
    int cont=1,n,j,z,diff;
    scanf("%d",&n);
    
    while(n != 0){
        
        diff=0;
        printf("Teste %d\n",cont);
        cont++;
        
        for(int i=0;n > i;i++){
            scanf("%d%d",&j,&z);
            
            if(j < z){
                diff += j - z;
            } else if(z < j){
                diff += (j - z);
            } else {
                diff = diff;
            }
            
            printf("%d\n",diff);
            
        }
        
        printf("\n");
    
        scanf("%d",&n);
        
    }

    return 0;
}
