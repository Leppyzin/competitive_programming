#include <stdio.h>

int main() {
    int H, Z, L;

    // Lê as três idades apenas uma vez
    scanf("%d %d %d", &H, &Z, &L);

    // Verifica Huguinho como o do meio
    if ((H > Z && H < L) || (H < Z && H > L)) {
        printf("huguinho\n");
    }
    // Verifica Zezinho como o do meio
    else if ((Z > H && Z < L) || (Z < H && Z > L)) {
        printf("zezinho\n");
    }
    // Se não for Huguinho nem Zezinho, só pode ser Luisinho
    else {
        printf("luisinho\n");
    }

    return 0;
}
