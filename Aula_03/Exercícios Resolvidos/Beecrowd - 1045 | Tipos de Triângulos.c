#include <stdio.h>

int main(){
    double a,b,c,aux;
    scanf("%lf%lf%lf",&a,&b,&c);

    if(b > a){
        aux = a;
        a = b;
        b = aux;
    }
    if(c > a){
        aux = a;
        a = c;
        c = aux;
    }

    if(a >= b+c){
        printf("NAO FORMA TRIANGULO\n");
        return 0;    
    } else if (a*a == (b*b)+c*c){
        printf("TRIANGULO RETANGULO\n");
    } else if (a*a > (b*b)+c*c){
        printf("TRIANGULO OBTUSANGULO\n");
    } else if (a*a < (b*b)+c*c){
        printf("TRIANGULO ACUTANGULO\n");  
    }

    if(a == b && b == c){
        printf("TRIANGULO EQUILATERO\n");
    } else if (a == b || a == c || c == b){
        printf("TRIANGULO ISOSCELES\n");
    } 

    return 0;
}
