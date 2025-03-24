#include <stdio.h>

// Desafio Super Trunfo - Países
// Declaração das variáveis

int main() {
    char Estado,Estado2;
    char codigo[4],codigo2[4];
    char cidade[50],cidade2[50];
    int populacao,populacao2;
    float area,area2;
    float pib,pib2;
    int pontosturistico,pontosturistico2;
    float densidade_populacional,densidade_populacional2;
    float per_capita,per_capita2;

    //CADASTRO DA PRIMEIRA CARTA
    printf ("Bem vindo ao Jogo Super Trunfo. \n"); 
    printf("\n");
    printf("Coloque os dados da primeira carta!\n");
    printf("Insira o Estado, uma letra de 'A' a 'H': ");
    scanf(" %c",&Estado);
    printf("Insira o codigo da carta,a letra do estado seguida de um número de 01 a 04: ");
    scanf("%s", codigo);
    printf("Insira o nome da cidade: ");
    scanf("%s", cidade);
    printf("Insira a população: ");
    scanf("%d", &populacao);
    printf("Insira a área em km²: ");
    scanf("%f", &area);
    printf("Insira o PIB: ");
    scanf("%f", &pib);
    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontosturistico);
    printf("\n");

    //Cadastro da segunda carta
    printf ("Agora coloque os dados da segunda carta! \n");
    printf("Insira o Estado,Uma letra de 'A' a 'H': ");
    scanf(" %c",&Estado2);
    printf("Insira o codigo da carta,a letra do estado seguida de um número de 01 a 04: ");
    scanf("%s", codigo2);
    printf("Insira o nome da cidade: ");
    scanf("%s", cidade2);
    printf("Insira a população: ");
    scanf("%d", &populacao2);
    printf("Insira a área em km²: ");
    scanf("%f", &area2);
    printf("Insira o PIB: ");
    scanf("%f", &pib2);
    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontosturistico2);
    printf("\n");

    //Exibição das cartas
    //Exibição primeira carta
    printf("Exibição das cartas\n");
    printf("\n");
    printf("primeira carta\n");
    printf("Estado: %c\n",Estado);
    printf("código da carta: %s\n",codigo);
    printf("nome da cidade: %s\n",cidade);
    printf("população: %d\n",populacao);
    printf("Área: %.2f km² \n",area);
    printf("PIB: %.2f Reais\n",pib);
    printf("Número de pontos Turísticos: %d\n",pontosturistico);

    //Calculando densidade e pib per capita primeira carta
    densidade_populacional = (float)populacao/area;
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    per_capita = (float)pib/populacao;
    printf("PIB per Capita: %.2f reais\n", per_capita);
    printf("\n");

    //Exibição segunda carta
    printf("Segunda carta\n");
    printf("Estado: %c\n",Estado2);
    printf("código da carta: %s\n",codigo2);
    printf("nome da cidade: %s\n",cidade2);
    printf("população: %d\n",populacao2);
    printf("Área: %.2f km² \n",area2);
    printf("PIB: %.2f Reais\n",pib2);
    printf("Número de pontos Turísticos: %d\n",pontosturistico2);

    //Calculando densidade e pib per capita segunda carta
    densidade_populacional2 = (float)populacao2/area2;
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    per_capita2 = (float)pib2/populacao2;
    printf("PIB per Capita: %.2f reais\n", per_capita2);

    //

    return 0;
}
