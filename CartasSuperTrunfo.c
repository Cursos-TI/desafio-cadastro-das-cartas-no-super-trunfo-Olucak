#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

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
    printf("insira o estado: ");
    scanf("%s",Estado);
    printf("insira o codigo da carta: ");
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
    printf("insira o estado: ");
    scanf("%s",Estado2);
    printf("insira o codigo da carta: ");
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

    printf("%s",)

    


    

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
