#include <stdio.h>

/*
  Desafio Super Trunfo - Países
  Nível: Iniciante
  Objetivo: Cadastro e exibição de duas cartas de cidades.
*/

int main() {
    // --- Variáveis para a Carta 1 ---
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadepopulacional1;
    float pibpercapta1;

    // --- Variáveis para a Carta 2 ---
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidadepopulacional2;
    float pibpercapta2;


    //---ENTRADA DE DADOS----
    printf("Estado entre A--H\n");
    scanf("%c",&estado1);
    printf("Codigo EX A01 \n");
    scanf("%s", codigo1);
    printf("Cidade\n");
    scanf(" %[^\n]s", cidade1);
    printf("Populacao\n");
    scanf("%d", &populacao1);
    printf("Area\n");
    scanf("%f",&area1);
    printf("Pib\n");
    scanf("%f",&pib1);
    printf("Pontos turisticos\n");
    scanf("%d",&pontosTuristicos1);

    //---ENTRADA DE DADOS 2----
    printf("Estado entre A--H\n");
    scanf(" %c",&estado2);
    printf("Codigo AO2 \n");
    scanf("%s", codigo2);
    printf("Cidade\n");
    scanf(" %[^\n]s", cidade2);
    printf("Populacao\n");
    scanf("%d", &populacao2);
    printf("Area\n");
    scanf("%f",&area2);
    printf("Pib\n");
    scanf("%f",&pib2);
    printf("Pontos turisticos\n");
    scanf("%d",&pontosturisticos2);
    //---RESPOSTA PC 1----
    printf("\n----------------------\n");
    printf("carta 1 \n");
    printf(" estado- %c \n",estado1);
    printf(" codigo- %s \n", codigo1);
    printf(" cidade- %s \n", cidade1);
    printf(" populacao- %d \n", populacao1);
    printf(" area- %.2f \n", area1);
    printf(" pib-%.2f \n",pib1);
    printf(" pontos turisticos- %d \n",pontosTuristicos1);
    densidadepopulacional1 = (populacao1 / area1);
    printf("desidade populacional é: %f\n", densidadepopulacional1);
    pibpercapta1 = (pib1 / populacao1);
    printf("o PIB é: %f\n", pibpercapta1);

    //---RESPOSTA PC 2---- 
    printf("\n----------------------\n");
    printf("carta 2 \n");
    printf(" estado- %c \n",estado2);
    printf(" codigo- %s \n", codigo2);
    printf(" cidade- %s \n", cidade2);
    printf(" populacao- %d \n", populacao2);
    printf(" area- %.2f \n", area2);
    printf(" pib-%.2f \n",pib2);
    printf(" pontos turisticos- %d \n",pontosturisticos2);
    densidadepopulacional2 = (populacao2 / area2);
    printf("desidade populacional é: %f\n", densidadepopulacional2);
    pibpercapta2 =(float) (pib2 / populacao2);
    printf("o PIB é: %f\n", pibpercapta2);

    return 0;

}    