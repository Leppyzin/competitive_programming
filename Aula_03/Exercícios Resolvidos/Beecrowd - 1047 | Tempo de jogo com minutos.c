#include <stdio.h>

int main() {
    int hi, mi, hf, mf, tempoh, tempom;

    scanf("%d%d%d%d", &hi, &mi, &hf, &mf);

    if (hf > hi) {
        tempoh = hf - hi;
    } else if (hf < hi) {
        tempoh = hf - hi + 24;
    } else { // hf == hi
        tempoh = 24;
    }

    if (mf >= mi) {
        tempom = mf - mi;
    } else {
        tempom = 60 + mf - mi; // como aqui ultrapasso a marca de 60 minutos na primeira soma e depois pego a subtracao disso tudo, tenho que remover o tempo da hora que peguei "emprestada"
        tempoh--;  
    }


    if(tempoh == 24){
        tempoh = 0;
    }

    if (tempoh == 0 && tempom == 0){
        tempoh = 24;
    }
    
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tempoh, tempom);

    return 0;
}
