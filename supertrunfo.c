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

    // --- Variáveis para a Carta 2 ---
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuriscos2;


    //---ENTRADA DE DADOS----
    printf("qual o seu estado entra A--H\n");
    scanf("%c",&estado1);
    printf("qual o seu codigo \n");
    scanf("%s", codigo1);
    printf("qual a sua cidade\n");
    scanf(" %[^\n]s", cidade1);
    printf("qual a populacao\n");
    scanf("%d", &populacao1);
    printf("qual a area\n");
    scanf("%f",&area1);
    printf("qual o pib\n");
    scanf("%f",&pib1);
    printf("quantos pontos turisticos\n");
    scanf("%d",&pontosTuristicos1);

    //---ENTRADA DE DADOS 2----
    printf("qual o seu estado entra A--H\n");
    scanf(" %c",&estado2);
    printf("qual o seu codigo \n");
    scanf("%s", codigo2);
    printf("qual a sua cidade\n");
    scanf(" %[^\n]s", cidade2);
    printf("qual a populacao\n");
    scanf("%d", &populacao2);
    printf("qual a area\n");
    scanf("%f",&area2);
    printf("qual o pib\n");
    scanf("%f",&pib2);
    printf("quantos pontos turisticos\n");
    scanf("%d",&pontosTuriscos2);

    return 0;

}    