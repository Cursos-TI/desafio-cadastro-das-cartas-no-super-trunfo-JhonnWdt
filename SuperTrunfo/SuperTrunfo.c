#include <stdio.h>
#include <string.h>

int main() {
    int populacao, turismo; // apenas números inteiros
    float pib, area;    // números com posiveis casas decimais. 
    char nome[50];

    printf("Super Trunfo Países\n");

    printf("Nome da Cidade: \n");
    fgets(nome, 50, stdin);          // Nessa linha tive ajuda do chat gpt, pra poder usar nomes compostos de cidades, como São Paulo, Rio de Janeiro, etc. Ele recomendou o uso desse código para conseguir isso.
    nome[strcspn(nome, "\n")] = 0;  // utilizando apenas o printf e scanf,ao escrever um nome composto, o programa zerava automaticamente todas as outras variaveis, essa mudança no código permitiu o uso de nomes compostos.

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
    printf("PIB: %f \n", pib);
    printf("Número de Pontos Turísticos: %d \n", turismo);
    printf("Área da Cidade (km²): %f\n", area);

    return 0;
}
