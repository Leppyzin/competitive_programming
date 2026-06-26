#include <stdio.h>

int main(){
    double n1,n2,n3,n4,media,aux,exame,medianova;
    scanf("%lf%lf%lf%lf",&n1,&n2,&n3,&n4);

    aux = (n1*2.0)+(n2*3.0)+(n3*4.0)+(n4*1.0);

    media = aux/10.0;

    printf("Media: %.1lf\n",media);

    if(media >= 7.0){
        printf("Aluno aprovado.\n");
    } else if(media < 5.0){
        printf("Aluno reprovado.\n");
    } else {
        printf("Aluno em exame.\n");
        scanf("%lf",&exame);
        printf("Nota do exame: %.1lf\n",exame);
        medianova = (exame+media)/2;
        if(medianova >= 5.0){
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n",medianova);
    }

    return 0;
}
