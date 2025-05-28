#include <stdio.h>

int main () {

    //declaracao das variaveis
    char estado1, estado2, codigo1 [3], codigo2 [3], nomeDaCidade1 [50], nomeDaCidade2 [50];
    int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2;
    float areaEmKm1, areaEmKm2, pib1, pib2, densidadePopulacional1, densidadePopulacional2, pibPerCapita1, pibPerCapita2;

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
    scanf ("%d", &populacao1);
    printf ("Digite a população da cidade da carta 2: \n");
    scanf ("%d", &populacao2);
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
    densidadePopulacional1 = populacao1 / areaEmKm1;
    densidadePopulacional2 = populacao2 / areaEmKm2;
    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    //dados de saida, impressao dos dados referentes as cartas
    printf ("Carta 1: \n Estado: %c\n Código: %c%s\n Nome: %s\n População: %d\n Pontos Turisticos: %d\n Area: %.2f\n PIB: %.2f\n Densidade Populacional: %.2f\n PIB Per Capita: %.2f\n", estado1, estado1, codigo1, nomeDaCidade1, populacao1, pontosTuristicos1, areaEmKm1, pib1, densidadePopulacional1, pibPerCapita1);
    
    printf ("Carta 2: \n Estado: %c\n Código: %c%s\n Nome: %s\n População: %d\n Pontos Turisticos: %d\n Area: %.2f\n PIB: %.2f\n Densidade Populacional: %.2f\n PIB Per Capita: %.2f\n", estado2, estado2, codigo2, nomeDaCidade2, populacao2, pontosTuristicos2, areaEmKm2, pib2, densidadePopulacional2, pibPerCapita2);

    return 0;
}