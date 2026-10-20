#include <stdio.h>

int main() {
    int N, X;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &X);

        if (X == 0) {
            printf("NULL\n");
        } else {
            if (X % 2 == 0) {
                printf("EVEN ");
            } else {
                printf("ODD ");
            }

            if (X > 0) {
                printf("POSITIVE\n");
            } else {
                printf("NEGATIVE\n");
            }
        }
    }

    return 0;
}
