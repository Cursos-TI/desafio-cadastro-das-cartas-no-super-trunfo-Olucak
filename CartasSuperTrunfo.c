#include <stdio.h>

// Desafio Super Trunfo - Países
// Cadastro das Cartas

int main() {
    char Estado[50],Estado2[50];
    char codigo[4],codigo2[4];
    char cidade[50],cidade2[50];
    int populacao,populacao2;
    float area,area2;
    float pib,pib2;
    int pontosturistico,pontosturistico2;

    //CADASTRO DA PRIMEIRA CARTA
    printf ("Bem vindo ao Super Trunfo. \n");
    printf("Coloque os dados da primeira carta!\n");
    printf("Insira o estado: ");
    scanf("%s",Estado);
    printf("Insira o codigo da carta: ");
    scanf("%s", codigo);
    printf("Insira o nome da cidade: ");
    scanf("%s", cidade);
    printf("Insira a população: ");
    scanf("%d", &populacao);
    printf("Insira a area: ");
    scanf("%f", &area);
    printf("Insira o PIB: ");
    scanf("%f", &pib);
    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontosturistico);

    //Cadastro da segunda carta
    printf ("Agora coloque os dados da segunda carta! \n");
    printf("Insira o estado: ");
    scanf("%s",Estado2);
    printf("Insira o codigo da carta: ");
    scanf("%s", codigo2);
    printf("Insira o nome da cidade: ");
    scanf("%s", cidade2);
    printf("Insira a população: ");
    scanf("%d", &populacao2);
    printf("Insira a area: ");
    scanf("%f", &area2);
    printf("Insira o PIB: ");
    scanf("%f", &pib2);
    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontosturistico2);

    //exibição das cartas
    //primeira
    printf("exibição das cartas");
    printf("Segunda carta\n");
    printf("Estado: %s\n",Estado);
    printf("código da carta: %s\n",codigo);
    printf("nome da cidade: %s\n",cidade);
    printf("população: %d\n",populacao);
    printf("Área: %2.f km² \n",area);
    printf("PIB: %.2f Reais\n",pib);
    printf("Número de pontos Turísticos: %d\n",pontosturistico);
    //segunda
    printf("Segunda carta\n");
    printf("Estado: %s\n",Estado2);
    printf("código da carta: %s\n",codigo2);
    printf("nome da cidade: %s\n",cidade2);
    printf("população: %d\n",populacao2);
    printf("Área: %2.f km² \n",area2);
    printf("PIB: %.2f Reais\n",pib2);
    printf("Número de pontos Turísticos: %d\n",pontosturistico2);

    return 0;
}
