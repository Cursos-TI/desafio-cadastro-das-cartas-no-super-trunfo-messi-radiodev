#include <stdio.h>

int main () {

    //declaracao das variaveis
    char estado1, estado2, codigo1 [3], codigo2 [3], nomeDaCidade1 [50], nomeDaCidade2 [50];
    int pontosTuristicos1, pontosTuristicos2, compararPopulacoes, compararPontosTuristicos, compararArea, compararPib, compararDensidadePopulacional, compararPibPerCapita, compararSuperPoder;
    float areaEmKm1, areaEmKm2, pib1, pib2, densidadePopulacional1, densidadePopulacional2, pibPerCapita1, pibPerCapita2, superPoder1, superPoder2, inversoDensidadePopulacional1, inversoDensidadePopulacional2;
    unsigned long int populacao1, populacao2;


    //dados de entrada, usuario atribui valor as variaveis
    printf ("Digite uma letra de A a H para representar o estado da carta 1: \n");
    scanf (" %c", &estado1);
    printf ("Digite uma letra de A a H para representar o estado da carta 2: \n");
    scanf (" %c", &estado2);
    printf ("Digite um código de 01 a 04 para representar o codigo da carta 1: \n");
    scanf ("%s", &codigo1);
    printf ("Digite um código de 01 a 04 para representar o codigo da carta 2: \n");
    scanf ("%s", &codigo2);
    printf ("Digite o primeiro nome da cidade da carta 1: \n");
    scanf ("%s", &nomeDaCidade1);
    printf ("Digite o primeiro nome da cidade da carta 2: \n");
    scanf ("%s", &nomeDaCidade2);
    printf ("Digite a população da cidade da carta 1: \n");
    scanf ("%lu", &populacao1);
    printf ("Digite a população da cidade da carta 2: \n");
    scanf ("%lu", &populacao2);
    printf ("Digite a quantidade de pontos turisticos da cidade da carta 1: \n");
    scanf ("%d", &pontosTuristicos1);
    printf ("Digite a quantidade de pontos turisticos da cidade da carta 2: \n");
    scanf ("%d", &pontosTuristicos2);
    printf ("Digite a area em Km da cidade da carta 1: \n");
    scanf ("%f", &areaEmKm1);
    printf ("Digite a area em Km da cidade da carta 2: \n");
    scanf ("%f", &areaEmKm2);
    printf ("Digite o PIB da cidade da carta 1: \n");
    scanf ("%f", &pib1);
    printf ("Digite o PIB da cidade da carta 2: \n");
    scanf ("%f", &pib2);

    //calculo sendo realizado após a leitura dos dados inseridos pelo usuario
    densidadePopulacional1 = (float) populacao1 / areaEmKm1;
    densidadePopulacional2 = (float) populacao2 / areaEmKm2;
    inversoDensidadePopulacional1 = (float) 1.0f / densidadePopulacional1;
    inversoDensidadePopulacional2 = (float) 1.0f / densidadePopulacional2;
    pibPerCapita1 = (float) pib1 / populacao1;
    pibPerCapita2 = (float) pib2 / populacao2;
    superPoder1 = (float) (populacao1 + pontosTuristicos1 + areaEmKm1 + pib1 + inversoDensidadePopulacional1 + pibPerCapita1);
    superPoder2 = (float) (populacao2 + pontosTuristicos2 + areaEmKm2 + pib2 + inversoDensidadePopulacional2 + pibPerCapita2);

    //formulas de comparação
    compararPopulacoes = populacao1 > populacao2;
    compararArea = areaEmKm1 > areaEmKm2;
    compararPib = pib1 > pib2;
    compararPontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
    compararDensidadePopulacional = densidadePopulacional1 > densidadePopulacional2;
    compararPibPerCapita = pibPerCapita1 > pibPerCapita2;
    compararSuperPoder = superPoder1 > superPoder2;

    //dados de saida, impressao dos dados referentes as cartas
    printf ("Carta 1: \n Estado: %c\n Código: %c%s\n Nome: %s\n População: %lu\n Pontos Turisticos: %d\n Area: %.2f\n PIB: %.2f\n Densidade Populacional: %.2f\n PIB Per Capita: %.2f\n", estado1, estado1, codigo1, nomeDaCidade1, populacao1, pontosTuristicos1, areaEmKm1, pib1, densidadePopulacional1, pibPerCapita1);
    
    printf ("Carta 2: \n Estado: %c\n Código: %c%s\n Nome: %s\n População: %lu\n Pontos Turisticos: %d\n Area: %.2f\n PIB: %.2f\n Densidade Populacional: %.2f\n PIB Per Capita: %.2f\n", estado2, estado2, codigo2, nomeDaCidade2, populacao2, pontosTuristicos2, areaEmKm2, pib2, densidadePopulacional2, pibPerCapita2);

    // utilização de operador ternário para exibir qual carta ganhou
    printf ("Comparação das cartas:\n");
    printf ("População: Carta %d ganhou\n", compararPopulacoes ? 1 : 2);
    printf ("Area: Carta %d ganhou\n", compararArea ? 1 : 2);
    printf ("PIB: Carta %d ganhou\n", compararPib ? 1 : 2);
    printf ("Pontos Turisticos: Carta %d ganhou\n", compararPontosTuristicos ? 1 : 2);
    printf ("Densidade Populacional: Carta %d ganhou\n", compararDensidadePopulacional ? 1 : 2);
    printf ("PIB Per Capita: Carta %d ganhou\n", compararPibPerCapita ? 1 : 2);
    printf ("Super Poder: Carta %d ganhou\n", compararSuperPoder ? 1 : 2);

    return 0;

}