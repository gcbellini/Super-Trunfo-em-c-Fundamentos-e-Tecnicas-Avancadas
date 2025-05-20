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

    printf("\n\nBem vindo ao...\n");
    printf("\n--- Super Trunfo ---\n\n");
    printf("Vamos fazer as suas cartas!\n\n");
    system("pause");
    system("cls");

    // Primeira carta

    char estado1;
    char codigo1[4];
    char nome1[30];
    unsigned long int pop1;
    float area1;
    float pib1;
    int pontos1;

    printf("\n\nInsira os dados da sua primeira carta:\n\n");

    printf("\nQual o estado a carta representa? ");
    scanf(" %c", &estado1);
    limparBuffer();

    printf("\nQual o c�digo da carta? ");
    fgets(codigo1, 3, stdin);
    codigo1[strcspn(codigo1, "\n")] = 0;
    limparBuffer();

    printf("\nQual o nome do estado? ");
    fgets(nome1, 29, stdin);
    nome1[strcspn(nome1, "\n")] = 0;
    limparBuffer();

    printf("Qual a popula��o? ");
    scanf("%lu", &pop1);
    limparBuffer();

    printf("\nQual a �rea (em km quadrados)? ");
    scanf("%f", &area1);
    limparBuffer();

    printf("\nQual o PIB (em bilh�es de reais)? ");
    scanf("%f", &pib1);
    limparBuffer();

    printf("\nQuantos pontos tur�sticos ela t�m? ");
    scanf("%d", &pontos1);
    limparBuffer();

    // Com os dados, criamos as vari�veis e calculamos o PIB per Capita
    //  a Densidade Populacional da primeira carta
    float dens1 = pop1 / area1;
    float capita1 = (pib1 * 1000000000) / pop1;

    // Com todos os dados, criamos e calculamos
    // o Super Poder da primeira carta
    float super1 = pop1 + area1 + pib1 + pontos1 + capita1 + (1.0 / dens1);

    printf("\n\n�timo! Vamos para a sua segunda carta.\n\n");
    system("pause");
    system("cls");

    // Segunda carta

    char estado2;
    char codigo2[4];
    char nome2[30];
    unsigned long int pop2;
    float area2;
    float pib2;
    int pontos2;

    printf("\n\nInsira os dados da sua segunda carta:\n\n");

    printf("\nQual o estado a carta representa? ");
    scanf(" %c", &estado2);
    limparBuffer();

    printf("\nQual o c�digo da carta? ");
    fgets(codigo2, 3, stdin);
    codigo2[strcspn(codigo2, "\n")] = 0;
    limparBuffer();

    printf("\nQual o nome do estado? ");
    fgets(nome2, 29, stdin);
    nome2[strcspn(nome2, "\n")] = 0;
    limparBuffer();

    printf("Qual a popula��o? ");
    scanf("%lu", &pop2);
    limparBuffer();

    printf("\nQual a �rea (em km quadrados)? ");
    scanf("%f", &area2);
    limparBuffer();

    printf("\nQual o PIB (em bilh�es de reais)? ");
    scanf("%f", &pib2);
    limparBuffer();

    printf("\nQuantos pontos tur�sticos ela t�m? ");
    scanf("%d", &pontos2);
    limparBuffer();

    // Com os dados, criamos as vari�veis e calculamos o PIB per Capita
    // e a Densidade Populacional da segunda carta
    float dens2 = pop2 / area2;
    float capita2 = (pib2 * 1000000000) / pop2;

    // Com todos os dados, criamos e calculamos
    // o Super Poder da segunda carta
    float super2 = pop2 + area2 + pib2 + pontos2 + capita2 + (1.0 / dens2);

    printf("\n\nPerfeito! Vamos ver como ficaram as suas cartas.\n\n");
    system("pause");
    system("cls");

    // Exibindo os dados das cartas
    // Primeira carta

    printf("\n\nEssas s�o suas cartas!\n\n");

    printf("\n");
    printf("              --- Carta 1 ---              \n");
    printf("-------------------------------------------\n");

    printf("| Estado: %c\n", estado1);
    printf("| C�digo: %s\n", codigo1);
    printf("| Nome da cidade: %s\n", nome1);

    printf("| Popula��o: %lu\n", pop1);
    printf("| �rea: %.2f km quadrados\n", area1);
    printf("| PIB: %.2f bilh�es de reais\n", pib1);
    printf("| N�mero de pontos tur�sticos: %d\n", pontos1);

    printf("| Densidade populacional: %.2f\n", dens1);
    printf("| PIB per Capita: %.2f reais\n", capita1);
    printf("| Super Poder: %.2f\n", super1);

    printf("-------------------------------------------\n");

    printf("\n\n");
    printf("              --- Carta 2 ---              \n");
    printf("-------------------------------------------\n");

    printf("| Estado: %c\n", estado2);
    printf("| C�digo: %s\n", codigo2);
    printf("| Nome da cidade: %s\n", nome2);

    printf("| Popula��o: %lu\n", pop2);
    printf("| �rea: %.2f km quadrados\n", area2);
    printf("| PIB: %.2f bilh�es de reais\n", pib2);
    printf("| N�mero de pontos tur�sticos: %d\n", pontos2);

    printf("| Densidade populacional: %.2f\n", dens2);
    printf("| PIB per Capita: %.2f reais\n", capita2);
    printf("| Super Poder: %.2f\n", super2);

    printf("-------------------------------------------\n");

    system("pause");
    system("cls");


    printf("\n\nAgora, vamos ver qual � a maioral\n\n");
    printf("Escolha um atributo num�rico de uma carta\n");
    printf("E veja se voc� venceu!\n\n");
    system("pause");
    system("cls");


    // Agora vamos calcular quem vence, um a um

    printf("\n--- Hora do duelo! ---\n");

    printf("\n\n");
    if(pop1 > pop2){
        printf("Popula��o: Carta 1 venceu!\n");
    }else{
        printf("Popula��o: Carta 2 venceu!\n");
    }

    if(area1 > area2){
        printf("�rea: Carta 1 venceu!\n");
    }else{
        printf("�rea: Carta 2 venceu!\n");
    }

    if(pib1 > pib2){
        printf("PIB: Carta 1 venceu!\n");
    }else{
        printf("PIB: Carta 2 venceu!\n");
    }

    if(pontos1 > pontos2){
        printf("N�mero de pontos tur�sticos: Carta 1 venceu!\n");
    }else{
        printf("N�mero de pontos tur�sticos: Carta 2 venceu!\n");
    }

    if(dens1 < dens2){
        printf("Densidade populacional: Carta 1 venceu!\n");
    }else{
        printf("Densidade populacional: Carta 2 venceu!\n");
    }

    if(capita1 > capita2){
        printf("PIB per capita: Carta 1 venceu!\n");
    }else{
        printf("PIB per capita: Carta 2 venceu!\n");
    }

    if(super1 > super2){
        printf("Super poder: Carta 1 venceu!\n");
    }else{
        printf("Super poder: Carta 2 venceu!\n");
    }

    system("pause");
    system("cls");

    printf("\n\nMuito obrigada por jogar...\n");
    printf("\n--- Super Trunfo ---\n\n");
    printf("Nos vemos na pr�xima commit!\n\n");
    system("pause");
    system("cls");

    return 0;
}
