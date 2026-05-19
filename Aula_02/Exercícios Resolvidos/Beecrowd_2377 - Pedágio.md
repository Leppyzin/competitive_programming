# Pedágio

  Problema com gosto de problema mesmo.
  
```
#include <stdio.h>

int main(){
    int comp,disp,cuspkm,valorp,cdisf,qp,valorf;

    scanf("%d %d\n%d %d",&comp,&disp,&cuspkm,&valorp);

    qp = comp/disp;

    cdisf = comp*cuspkm;

    valorf = cdisf + (qp * valorp);

    printf("%d\n",valorf);

    return 0;
}
```
