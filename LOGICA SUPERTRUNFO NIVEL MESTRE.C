#include <stdio.h>

int main() {
    char nome[50] = "Rio de Janeiro";
    char estado[50] = "A";
    int codigo = 1;
    int populacao = 200000;
    float area = 500000;
    float pib = 125000;
    int turistico = 375;
    float superpower;

    char nome2[50] = "Espirito Santo";
    char estado2[50] = "B";
    int codigo2 = 2;
    int populacao2 = 110000;
    float area2 = 275000;
    float pib2 = 75000;
    int turistico2 = 195;
    float superpower2;

    int opcaoatributo;

    printf("CARTA 1:\n");
    printf("Nome Primeira Cidade: %s \n", nome);
    printf("Estado: %s \n ", estado);
    printf("Codigo: %d \n ", codigo);
    printf("Populacao: %d \n ", populacao);
    printf("Area: %f \n ", area);
    printf("PIB: %f\n", pib);
    printf("Numero de Pontos Turisticos: %d \n ", turistico);

    printf("CARTA 2:\n");
    printf("Nome Segunda Cidade: %s \n ", nome2);
    printf("Estado: %s \n ", estado2);
    printf("Codigo: %d \n", codigo2);
    printf("Populacao: %d \n ", populacao2);
    printf("Area: %f \n ", area2);
    printf("PIB: %f \n ", pib2);
    printf("Numero de Pontos Turisticos: %d \n ", turistico2);

    printf("\n--- Dados das Cidades ---\n");

    float calculopib = pib / populacao;
    float calculopib2 = pib2 / populacao2;

    float calculodensidade = (float)populacao / area;
    float calculodensidade2 = (float)populacao2 / area2;

    superpower = codigo + populacao + area + pib + turistico + calculopib + (1 / calculodensidade);
    superpower2 = codigo2 + populacao2 + area2 + turistico2 + calculopib2 + (1 / calculodensidade2);

    printf("CARTA CIDADE 1! \n");
    printf("Nome da Cidade: %s \n", nome);
    printf("Estado: %s\n", estado);
    printf("Codigo: %d\n", codigo);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f Bilhoes de Reais\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", turistico);
    printf("PIB per Capita: %.2f \n", calculopib);
    printf("Densidade Demografica: %.2f \n", calculodensidade);
    printf("Super Poder: %f \n ", superpower);

    printf("\n");

    printf("CARTA CIDADE 2! \n");
    printf("Nome da Cidade: %s \n", nome2);
    printf("Estado: %s\n", estado2);
    printf("Codigo: %d\n", codigo2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhoes de Reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", turistico2);
    printf("PIB per Capita: %.2f \n", calculopib2);
    printf("Densidade Demografica: %.2f \n", calculodensidade2);
    printf("Super Poder: %f \n ", superpower2);

    printf("\n");

    printf("--- Comparacao das Cidades ---\n");
    printf("Populacao: %s vence\n", (populacao > populacao2) ? "Cidade 1" : "Cidade 2");
    printf("Area: %s vence\n", (area > area2) ? "Cidade 1" : "Cidade 2");
    printf("PIB: %s vence\n", (pib > pib2) ? "Cidade 1" : "Cidade 2");
    printf("Pontos Turisticos: %s vence\n", (turistico > turistico2) ? "Cidade 1" : "Cidade 2");
    printf("PIB per capita: %s vence\n", (calculopib > calculopib2) ? "Cidade 1" : "Cidade 2");
    printf("Densidade demografica: %s vence\n", (calculodensidade < calculodensidade2) ? "Cidade 1" : "Cidade 2");
    printf("Super Poder: %s vence\n", (superpower > superpower2) ? "Cidade 1" : "Cidade 2");

    printf("- ATRIBUTOS PARA COMPARACAO DE CARTAS -\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("\n");
    printf("ESCOLHA UM ATRIBUTO:\n");
    scanf("%d", &opcaoatributo);

    switch (opcaoatributo) {
        case 1:
            printf("CARTA 1: %d - CARTA 2: %d\n", populacao, populacao2);
            printf("%s possui maior populacao!\n", (populacao > populacao2) ? "Cidade 1" : "Cidade 2");
            break;

        case 2:
            printf("CARTA 1: %.2f - CARTA 2: %.2f\n", area, area2);
            printf("%s possui maior area!\n", (area > area2) ? "Cidade 1" : "Cidade 2");
            break;

        case 3:
            printf("CARTA 1: %.2f - CARTA 2: %.2f\n", pib, pib2);
            printf("%s possui maior PIB!\n", (pib > pib2) ? "Cidade 1" : "Cidade 2");
            break;

        case 4:
            printf("CARTA 1: %d - CARTA 2: %d\n", turistico, turistico2);
            printf("%s possui mais pontos turisticos!\n", (turistico > turistico2) ? "Cidade 1" : "Cidade 2");
            break;

        case 5:
            printf("CARTA 1: %.2f - CARTA 2: %.2f\n", calculodensidade, calculodensidade2);
            printf("%s possui maior densidade demografica!\n", (calculodensidade > calculodensidade2) ? "Cidade 1" : "Cidade 2");
            break;
    }

    return 0;
}
