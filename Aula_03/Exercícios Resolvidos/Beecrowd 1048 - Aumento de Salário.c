#include <stdio.h>

int main(){
    double sala,salan,rea;
    
    scanf("%lf",&sala);
    
    if(sala > 0 && sala <= 400.00){
        
        rea = 0.15*sala;
        salan = rea+sala;
        
        printf("Novo salario: %.2lf\n",salan);
        printf("Reajuste ganho: %.2lf\n",rea);
        printf("Em percentual: 15 %%\n");
    
    } else if(sala > 400.00 && sala <= 800.00){
        
        rea = 0.12*sala;
        salan = rea+sala;
        
        printf("Novo salario: %.2lf\n",salan);
        printf("Reajuste ganho: %.2lf\n",rea);
        printf("Em percentual: 12 %%\n");
  
   } else if(sala > 800.00 && sala <= 1200.00){
        
        rea = 0.10*sala;
        salan = rea+sala;
        
        printf("Novo salario: %.2lf\n",salan);
        printf("Reajuste ganho: %.2lf\n",rea);
        printf("Em percentual: 10 %%\n");
   
   } else if(sala > 1200.00 && sala <= 2000.00){
        
        rea = 0.07*sala;
        salan = rea+sala;
        
        printf("Novo salario: %.2lf\n",salan);
        printf("Reajuste ganho: %.2lf\n",rea);
        printf("Em percentual: 7 %%\n");
   
   } else if(sala > 2000.00){
        
        rea = 0.04*sala;
        salan = rea+sala;
        
        printf("Novo salario: %.2lf\n",salan);
        printf("Reajuste ganho: %.2lf\n",rea);
        printf("Em percentual: 4 %%\n");
   
   }

    return 0;
}
