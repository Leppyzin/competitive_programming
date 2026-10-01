#include <stdio.h>

int main() {
    int cont = 1, n, beto, aldo;
    
    while (scanf("%d", &n) && n != 0) {
        int aldoaux = 0, betoaux = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d %d", &aldo, &beto);
            aldoaux += aldo;
            betoaux += beto;
        }
        
        printf("Teste %d\n", cont++);
        if (aldoaux > betoaux) {
            printf("Aldo\n");
        } else {
            printf("Beto\n");
        }
        
        printf("\n");
    }

    return 0;
}
