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

    printf("PIB: \n");           // os elementos %d, %f, e %s, indicam quais tipos de dados podem ser inseridos, como números inteiros (%d), dados de números com casas decimais, chamados de float(%f). ou strings, que são os tipos de dados que armazenam textos (%s).
    scanf("%f", &pib);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &turismo);

    printf("Área da cidade: \n");
    scanf("%f", &area);

    printf("\n=== Dados da Cidade ===\n");
    printf("Nome: %s \n", nome);                               // aqui, é definido como a informação será impressa na tela através do comando printf. 
    printf("População: %d \n", populacao);                      
    printf("PIB: %f \n", pib);
    printf("Número de Pontos Turísticos: %d \n", turismo);
    printf("Área da Cidade (km²): %f\n", area);

    return 0;
}
