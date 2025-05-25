#include <stdio.h>

int main() {
    char nome[50] = "Rio de Janeiro";
    char estado[50] = "A";
    int codigo = 01;
    int populacao = 200000;
    float area = 500000;
    float pib = 125000;
    int turistico = 375;
    float superpower;

    char nome2[50] = "Espirito Santo";
    char estado2[50] = "B";
    int codigo2 = 02;
    int populacao2 = 110000;
    float area2 = 275000;
    float pib2 = 75000;
    int turistico2 = 195;
    float superpower2;


    int opcaoatributo;

    printf("CARTA 1:\n");

    printf("Nome Primeira Cidade: %s \n",nome);
    
    
    printf("Estado: %s \n ",estado);
    
    
    printf("Codigo: %d \n ",codigo);
    

    printf("Populaçao: %d \n ",populacao);
    
    printf("Area: %f \n ",area);
    

    printf("PIB: %f", pib);

    printf("Numero de Pontos Turisticos: %d \n ",turistico);
    


    printf("CARTA 2:\n");

    printf("Nome Segunda Cidade: %s \n ",nome2);
    

    printf("Estado: %s \n ",estado2);
    
    printf("Codigo: %d \n",codigo2);
    
    printf("Populacao: %d \n ",populacao2);
    

    printf("Area: %f \n ",area2);
    

    printf("PIB: %f \n ",pib2);
    

    printf("Numero de Pontos Turisticos: %d \n ",turistico2);

    printf("\n--- Dados das Cidades ---\n");
    
    float calculopib = pib / populacao;
    float calculopib2 = pib2 / populacao2;

    float calculodensidade = populacao / area;
    float calculodensidade2 = populacao2 / area2;

    superpower = codigo + populacao + area + pib + turistico + calculopib + (1/calculodensidade);
    superpower2 = codigo2 + populacao2 + area2 + turistico2 + calculopib2 + (1/calculodensidade2);
    printf("CARTA CIDADE 1! \n");
    printf("\n");
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
    printf("\n");
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

    // Exibicao dos resultados
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
    scanf("%d", & opcaoatributo);

    switch (opcaoatributo)
    {
    case 1:
        
    if (populacao > populacao2)
    {
        printf("CARTA 1: %d - CARTA 2: %d\n", populacao, populacao2);
        printf("A CIDADE 1 POSSUI MAIOR POPULACAO QUE A CARTA 2!\n");
    }
    else if (populacao2 > populacao)
    {
        printf("A CIDADE 2 POSSUI MAIOR POPULACAO QUE A CARTA 1!\n");
    }
    else if (populacao2 == populacao)
    {
        printf("AS CIDADES EMPATARAM!");
    }
    
    break;
    
    case 2:
    
    if (area > area2)
    {
        printf("CARTA 1: %f - CARTA 2: %f\n", area, area2);
        printf("A CIDADE 1 POSSUI MAIOR AREA QUE A CARTA 2!\n");
    }
    else if (area2 > area)
    {
        printf("A CIDADE 2 POSSUI MAIOR AREA QUE A CARTA 1!\n");
    }
    else if (area2 == area)
    {
        printf("AS CIDADES EMPATARAM!");
    }
    
    break;
    case 3: 
    if (pib > pib2)
    {
        printf("CARTA 1: %f - CARTA 2: %f\n", pib, pib2);
        printf("A CIDADE 1 POSSUI MAIOR PIB QUE A CARTA 2!\n");
    }
    else if (pib2 > pib)
    {
        printf("A CIDADE 2 POSSUI MAIOR PIB QUE A CARTA 1!\n");
    }
    else if (pib2 == pib)
    {
        printf("AS CIDADES EMPATARAM!");
    }
    
    break;
    case 4: 
        
    if (turistico > turistico2)
    {
        printf("CARTA 1: %d - CARTA 2: %d\n", turistico, turistico2);
        printf("A CIDADE 1 POSSUI MAIS PONTOS TURISTICOS QUE A CARTA 2!\n");
    }
    else if (turistico2 > turistico)
    {
        printf("A CIDADE 2 POSSUI MAIS PONTOS TURISTICOS QUE A CARTA 1!\n");
    }
    else if (turistico2 == turistico)
    {
        printf("AS CIDADES EMPATARAM!");
    }
    
    break;
    case 5: 
    if (calculodensidade < calculodensidade2)
    {
        printf("CARTA 1: %.2f - CARTA 2: %.2f\n", calculodensidade, calculodensidade2);
        printf("A CIDADE 1 POSSUI MAOR DENSIDADE DEMOGRAFICA QUE A CARTA 2!\n");
    }
    else if (calculodensidade2 < calculodensidade)
    {
        printf("A CIDADE 2 POSSUI MAIOR DENSIDADE DEMOGRAFICA QUE A CARTA 1!\n");
    }
    break;




}
        
    

    return 0;
}
