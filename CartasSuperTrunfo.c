#include <stdio.h>
#include <string.h>

int main() {
    // Carta 1
    char estado1[50];
    char codigo1[5];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Carta 2
    char estado2[50];
    char codigo2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // --- Cadastro da Carta 1 ---
    printf("Cadastro da Carta 1:\n");

    printf("1) Digite o estado (ex: SP ou Sao Paulo):\n");
    fgets(estado1, sizeof(estado1), stdin);
    estado1[strcspn(estado1, "\n")] = '\0';

    printf("2) Digite o codigo da carta (ex: A01):\n");
    scanf("%4s", codigo1);
    getchar();

    printf("3) Digite o nome da cidade:\n");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = '\0';

    printf("4) Digite a populacao:\n");
    scanf("%d", &populacao1);
    getchar();

    printf("5) Digite a area (em km²):\n");
    scanf("%f", &area1);
    getchar();

    printf("6) Digite o PIB (em bilhoes de reais):\n");
    scanf("%f", &pib1);
    getchar();

    printf("7) Digite o numero de pontos turisticos:\n");
    scanf("%d", &pontosTuristicos1);
    getchar();

    // --- Cadastro da Carta 2 ---
    printf("\nCadastro da Carta 2:\n");

    printf("1) Digite o estado (ex: RJ ou Rio de Janeiro):\n");
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = '\0';

    printf("2) Digite o codigo da carta (ex: B02):\n");
    scanf("%4s", codigo2);
    getchar();

    printf("3) Digite o nome da cidade:\n");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0';

    printf("4) Digite a populacao:\n");
    scanf("%d", &populacao2);
    getchar();

    printf("5) Digite a area (em km²):\n");
    scanf("%f", &area2);
    getchar();

    printf("6) Digite o PIB (em bilhoes de reais):\n");
    scanf("%f", &pib2);
    getchar();

    printf("7) Digite o numero de pontos turisticos:\n");
    scanf("%d", &pontosTuristicos2);
    getchar();

    // --- Cálculo de Densidade Populacional e PIB per capita ---
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibpercapita1 = (pib1 * 1000000000) / populacao1; // PIB está em bilhões
    float pibpercapita2 = (pib2 * 1000000000) / populacao2;

    // --- Exibindo os dados ---
    printf("\n--- Dados das Cartas ---\n");

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f R$/hab\n", pibpercapita1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f R$/hab\n", pibpercapita2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    
    return 0;
}
   
