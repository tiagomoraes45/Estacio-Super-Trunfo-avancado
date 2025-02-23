#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomePais1[50], nomePais2[50];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2;
    int opcao;

    printf("\nDigite os dados da Carta 1:\n");
    printf("Nome do País: ");
    scanf(" %s", nomePais1);
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf(" %s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %s", nomeCidade1);
    printf("População: ");
    scanf(" %d", &populacao1);
    printf("Área (em km²): ");
    scanf(" %f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos1);

    printf("\nDigite os dados da Carta 2:\n");
    printf("Nome do País: ");
    scanf(" %s", nomePais2);
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: A01): ");
    scanf(" %s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %s", nomeCidade2);
    printf("População: ");
    scanf(" %d", &populacao2);
    printf("Área (em km²): ");
    scanf(" %f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos2);

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    printf("\nSelecione um atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Escolha: ");
    scanf(" %d", &opcao);

    printf("\nComparação entre %s (%s) e %s (%s):\n", nomeCidade1, nomePais1, nomeCidade2, nomePais2);

    switch (opcao) {
        case 1:
            printf("População:\n%s: %d\n%s: %d\n", nomeCidade1, populacao1, nomeCidade2, populacao2);
            break;
        case 2:
            printf("Área:\n%s: %.2f km²\n%s: %.2f km²\n", nomeCidade1, area1, nomeCidade2, area2);
            break;
        case 3:
            printf("PIB:\n%s: %.2f bilhões de reais\n%s: %.2f bilhões de reais\n", nomeCidade1, pib1, nomeCidade2, pib2);
            break;
        case 4:
            printf("Pontos Turísticos:\n%s: %d\n%s: %d\n", nomeCidade1, pontosTuristicos1, nomeCidade2, pontosTuristicos2);
            break;
        case 5:
            printf("Densidade Demográfica:\n%s: %.2f hab/km²\n%s: %.2f hab/km²\n", nomeCidade1, densidade1, nomeCidade2, densidade2);
            break;
        default:
            printf("Opção inválida!\n");
            return 0;
    }

    if ((opcao == 1 && populacao1 > populacao2) ||
        (opcao == 2 && area1 > area2) ||
        (opcao == 3 && pib1 > pib2) ||
        (opcao == 4 && pontosTuristicos1 > pontosTuristicos2) ||
        (opcao == 5 && densidade1 < densidade2)) {
        printf("%s venceu!\n", nomeCidade1);
    } else if ((opcao == 1 && populacao1 < populacao2) ||
               (opcao == 2 && area1 < area2) ||
               (opcao == 3 && pib1 < pib2) ||
               (opcao == 4 && pontosTuristicos1 < pontosTuristicos2) ||
               (opcao == 5 && densidade1 > densidade2)) {
        printf("%s venceu!\n", nomeCidade2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}