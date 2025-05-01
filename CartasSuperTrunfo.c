#include <stdio.h>

// Camila Lins, curso de ADS, Estácio, 2025.1.

int main(){
    // Mensagem de boas vindas e contexto
    printf("✧✦☆★ Bem vindo ao jogo de Super Trunfo em C! ★☆✦✧\nPreencha os dados a seguir para criar as cartas.\n\n");

    // Primeira carta: criando as variáveis
    char estado[3], code[6], nome[50];
    int populacao, pontos_turisticos;
    float area, pib, pib_per_capita, densidade_populacional, super_poder;

    // Primeira carta: coletando as informações
    printf("✧ Informações sobre a CARTA 1!\n");
    printf("Digite o Estado (uma única letra): ");
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

    // Primeira carta: Calculando densidade populacional e PIB per capita da cidade
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    // Primeira carta: Super poder (a soma total de todos os atributos, e o INVERSO da densidade populacional)
    super_poder = (float)populacao + area + pib + (float)pontos_turisticos + pib_per_capita + (1/densidade_populacional);

    // Segunda carta: criando as variáveis
    char estado2[3], code2[6], nome2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2, pib_per_capita2, densidade_populacional2, super_poder2;

    // Segunda carta: coletando as informações
    printf("\n✧ Informações sobre a CARTA 2!\n");
    printf("Digite o Estado (uma única letra): ");
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

    // Segunda carta: Calculando densidade populacional e PIB per capita da cidade
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // Segunda carta: Super poder (a soma total de todos os atributos, e o INVERSO da densidade populacional)
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pib_per_capita2 + (1/densidade_populacional2);

    // Exibindo as informações gerais das cartas
    printf("\n\n✦ CARTA 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", code);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita);
    printf("~ Super Poder: %.2f\n", super_poder);

    printf("\n✦ CARTA 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", code2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita2);
    printf("~ Super Poder: %.2f\n\n", super_poder2);

    // Comparando as cartas, e retornando o vencedor
    printf("\n★ Cartas vencedoras por categoria ★\n");

    // Declarando as variáveis
    int populacao_check = populacao > populacao2;
    int area_check = area > area2;
    int pib_check = pib > pib2;
    int pontos_turisticos_check = pontos_turisticos > pontos_turisticos2;
    int densidade_populacional_check = densidade_populacional < densidade_populacional2;
    int pib_per_capita_check = pib_per_capita > pib_per_capita2;
    int super_poder_check = super_poder > super_poder2;

    // População
    if(populacao_check){
        printf("☆ População: Carta %s venceu! [%d]\n", nome, populacao_check);
    } else {
        printf("☆ População: Carta %s venceu! [%d]\n", nome2, populacao_check);
    }

    // Área
    if(area_check){
        printf("☆ Área: Carta %s venceu! [%d]\n", nome, area_check);
    } else {
        printf("☆ Área: Carta %s venceu! [%d]\n", nome2, area_check);
    }
    
    // PIB
    if(pib_check){
        printf("☆ PIB: Carta %s venceu! [%d]\n", nome, pib_check);
    } else {
        printf("☆ PIB: Carta %s venceu! [%d]\n", nome2, pib_check);
    }

    if(pontos_turisticos_check){
        printf("☆ Número de Pontos Turísticos: Carta %s venceu! [%d]\n", nome, pontos_turisticos_check);
    } else {
        printf("☆ Número de Pontos Turísticos: Carta %s venceu! [%d]\n", nome2, pontos_turisticos_check);
    }

    if(densidade_populacional_check){
        printf("☆ Densidade Populacional: Carta %s venceu! [%d]\n", nome, densidade_populacional_check);
    } else {
        printf("☆ Densidade Populacional: Carta %s venceu! [%d]\n", nome2, densidade_populacional_check);
    }

    if(pib_per_capita_check){
        printf("☆ PIB per Capita: Carta %s venceu! [%d]\n", nome, pib_per_capita_check);
    } else {
        printf("☆ PIB per Capita: Carta %s venceu! [%d]\n", nome2, pib_per_capita_check);
    }

    if(super_poder_check){
        printf("☆ Super Poder: Carta %s venceu! [%d]\n\n", nome, super_poder_check);
    } else {
        printf("☆ Super Poder: Carta %s venceu! [%d]\n\n", nome2, super_poder_check);
    }

    return 0;
}
