#include <stdio.h>

int main() {
    int d, i, x, f, preco;

    scanf("%d %d %d %d", &d, &i, &x, &f);

    preco = i;

    for (int dia = d + 1; dia <= d + f; dia++) {
        if (dia % 2 == 0){
            preco += x;
        }else{
            preco -= x;
        }
    }

    printf("%d\n", preco);

    return 0;
}
