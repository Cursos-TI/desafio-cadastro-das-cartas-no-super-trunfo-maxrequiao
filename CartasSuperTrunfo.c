#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Nível Novato

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char    estado1[2], estado2[2];
    char    codigoDaCidade1[3], codigoDaCidade2[3];
    char    nomeDaCidade1[15], nomeDaCidade2[15];
    int     populacao1, populacao2;
    float   areaEmKm1, areaEmKm2;
    float   pib1, pib2;
    int     numeroDePontosTuristicos1, numeroDePontosTuristicos2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    //Cadastro da Carta 1
    printf("Cadastrado da Carta 1: \n");
    printf("Estado: \n");
    scanf("%s", estado1);

    printf("Código da Carta: \n");
    scanf("%s", codigoDaCidade1);

    printf("Nome da Cidade: \n");
    scanf("%s", &nomeDaCidade1);

    printf("Populção: \n");
    scanf("%d", &populacao1);
    
    printf("Área em Kilometros: \n");
    scanf("%f", &areaEmKm1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Número de Pontos Turisticos: \n");
    scanf("%d", &numeroDePontosTuristicos1);

    //Cadastro da Carta 2
    printf("Cadastrado da Carta 2: \n");
    printf("Estado: \n");
    scanf("%s", estado2);

    printf("Código da Carta: \n");
    scanf("%s", codigoDaCidade2);

    printf("Nome da Cidade: \n");
    scanf("%s", &nomeDaCidade2);

    printf("Populção: \n");
    scanf("%d", &populacao2);
    
    printf("Área em Kilometros: \n");
    scanf("%f", &areaEmKm2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Número de Pontos Turisticos: \n");
    scanf("%d", &numeroDePontosTuristicos2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Exibição dos dados da Carta 1
    printf("Exibição dos Dados da Carta 1:\n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigoDaCidade1);
    printf("Nome da Cidade: %s \n", nomeDaCidade1);
    printf("Populção: %d \n", populacao1);
    printf("Área: %.2f km² \n", areaEmKm1);
    printf("PIB: %.2f \n", pib1);
    printf("Número de Pontos Turisticos: %d \n", numeroDePontosTuristicos1);

    //exibição da carta 2
    printf("Exibição dos Dados da Carta 2:\n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigoDaCidade2);
    printf("Nome da Cidade: %s \n", nomeDaCidade2);
    printf("Populção: %d \n", populacao2);
    printf("Área: %.2f km² \n", areaEmKm2);
    printf("PIB: %.2f \n", pib2);
    printf("Número de Pontos Turisticos: %d \n", numeroDePontosTuristicos2);

    return 0;
}
