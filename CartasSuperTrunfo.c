#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Para trabalhar com strings (nomes das cidades)

// Definição da estrutura da carta de cidade
struct Carta {
    int codigo;
    char nome[50];
    long long populacao;
    double area;
    double pib;
    int numPontosTuristicos;
};

int main() {
    printf("--- Cadastro de Cartas - Super Trunfo de Países ---\n");

    // Declaração de uma variável para armazenar os dados de uma carta
    struct Carta cidade;

    // Cadastro da Carta:
    printf("\n--- Cadastrando uma nova carta ---\n");

    printf("Código da cidade: ");
    scanf("%d", &cidade.codigo);
    // Limpar o buffer do teclado após a leitura de um inteiro
    while (getchar() != '\n');

    printf("Nome da cidade: ");
    fgets(cidade.nome, sizeof(cidade.nome), stdin);
    // Remover a quebra de linha lida pelo fgets
    cidade.nome[strcspn(cidade.nome, "\n")] = 0;

    printf("População: ");
    scanf("%lld", &cidade.populacao);

    printf("Área (em km²): ");
    scanf("%lf", &cidade.area);

    printf("PIB (em milhões de dólares): ");
    scanf("%lf", &cidade.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &cidade.numPontosTuristicos);

    // Exibição dos Dados da Carta Cadastrada:
    printf("\n--- Dados da Carta Cadastrada ---\n");
    printf("Código da cidade: %d\n", cidade.codigo);
    printf("Nome da cidade: %s\n", cidade.nome);
    printf("População: %lld\n", cidade.populacao);
    printf("Área: %.2f km²\n", cidade.area);
    printf("PIB: %.2f milhões de dólares\n", cidade.pib);
    printf("Número de pontos tur