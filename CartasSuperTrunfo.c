#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
 
    char codigo_carta[32][4] = {"A01", "A02", "A03", "A04", "B01", "B02", "B03", "B04", "C01", "C02", "C03", "C04", "D01", "D02", "D03", "D04", "E01", "E02", "E03", "E04", "F01", "F02", "F03", "F04", "G01", "G02", "G03", "G04", "H01", "H02", "H03", "H04"};

    int tamanho_array = sizeof(codigo_carta) / sizeof(codigo_carta[0]);

    for(int i = 0; i < 32; i++) {

        int populacao, pontos_turisticos;
        float area, pib;

        
        printf("Digite a População da Cidade:\n");
        scanf("%d", &populacao);
        printf("Digite a Área da Cidade:\n");
        scanf("%f", &area);
        printf("Digite o PIB da Cidade:\n");
        scanf("%f", &pib);
        printf("Digite o Número de pontos turísticos da Cidade:\n");
        scanf("%d", &pontos_turisticos);

        printf("Temos os seguintes dados para a carta %s \n", codigo_carta[i]);
        printf("População: %d \n", populacao);
        printf("Área da Cidade: %.2f \n", area);
        printf("PIB: %.2f \n", pib);
        printf("Número de pontos turísticos: %d \n", pontos_turisticos);

    };

    return 0;
}
