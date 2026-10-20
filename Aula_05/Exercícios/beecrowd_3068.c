#include <stdio.h>

int main() {
    int X1, Y1, X2, Y2;
    int N, X, Y;
    int contador = 0;
    int teste = 1;

    while (scanf("%d %d %d %d", &X1, &Y1, &X2, &Y2) == 4) {

        if (X1 == 0 && Y1 == 0 && X2 == 0 && Y2 == 0) {
            break;
        }

        scanf("%d", &N);

        contador = 0;

        for (int i = 0; i < N; i++) {
            scanf("%d %d", &X, &Y);

            if (X >= X1 && X <= X2 &&
                Y >= Y2 && Y <= Y1) {
                contador++;
            }
        }

        printf("Teste %d\n", teste);
        printf("%d\n", contador);

        teste++;
    }

    return 0;
}
