#include <stdio.h>

int main() {
    int n, ci, vi, total;

    while (scanf("%d", &n) == 1 && n != 0) {
        total = 0;

        for (int i = 0; i < n; i++) {
            scanf("%d %d", &ci, &vi);
            total += vi / 2;
        }

        printf("%d\n", total / 2);
    }

    return 0;
}
