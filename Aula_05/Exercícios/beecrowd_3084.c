#include <stdio.h>

int main() {
    int h, m;
    int hora, minuto;

    while (scanf("%d %d", &h, &m) != EOF) {
        hora = h / 30;
        minuto = m / 6;

        printf("%02d:%02d\n", hora, minuto);
    }

    return 0;
}
