#include <stdio.h>

int main() {
    int h1, m1, h2, m2;

    while (scanf("%d %d %d %d", &h1, &m1, &h2, &m2) == 4
           && (h1 || m1 || h2 || m2)) {

        int atual  = h1 * 60 + m1;
        int alarme = h2 * 60 + m2;
        int dormir = alarme - atual;

        if (dormir < 0)
            dormir += 24 * 60;

        printf("%d\n", dormir);
    }

    return 0;
}
