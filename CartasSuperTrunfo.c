#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    char estado;
    char codigo[30]; //codigo da cidade
    char nome[30]; //nome da cidade
    int populacao;
    float area;
    float pib;
    int pontos; //quantidade de pontos turisticos

    char estado2;
    char codigo2[30]; //codigo da cidade
    char nome2[30]; //nome da cidade
    int populacao2;
    float area2;
    float pib2;
    int pontos2;//quantidade de pontos turisticos

 // Cadastro das Cartas:
   //Cartas Numero1
    printf("Digite o nome da sua cidade:");
    scanf("%s", &nome);

    printf("Digite o codigo da cidade:");
    scanf("%s", &codigo);

    printf("Digite a Populacao:");
    scanf("%d", &populacao);

    printf("Digite a area da cidade: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos:");
    scanf("%d", &pontos);

   //Cartas numero2
    printf("Digite o nome da sua cidade 2:");
    scanf("%s", &nome2);

    printf("Digite o codigo da cidade 2:");
    scanf("%s", &codigo2);

    printf("Digite a Populacao 2:");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB 2: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos 2:");
    scanf("%d", &pontos2);

 // Exibição dos Dados das Cartas:
    printf("\nCidade: %s\n", nome);
    printf("Codigo da Cidade: %s\n", codigo);
    printf("Populacao: %d\n", populacao);
    printf("Area: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Pontos turisticos: %d\n", pontos);
// Exibição dos Dados das Cartas2:
    printf("\nCidade: %s\n", nome2);
    printf("Codigo da Cidade: %s\n", codigo2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);
    
    return 0;
}
