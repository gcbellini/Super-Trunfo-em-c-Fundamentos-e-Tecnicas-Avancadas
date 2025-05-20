#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {

    setlocale(LC_ALL, "portuguese");

    printf("\n\n--Bem vindo ao Super Trunfo!--\n\n");
    printf("Vamos fazer as suas cartas!\n\n");
    system("pause");
    system("cls");

    // Primeira carta

    char estado1;
    char codigo1[4];
    char nome1[30];
    int pop1;
    float area1;
    float pib1;
    int pontos1;

    printf("\n\nInsira os dados da sua primeira carta:\n\n");

    printf("\nQual o estado a carta representa? ");
    scanf(" %c", &estado1);
    limparBuffer();

    printf("\nQual o código da carta? ");
    fgets(codigo1, 3, stdin);
    codigo1[strcspn(codigo1, "\n")] = 0;
    limparBuffer();

    printf("\nQual o nome do estado? ");
    fgets(nome1, 29, stdin);
    nome1[strcspn(nome1, "\n")] = 0;
    limparBuffer();

    printf("Qual a população? ");
    scanf("%d", &pop1);
    limparBuffer();

    printf("\nQual a área (em km quadrados)? ");
    scanf("%f", &area1);
    limparBuffer();

    printf("\nQual o PIB (em bilhôes de reais)? ");
    scanf("%f", &pib1);
    limparBuffer();

    printf("\nQuantos pontos turísticos ela têm? ");
    scanf("%d", &pontos1);
    limparBuffer();

    float dens1 = pop1 / area1;
    float capita1 = (pib1 * 1000) / pop1;

    printf("\n\nÓtimo! Vamos para a sua segunda carta.\n\n");
    system("pause");
    system("cls");

    // Segunda carta

    char estado2;
    char codigo2[4];
    char nome2[30];
    int pop2;
    float area2;
    float pib2;
    int pontos2;

    printf("\n\nInsira os dados da sua segunda carta:\n\n");

    printf("\nQual o estado a carta representa? ");
    scanf(" %c", &estado2);
    limparBuffer();

    printf("\nQual o código da carta? ");
    fgets(codigo2, 3, stdin);
    codigo2[strcspn(codigo2, "\n")] = 0;
    limparBuffer();

    printf("\nQual o nome do estado? ");
    fgets(nome2, 29, stdin);
    nome2[strcspn(nome2, "\n")] = 0;
    limparBuffer();

    printf("Qual a população? ");
    scanf("%d", &pop2);
    limparBuffer();

    printf("\nQual a área (em km quadrados)? ");
    scanf("%f", &area2);
    limparBuffer();

    printf("\nQual o PIB (em bilhôes de reais)? ");
    scanf("%f", &pib2);
    limparBuffer();

    printf("\nQuantos pontos turísticos ela têm? ");
    scanf("%d", &pontos2);
    limparBuffer();

    float dens2 = pop2 / area2;
    float capita2 = (pib2 * 1000) / pop2;

    printf("\n\nPerfeito! Vamos ver como ficaram as suas cartas.\n\n");
    system("pause");
    system("cls");

    // Exibindo os dados das cartas

    printf("Essas são suas cartas!\n\n");

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome1);
    printf("População: %d\n", pop1);
    printf("Área: %.2f km quadrados\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos1);
    printf("Densidade populacional: %.2f\n", dens1);
    printf("PIB per Capita: %.2f milhões de reais\n", capita1);

    printf("\n\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %d\n", pop2);
    printf("Área: %.2f km quadrados\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f\n", dens2);
    printf("PIB per Capita: %.2f milhões de reais\n", capita2);

    return 0;
}
