#include <stdio.h>

int main() {
    int n, m;

    while (scanf("%d %d", &n, &m) && (n != 0 || m != 0)) {
        int contagem[10001] = {0};
        int cont = 0;

        for (int i = 0; i < m; i++) {
            int t;
            scanf("%d", &t);

            if (contagem[t] == 1) {
                cont++;
            }

            contagem[t]++;
        }

        printf("%d\n", cont);
    }

    return 0;
}
