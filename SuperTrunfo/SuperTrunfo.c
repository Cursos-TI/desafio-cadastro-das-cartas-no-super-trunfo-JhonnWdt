#include <stdio.h>
#include <string.h>

int main() {
    int populacao, turismo;
    float pib, area;
    char nome[50];

    printf("Super Trunfo Países\n");

    printf("Nome da Cidade: \n");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = 0; // Remove o \n lido pelo fgets

    printf("População: \n");
    scanf("%d", &populacao);

    printf("PIB: \n");
    scanf("%f", &pib);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &turismo);

    printf("Área da cidade: \n");
    scanf("%f", &area);

    printf("\n=== Dados da Cidade ===\n");
    printf("Nome: %s \n", nome);
    printf("População: %d \n", populacao);
    printf("PIB: %.2f \n", pib);
    printf("Número de Pontos Turísticos: %d \n", turismo);
    printf("Área da Cidade (km²): %.2f\n", area);

    return 0;
}
