#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
struct Carta {
    char estado;                  // Letra de A a H
    char codigo[4];              // Ex: A01, B03
    char nomeCidade[50];        // Nome da cidade
    int populacao;              // População
    float area;                 // Área em km²
    float pib;                  // PIB em bilhões
    int pontosTuristicos;       // Número de pontos turísticos
};

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
struct Carta carta1 = {
        'C',
        "C02",
        "Fortaleza",
        2686612,
        313.8,
        67.45,
        22
    };

    struct Carta carta2 = {
        'F',
        "F04",
        "Curitiba",
        1963726,
        430.9,
        95.30,
        35
    };

    // Cálculos das métricas
    float densidade1 = carta1.populacao / carta1.area;
    float pibPerCapita1 = (carta1.pib * 1000000000.0f) / carta1.populacao;
    float superPoder1 = carta1.populacao + carta1.area + carta1.pib + carta1.pontosTuristicos + pibPerCapita1 + (1.0f / densidade1);

    float densidade2 = carta2.populacao / carta2.area;
    float pibPerCapita2 = (carta2.pib * 1000000000.0f) / carta2.populacao;
    float superPoder2 = carta2.populacao + carta2.area + carta2.pib + carta2.pontosTuristicos + pibPerCapita2 + (1.0f / densidade2);

    // Exibição das informações
    printf("\n--- Informações das Cartas ---\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %lu\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %lu\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparações
    int vencePopulacao = carta1.populacao > carta2.populacao;
    int venceArea = carta1.area > carta2.area;
    int vencePIB = carta1.pib > carta2.pib;
    int vencePontos = carta1.pontosTuristicos > carta2.pontosTuristicos;
    int venceDensidade = densidade1 < densidade2; // Menor vence
    int vencePIBPerCapita = pibPerCapita1 > pibPerCapita2;
    int venceSuperPoder = superPoder1 > superPoder2;

    printf("\n--- Resultados das Comparações (1 = Carta 1 vence, 0 = Carta 2 vence) ---\n");
    printf("População: %d\n", vencePopulacao);
    printf("Área: %d\n", venceArea);
    printf("PIB: %d\n", vencePIB);
    printf("Pontos Turísticos: %d\n", vencePontos);
    printf("Densidade Populacional (menor vence): %d\n", venceDensidade);
    printf("PIB per Capita: %d\n", vencePIBPerCapita);
    printf("Super Poder: %d\n", venceSuperPoder);

    return 0;
}