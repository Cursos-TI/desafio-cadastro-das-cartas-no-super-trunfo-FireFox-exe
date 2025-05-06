#include <stdio.h>

int main() {
    char codigo1[10], estado1[20];
    int populacao1, pontos1;
    float area1, pib1;

    char codigo2[10], estado2[20];
    int populacao2, pontos2;
    float area2, pib2;

    // Carta 1
    printf("Cadastro Carta 1:\n");

    printf("Código: ");
    scanf("%s", codigo1);

    printf("Estado: ");
    scanf("%s", estado1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos turísticos: ");
    scanf("%d", &pontos1);

    // Carta 2
    printf("\nCadastro Carta 2:\n");

    printf("Código: ");
    scanf("%s", codigo2);

    printf("Estado: ");
    scanf("%s", estado2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);
    
    printf("Pontos turísticos: ");
    scanf("%d", &pontos2);

    // Exibição
    printf("\nCarta 1:\nCódigo: %s\nEstado: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %d\n",
           codigo1, estado1, populacao1, area1, pib1, pontos1);

    printf("\nCarta 2:\nCódigo: %s\nEstado: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %d\n",
           codigo2, estado2, populacao2, area2, pib2, pontos2);

    return 0;
}
