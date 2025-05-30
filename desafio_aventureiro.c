#include <stdio.h>


int populacao1 = 10000000, populacao2 = 12000000;
float area1 = 850000.0, area2 = 920000.0;
float pib1 = 2000.0, pib2 = 1800.0;
int pontos1 = 15, pontos2 = 18;

float densidade1, densidade2;

char pais1[] = "Brasil";
char pais2[] = "Argentina";

int main() {
    int opcao;

    
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    printf("=== SUPER TRUNFO PAÍSES ===\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Escolha um atributo para comparar: ");
    scanf("%d", &opcao);

    printf("Comparando %s e %s\n", pais1, pais2);

    switch (opcao) {
        case 1:
            printf("População: %d * %d\n", populacao1, populacao2);
            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", pais1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Área: %.2f km² * %.2f km²\n", area1, area2);
            if (area1 > area2)
                printf("Vencedor: %s\n", pais1);
            else if (area2 > area1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("PIB: %.2f bilhões * %.2f bilhões\n", pib1, pib2);
            if (pib1 > pib2)
                printf("Vencedor: %s\n", pais1);
            else if (pib2 > pib1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Pontos Turísticos: %d * %d\n", pontos1, pontos2);
            if (pontos1 > pontos2)
                printf("Vencedor: %s\n", pais1);
            else if (pontos2 > pontos1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Densidade Demográfica: %.2f hab/km² * %.2f hab/km²\n", densidade1, densidade2);
            if (densidade1 < densidade2)
                printf("Vencedor: %s\n", pais1);  
            else if (densidade2 < densidade1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}
