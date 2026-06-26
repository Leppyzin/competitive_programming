#include <stdio.h>

int main(){
    int a,b,c,ma,mb,mc;
    scanf("%d%d%d",&a,&b,&c);
    
    if(a > b && a > c){
        ma = 3;
        if(b > c){
        mb = 2;
        mc = 1;
        } else if(c > b){
            mc = 2;
            mb = 1;
        }
    } else if(b > a && b > c){
        mb = 3;
        if(a > c){
            ma = 2;
            mc = 1;
        } else if (c > a){
            mc = 2;
            ma = 1;
        }
    } else if(c > a && c > b){
        mc = 3;
        if(a > b){
            ma = 2;
            mb = 1;
        } else if(b > a){
            mb = 2;
            ma = 1;
        }
    }
    
    if(ma > mb && mb > mc){
        printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",c,b,a,a,b,c);
    } else if(ma > mc && mc > mb){
        printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",b,c,a,a,b,c);
    } else if(mb > ma && ma > mc){
        printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",c,a,b,a,b,c);
    } else if(mb > mc && mc > ma){
        printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",a,c,b,a,b,c);
    } else if(mc > ma && ma > mb){
        printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",b,a,c,a,b,c);
    } else if(mc > mb && mb > ma){
        printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",a,b,c,a,b,c);
    }
    
    
    return 0;
}
