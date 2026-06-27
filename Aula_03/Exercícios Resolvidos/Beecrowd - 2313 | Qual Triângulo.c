#include <stdio.h>

int main() {
    int a, b, c, maior, maior2, maior3;

    scanf("%d%d%d", &a, &b, &c);

    if (a == b && b == c) {
        printf("Valido-Equilatero\n");
        printf("Retangulo: N\n");
        return 0;
    }

    if (a >= b && a >= c) {
        maior = a;
        if (b >= c) {
            maior2 = b;
            maior3 = c;
        } else {
            maior2 = c;
            maior3 = b;
        }
    } else if (b >= a && b >= c) {
        maior = b;
        if (a >= c) {
            maior2 = a;
            maior3 = c;
        } else {
            maior2 = c;
            maior3 = a;
        }
    } else {
        maior = c;
        if (a >= b) {
            maior2 = a;
            maior3 = b;
        } else {
            maior2 = b;
            maior3 = a;
        }
    }

    if (maior < maior2 + maior3) {
        if (a == b || b == c || a == c) {
            printf("Valido-Isoceles\n");
        } else {
            printf("Valido-Escaleno\n");
        }

        if (maior * maior == maior2 * maior2 + maior3 * maior3) {
            printf("Retangulo: S\n");
        } else {
            printf("Retangulo: N\n");
        }
    } else {
        printf("Invalido\n");
    }

    return 0;
}
