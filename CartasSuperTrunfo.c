#include <stdio.h>

int main() {
   char codigo1[10], estado1[20];
   int populacao1, pontos1;
   float area1, pib1;
   
   char codigo2[10], estado2[20];
   int populacao2, pontos2;
   float area2, pib2;

   double densidade1, densidade2;
   double pib_per_capita1, pib_per_capita2; 
   
   // Carta 1
   printf("** Cadastro Carta 1 **\n");
   
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
   printf("\n** Cadastro Carta 2 **\n");
    
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

   //calculos demograficos
   densidade1 = (double) populacao1 / area1;
    
   densidade2 = (double) populacao2 / area2;
    
   pib_per_capita1 = (double) pib1 / populacao1;
    
   pib_per_capita2 = (double) pib2 / populacao2;
    
   // Exibição
   printf("\n** Carta 1 **\nCódigo: %s\nEstado: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %d\nDensidade populacional: %.2lf\nPib Per Capita: %.2f\n",
   codigo1, estado1, populacao1, area1, pib1, pontos1, densidade1, pib_per_capita1);
       
   printf("\n** Carta 2 **\nCódigo: %s\nEstado: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %d\nDensidade populacional: %.2lf \nPib Per Capita: %.2f\n",
   codigo2, estado2, populacao2, area2, pib2, pontos2, densidade2, pib_per_capita2);
   
   // Duelo simples entre as cartas
   printf("\n** Comparações (1 = Carta 1 venceu, 0 = Carta 2 venceu) **\n");
   printf("Populacao: %d\n", populacao1 > populacao2);
   printf("Area: %d\n", area1 > area2);
   printf("PIB: %d\n", pib1 > pib2);
   printf("Pontos turísticos: %d\n", pontos1 > pontos2);
   printf("Densidade populacional: %d\n", densidade1 > densidade2);
   printf("PIB per capita: %d\n", pib_per_capita1 > pib_per_capita2);
         
return 0;
}