#include <stdio.h>
#include <math.h>

int main() {
    int Q;
    long long L, R, resultado;

    scanf("%d", &Q);

    for (int i = 0; i < Q; i++) {
        scanf("%lld %lld", &L, &R);

        resultado = (long long)sqrtl(R);

        if (L > 0) {
            resultado -= (long long)sqrtl(L - 1);
        } else {
            resultado++;
        }

        printf("%lld\n", resultado);
    }

    return 0;
}
