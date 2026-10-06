#include <stdio.h>

int main() {
    int inter, gremio, opcao;
    int grenais = 0, vInter = 0, vGremio = 0, empates = 0;

    scanf("%d %d", &inter, &gremio);

    while (1) {
        grenais++;

        if (inter > gremio)
            vInter++;
        else if (gremio > inter)
            vGremio++;
        else
            empates++;

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &opcao);

        if (opcao == 2)
            break;

        scanf("%d %d", &inter, &gremio);
    }

    printf("%d grenais\n", grenais);
    printf("Inter:%d\n", vInter);
    printf("Gremio:%d\n", vGremio);
    printf("Empates:%d\n", empates);

    if (vInter > vGremio)
        printf("Inter venceu mais\n");
    else if (vGremio > vInter)
        printf("Gremio venceu mais\n");
    else
        printf("Nao houve vencedor\n");

    return 0;
}
