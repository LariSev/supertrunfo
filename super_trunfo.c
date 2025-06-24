// Programa: Cadastro de cartas Super Trunfo de cidades (Nível Aventureiro)
// Aluna: Larissa Severo de Faria

#include <stdio.h>

int main() {
    // Variáveis
    int populacao1, pontosturisticos1, populacao2, pontosturisticos2;
    float area1, pib1, area2, pib2;
    char estado1[3], estado2[3];
    char codigocarta1[5], codigocarta2[5];
    char nomecidade1[20], nomecidade2[20];

    // Entrada dos dados da carta 1
    printf("Carta 1:\n");

    printf("Digite o estado (letra de A a H): \n");
    scanf("%s", estado1);

    printf("Digite o codigo da carta (ex: A01): \n");
    scanf("%s", codigocarta1);

    printf("Digite o nome da cidade: (ex: saopaulo) \n");
    scanf("%s", nomecidade1);

    printf("Digite o numero de habitantes da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade em quilometros quadrados: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhoes de reais): \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &pontosturisticos1);

    // Entrada dos dados da carta 2
    printf("\nCarta 2:\n");

    printf("Digite o estado (letra de A a H): \n");
    scanf("%s", estado2);

    printf("Digite o codigo da carta (ex: B02): \n");
    scanf("%s", codigocarta2);

    printf("Digite o nome da cidade (ex: saopaulo): \n");
    scanf("%s", nomecidade2);

    printf("Digite o numero de habitantes da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade em quilometros quadrados: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhoes de reais): \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &pontosturisticos2);

    
    // Exibição dos dados da carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigocarta1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos1);


    // Exibição dos dados da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigocarta2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos2);

    return 0;
}
