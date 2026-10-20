#include <stdio.h>

int main() {
    int E, F, C;
    int total = 0;

    scanf("%d %d %d", &E, &F, &C);

    E += F;

    while (E >= C) {
        E = E - C + 1;
        total++;
    }

    printf("%d\n", total);

    return 0;
}
