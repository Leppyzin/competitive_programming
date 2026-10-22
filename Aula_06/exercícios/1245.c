#include <stdio.h>

int main(){
    int n;
    while(scanf("%d",&n) != EOF){
        int m[n],pares = 0;
        char l[n];
        
        for(int i=0;i < n;i++){
            scanf("%d %c",&m[i],&l[i]);
        }
        
        for(int i=0; i < n; i++){
            for(int j=i+1; j < n; j++){
                if(m[i] != 0 && m[i] == m[j]){
                    if(l[i] != l[j]){
                        pares++;
                        m[i] = 0;
                        m[j] = 0;
                    }
                }
            }  
        }
        
        printf("%d\n",pares);
    }
  
    return 0;
}
