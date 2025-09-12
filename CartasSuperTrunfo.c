#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    int populacao;
    float area, pib;
    char nome_cidade[100];

    printf("Cadastro de CARTA 1 \n");

    printf("Digite a cidade: \n");
    scanf("%s", &nome_cidade);

    printf("Digite a area: \n");
    scanf("%f", &area);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao);

    printf("Digite o Pib: \n");
    scanf("%f", &pib);

    printf("\n------------Carta 1 Super trunfo-------------\n");
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("Area: %f\n", area);
    printf("Total de Populacao: %d\n", populacao);
    printf("Pib: %f\n", pib);

    printf("\nCadastro de CARTA 2 \n");

    printf("Digite a cidade: \n");
    scanf("%s", &nome_cidade);

    printf("Digite a area: \n");
    scanf("%f", &area);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao);

    printf("Digite o Pib: \n");
    scanf("%f", &pib);

    printf("\n------------Carta 2 Super trunfo-------------\n");
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("Area: %f\n", area);
    printf("Total de Populacao: %d\n", populacao);
    printf("Pib: %f\n", pib);

    return 0;
}
