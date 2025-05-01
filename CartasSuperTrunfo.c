#include <stdio.h>

// Camila Lins, curso de ADS.

int main(){
    // Mensagem de boas vindas e contexto
    printf("✧✦☆★ Bem vindo ao jogo de Super Trunfo em C! ★☆✦✧\nPreencha os dados a seguir para criar as cartas.\n\n");

    // Primeira carta: criando as variáveis
    char estado[3], code[6], nome[50];
    int populacao, pontos_turisticos;
    float area, pib;

    // Primeira carta: coletando as informações
    printf("✧ Informações sobre a CARTA 1!\n");
    printf("Digite o Estado: ");
    scanf("%s", estado);

    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]", nome);

    printf("Digite o código da Cidade (exemplo: A101): ");
    scanf("%s", code);

    printf("Digite a área em km²: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite sua população (apenas números): ");
    scanf("%d", &populacao);

    printf("Digite a quantidade de pontos turísticos (apenas números): ");
    scanf("%d", &pontos_turisticos);

    // Segunda carta: criando as variáveis
    char estado2[3], code2[6], nome2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2;

    // Segunda carta: coletando as informações
    printf("\n✧ Informações sobre a CARTA 2!\n");
    printf("Digite o Estado: ");
    scanf("%s", estado2);

    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]", nome2);

    printf("Digite o código da Cidade (exemplo: A101): ");
    scanf("%s", code2);

    printf("Digite a área em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite sua população (apenas números): ");
    scanf("%d", &populacao2);

    printf("Digite a quantidade de pontos turísticos (apenas números): ");
    scanf("%d", &pontos_turisticos2);

    // Exibindo as informações das cartas
    printf("\n\n✦ CARTA 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", code);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);

    printf("\n✦ CARTA 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", code2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}
