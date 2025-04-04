#include <stdio.h>
#include <string.h>

// Definindo uma estrutura para as cartas dos países
typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_demografica;
} Carta;

// Função para comparar os atributos das cartas
void compararCartas(Carta carta1, Carta carta2, int atributo) {
    switch (atributo) {
        case 1:  // Comparar População
            printf("\nComparando população...\n");
            printf("País 1: %s - População: %d\n", carta1.nome, carta1.populacao);
            printf("País 2: %s - População: %d\n", carta2.nome, carta2.populacao);
            if (carta1.populacao > carta2.populacao) {
                printf("Vencedor: %s\n", carta1.nome);
            } else if (carta1.populacao < carta2.populacao) {
                printf("Vencedor: %s\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:  // Comparar Área
            printf("\nComparando área...\n");
            printf("País 1: %s - Área: %.2f\n", carta1.nome, carta1.area);
            printf("País 2: %s - Área: %.2f\n", carta2.nome, carta2.area);
            if (carta1.area > carta2.area) {
                printf("Vencedor: %s\n", carta1.nome);
            } else if (carta1.area < carta2.area) {
                printf("Vencedor: %s\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:  // Comparar PIB
            printf("\nComparando PIB...\n");
            printf("País 1: %s - PIB: %.2f\n", carta1.nome, carta1.pib);
            printf("País 2: %s - PIB: %.2f\n", carta2.nome, carta2.pib);
            if (carta1.pib > carta2.pib) {
                printf("Vencedor: %s\n", carta1.nome);
            } else if (carta1.pib < carta2.pib) {
                printf("Vencedor: %s\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:  // Comparar Número de Pontos Turísticos
            printf("\nComparando número de pontos turísticos...\n");
            printf("País 1: %s - Pontos turísticos: %d\n", carta1.nome, carta1.pontos_turisticos);
            printf("País 2: %s - Pontos turísticos: %d\n", carta2.nome, carta2.pontos_turisticos);
            if (carta1.pontos_turisticos > carta2.pontos_turisticos) {
                printf("Vencedor: %s\n", carta1.nome);
            } else if (carta1.pontos_turisticos < carta2.pontos_turisticos) {
                printf("Vencedor: %s\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:  // Comparar Densidade Demográfica (menor é melhor)
            printf("\nComparando densidade demográfica...\n");
            printf("País 1: %s - Densidade demográfica: %.2f\n", carta1.nome, carta1.densidade_demografica);
            printf("País 2: %s - Densidade demográfica: %.2f\n", carta2.nome, carta2.densidade_demografica);
            if (carta1.densidade_demografica < carta2.densidade_demografica) {
                printf("Vencedor: %s\n", carta1.nome);
            } else if (carta1.densidade_demografica > carta2.densidade_demografica) {
                printf("Vencedor: %s\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }
}

// Função para exibir o menu interativo
void exibirMenu() {
    printf("\nEscolha um atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
}

int main() {
    // Criando algumas cartas de exemplo
    Carta pais1 = {"Brasil", 211000000, 8515767.0, 2055000.0, 1200, 25.0};
    Carta pais2 = {"Canadá", 38000000, 9984670.0, 1650000.0, 1500, 4.0};

    int opcao;

    // Exibindo o menu
    exibirMenu();
    printf("Digite a opção escolhida: ");

    // Validando a entrada do usuário
    while (scanf("%d", &opcao) != 1 || opcao < 1 || opcao > 5) {
        printf("Opção inválida! Digite um número entre 1 e 5: ");
        while(getchar() != '\n'); // Limpar o buffer
    }

    // Comparando as cartas com base na opção escolhida
    compararCartas(pais1, pais2, opcao);

    return 0;
}
