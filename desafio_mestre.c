#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    char nome1[20] = "TIME AZUL";
    char nome2[20] = "TIME VERMELHO";

    int ataque1, ataque2;
    int defesa1, defesa2;
    int recuo1, recuo2;

    int opcao1, opcao2;
    int valorCarta1Atributo1, valorCarta1Atributo2, valorCarta2Atributo1, valorCarta2Atributo2;
    int soma1, soma2;
    int pontos1 = 0, pontos2 = 0;

    srand(time(0));

    ataque1 = rand() % 100 + 1;
    ataque2 = rand() % 100 + 1;
    defesa1 = rand() % 100 + 1;
    defesa2 = rand() % 100 + 1;
    recuo1 = rand() % 100 + 1;
    recuo2 = rand() % 100 + 1;

    printf("*** JOGO SUPER TRUNFO ***\n");
    printf("Atributos disponíveis:\n");
    printf("1 - Ataque\n");
    printf("2 - Defesa\n");
    printf("3 - Recuo\n");

    printf("Valores aleatórios gerados:\n");
    printf("%s - Ataque: %d, Defesa: %d, Recuo: %d\n", nome1, ataque1, defesa1, recuo1);
    printf("%s - Ataque: %d, Defesa: %d, Recuo: %d\n\n", nome2, ataque2, defesa2, recuo2);

    printf("Escolha o primeiro atributo: ");
    scanf("%d", &opcao1);

    if(opcao1 < 1 || opcao1 > 3) {
        printf("Opcao invalida para primeiro atributo!\n");
    }

    printf("Escolha o segundo atributo (diferente do primeiro): ");
    scanf("%d", &opcao2);

    if(opcao2 < 1 || opcao2 > 3) {
        printf("Opcao invalida para segundo atributo!\n");
    }

    if(opcao2 == opcao1) {
        printf("Segundo atributo deve ser diferente do primeiro!\n");
    }

    if (opcao1 == 1) { valorCarta1Atributo1 = ataque1; valorCarta2Atributo1 = ataque2; }
    else if (opcao1 == 2) { valorCarta1Atributo1 = defesa1; valorCarta2Atributo1 = defesa2; }
    else { valorCarta1Atributo1 = recuo1; valorCarta2Atributo1 = recuo2; }

    if (opcao2 == 1) { valorCarta1Atributo2 = ataque1; valorCarta2Atributo2 = ataque2; }
    else if (opcao2 == 2) { valorCarta1Atributo2 = defesa1; valorCarta2Atributo2 = defesa2; }
    else { valorCarta1Atributo2 = recuo1; valorCarta2Atributo2 = recuo2; }

    printf("Comparando os atributos escolhidos...\n");

    if (valorCarta1Atributo1 > valorCarta2Atributo1) {
        pontos1++;
    } else if (valorCarta2Atributo1 > valorCarta1Atributo1) {
        pontos2++;
    }

    if (valorCarta1Atributo2 > valorCarta2Atributo2) {
        pontos1++;
    } else if (valorCarta2Atributo2 > valorCarta1Atributo2) {
        pontos2++;
    }

    soma1 = valorCarta1Atributo1 + valorCarta1Atributo2;
    soma2 = valorCarta2Atributo1 + valorCarta2Atributo2;

    printf("--- RESULTADO ---\n");
    printf("%s: %d + %d = %d\n", nome1, valorCarta1Atributo1, valorCarta1Atributo2, soma1);
    printf("%s: %d + %d = %d\n", nome2, valorCarta2Atributo1, valorCarta2Atributo2, soma2);

    if (soma1 > soma2) {
        printf("Vencedor: %s\n", nome1);
    } else if (soma2 > soma1) {
        printf("Vencedor: %s\n", nome2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
