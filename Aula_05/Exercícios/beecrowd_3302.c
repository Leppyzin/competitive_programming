#include <stdio.h>

int main() {
    int N, valor;

    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        scanf("%d", &valor);

        printf("resposta %d: %d\n", i, valor);
    }

    return 0;
}
