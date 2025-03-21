#include <stdio.h>

// Desafio Super Trunfo - Países
// Cadastro das Cartas

int main() {
    char Estado[50],Estado2[50];
    char codigo[4],codigo2[4];
    char cidade[50],cidade2[50];
    signed long int populacao,populacao2;
    float area,area2;
    float pib,pib2;
    int pontosturistico,pontosturistico2;
    float densidade_populacional,densidade_populacional2;
    float per_capita,per_capita2;

    //CADASTRO DA PRIMEIRA CARTA
    printf ("Bem vindo ao Jogo Super Trunfo. \n"); 
    printf("\n");
    printf("Coloque os dados da primeira carta!\n");
    printf("Insira o Estado: ");
    scanf("%s",Estado);
    printf("Insira o codigo da carta: ");
    scanf("%s", codigo);
    printf("Insira o nome da cidade: ");
    scanf("%s", cidade);
    printf("Insira a população: ");
    scanf("%ld", &populacao);
    printf("Insira a área em km²: ");
    scanf("%f", &area);
    printf("Insira o PIB: ");
    scanf("%f", &pib);
    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontosturistico);
    printf("\n");
    //Cadastro da segunda carta
    printf ("Agora coloque os dados da segunda carta! \n");
    printf("Insira o Estado: ");
    scanf("%s",Estado2);
    printf("Insira o codigo da carta: ");
    scanf("%s", codigo2);
    printf("Insira o nome da cidade: ");
    scanf("%s", cidade2);
    printf("Insira a população: ");
    scanf("%ld", &populacao2);
    printf("Insira a área em km²: ");
    scanf("%f", &area2);
    printf("Insira o PIB: ");
    scanf("%f", &pib2);
    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontosturistico2);
    printf("\n");
    //exibição das cartas
    //primeira
    printf("Exibição das cartas\n");
    printf("\n");
    printf("primeira carta\n");
    printf("Estado: %s\n",Estado);
    printf("código da carta: %s\n",codigo);
    printf("nome da cidade: %s\n",cidade);
    printf("população: %ld\n",populacao);
    printf("Área: %.2f km² \n",area);
    printf("PIB: %.2f Reais\n",pib);
    printf("Número de pontos Turísticos: %d\n",pontosturistico);

    //calculando densidade e pib per capita primeira carta
    densidade_populacional = (double)populacao/area;
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    per_capita = (double)pib/populacao;
    printf("PIB per Capita: %.2f reais\n", per_capita);
    printf("\n");
    //segunda carta
    printf("Segunda carta\n");
    printf("Estado: %s\n",Estado2);
    printf("código da carta: %s\n",codigo2);
    printf("nome da cidade: %s\n",cidade2);
    printf("população: %ld\n",populacao2);
    printf("Área: %.2f km² \n",area2);
    printf("PIB: %.2f Reais\n",pib2);
    printf("Número de pontos Turísticos: %d\n",pontosturistico2);

    //calculando densidade e pib per capita segunda carta
    densidade_populacional2 = (double)populacao2/area2;
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    per_capita2 = (double)pib2/populacao2;
    printf("PIB per Capita: %.2f reais\n", per_capita2);

    //

    return 0;
}
