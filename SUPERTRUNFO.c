/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char estado;
    int codigo;
    char nome; 
    int populacao;
    float area;
    float pib;
    int turistico;
    
    char estado2;
    int codigo2;
    char nome2; 
    int populacao2;
    float area2;
    float pib2;
    int turistico2;
    
    
    
    printf("CARTA 1: \n");
    
    printf("Estado: ");
    scanf("%s", &estado);
    
    printf("Código: ");
    scanf("%d", &codigo);
    
    printf("Nome: ");
    scanf("%s", &nome);
    
    printf("População ");
    scanf("%d", &populacao);
    
    printf("Área: ");
    scanf("%f", &area);
    
    printf("PIB: ");
    scanf("%f", &pib);
    
    printf("Número de Pontos Turisticos: ");
    scanf("%d", &turistico);
    
    //SCAN CARTA2 ABAIXO//
    
    printf("CARTA 2: \n");
    
    printf("Estado: ");
    scanf("%s", &estado2);
    
    printf("Código: ");
    scanf("%d", &codigo2);
    
    printf("Nome: ");
    scanf("%s", &nome2);
    
    printf("População ");
    scanf("%d", &populacao2);
    
    printf("Área: ");
    scanf("%f", &area2);
    
    printf("PIB: ");
    scanf("%f", &pib2);
    
    printf("Número de Pontos Turisticos: ");
    scanf("%d", &turistico2);
    
    
    
    //IMRPIMIR RESULTADOS DAS VARIAVEIS NA TELA//
    printf("Estado: %s \n", estado);
    printf("Código: %d \n", codigo);
    printf("Nome da Cidade: %s \n", nome);
    printf("População: %d \n", populacao);
    printf("Área: %f \n", area);
    printf("PIB: %f \n", pib);
    printf("Número de Pontos Turísticos: %d \n", turistico);
    
    //------------------------------------------------------------------------------//
    
    printf("Estado: %s \n", estado2);
    printf("Código: %d \n", codigo2);
    printf("Nome da Cidade: %s \n", nome2);
    printf("População: %d \n", populacao2);
    printf("Área: %f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", turistico2);
    
    
    
    
    

    return 0;
}
