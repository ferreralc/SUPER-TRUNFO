#include <stdio.h>

int main() {
    char nome[50];
    char estado[50];
    int codigo;
    int populacao;
    float area;
    float pib;
    int turistico;

    char nome2[50];
    char estado2[50];
    int codigo2;
    int populacao2;
    float area2;
    float pib2;
    int turistico2;

    printf("CARTA 1:\n");

    printf("Nome Primeira Cidade: ");
    fgets(nome, sizeof(nome), stdin);
    
    printf("Estado: ");
    scanf("%s", estado);
    
    printf("Código: ");
    scanf("%d", &codigo);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &turistico);

    getchar(); // Limpar buffer antes da próxima leitura de string

    printf("CARTA 2:\n");

    printf("Nome Segunda Cidade: ");
    fgets(nome2, sizeof(nome2), stdin);

    printf("Estado: ");
    scanf("%s", estado2);

    printf("Código: ");
    scanf("%d", &codigo2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &turistico2);

    printf("\n--- Dados das Cidades ---\n");
    
    printf("CARTA CIDADE 1! \n");
    printf("\n");
    printf("Nome da Cidade: %s", nome);
    printf("Estado: %s\n", estado);
    printf("Código: %d\n", codigo);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f Bilhões de Reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", turistico);
    
    printf("\n");
    
    printf("CARTA CIDADE 2! \n");
    printf("\n");
    printf("Nome da Cidade: %s", nome2);
    printf("Estado: %s\n", estado2);
    printf("Código: %d\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões de Reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turistico2);

    return 0;
}
