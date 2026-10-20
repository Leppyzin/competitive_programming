#include <stdio.h>

int main() {
    int N, G;
    double P, preco, menor;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%lf %d", &P, &G);

        preco = (P * 1000.0) / G;

        if (i == 0 || preco < menor) {
            menor = preco;
        }
    }

    printf("%.2lf\n", menor);

    return 0;
}
