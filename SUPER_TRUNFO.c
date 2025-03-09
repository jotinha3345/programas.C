#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[3], codigo2[3];
    char nome1[20], nome2[20];
    double populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int num_pontos1, num_pontos2;

    // Leitura da primeira carta
    printf("Defina uma letra para o seu estado de A a H (Carta 1):\n");
    scanf(" %c", &estado1);

    printf("Digite um código para sua carta (Carta 1): \n");
    scanf("%s", codigo1);

    printf("Digite o nome de uma cidade para sua carta (Carta 1):\n");
    scanf("%s", nome1);

    printf("Qual a população dessa cidade? (Carta 1):\n");
    scanf("%lf", &populacao1);

    printf("Qual a área desta cidade? (Carta 1):\n");
    scanf("%f", &area1);

    printf("Qual o PIB da cidade? (Carta 1):\n");
    scanf("%f", &PIB1);

    printf("Quantos pontos turísticos há? (Carta 1):\n");
    scanf("%d", &num_pontos1);

    // Leitura da segunda carta
    printf("\nDefina uma letra para o seu estado de A a H (Carta 2):\n");
    scanf(" %c", &estado2);

    printf("Digite um código para sua carta (Carta 2): \n");
    scanf("%s", codigo2);

    printf("Digite o nome de uma cidade para sua carta (Carta 2):\n");
    scanf("%s", nome2);

    printf("Qual a população dessa cidade? (Carta 2):\n");
    scanf("%lf", &populacao2);

    printf("Qual a área desta cidade? (Carta 2):\n");
    scanf("%f", &area2);

    printf("Qual o PIB da cidade? (Carta 2):\n");
    scanf("%f", &PIB2);

    printf("Quantos pontos turísticos há? (Carta 2):\n");
    scanf("%d", &num_pontos2);

    // Exibição das duas cartas
    printf("\nCarta 1\n");
    printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %.2lf\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %d\n",
           estado1, codigo1, nome1, populacao1, area1, PIB1, num_pontos1);

    printf("\nCarta 2\n");
    printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %.2lf\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %d\n",
           estado2, codigo2, nome2, populacao2, area2, PIB2, num_pontos2);

    return 0;
}

