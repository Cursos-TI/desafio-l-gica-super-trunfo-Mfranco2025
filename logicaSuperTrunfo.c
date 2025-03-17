#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main()
{
    // Definição das variáveis para armazenar as propriedades das cidades
    char estado_carta1;                 // Letra de 'A' a 'H' representando o estado
    char codigo_carta1[5];              // Código da carta (ex.: A01, B03)
    char cidade_carta1[50];             // Nome completo da cidade
    unsigned long int populacao_carta1; // Número de habitantes (usado unsigned long int para valores grandes)
    double area_carta1;                 // Área da cidade em km² (usado double para maior precisão)
    double pib_carta1;                  // PIB em bilhões de reais
    int pontos_turisticos_carta1;       // Número de pontos turísticos
    double densidade_carta1;            // Densidade populacional (hab/km²)
    double pib_per_capita_carta1;       // PIB per capita em reais
    double super_poder_carta1;          // Super Poder calculado a partir dos atributos
    int carta1_pontos = 0;              // Pontuação da carta 1

    // Variáveis para armazenar os dados da segunda carta
    char estado_carta2;                 // Letra de 'A' a 'H' representando o estado
    char codigo_carta2[5];              // Código da carta (ex.: A01, B03)
    char cidade_carta2[50];             // Nome completo da cidade
    unsigned long int populacao_carta2; // Número de habitantes (usado unsigned long int para valores grandes)
    double area_carta2;                 // Área da cidade em km² (usado double para maior precisão)
    double pib_carta2;                  // PIB em bilhões de reais
    int pontos_turisticos_carta2;       // Número de pontos turísticos
    double densidade_carta2;            // Densidade populacional (hab/km²)
    double pib_per_capita_carta2;       // PIB per capita em reais
    double super_poder_carta2;          // Super Poder calculado a partir dos atributos
    int carta2_pontos = 0;              // Pontuação da carta 2

    // Cadastro das Cartas:
    printf("Bem-vindo ao sistema de cadastro de cartas do Super Trunfo!\n\n");

    // --- Entrada de Dados da Carta 1 ---
    printf("Digite uma letra entre 'A' e 'H': ");
    scanf(" %c", &estado_carta1);

    printf("Digite um código para a carta, utilize '%c' seguido de um número de 01 a 04 (ex.: '%c01'): ", estado_carta1, estado_carta1);
    scanf("%s", codigo_carta1);

    printf("Digite o nome completo da cidade: ");
    scanf(" %[^\n]", cidade_carta1);

    printf("Digite o número de habitantes da cidade, sem pontos ou vírgulas (ex.: 6748000): ");
    scanf("%lu", &populacao_carta1);

    printf("Digite a área em km² (ex.: 1200.25): ");
    scanf("%lf", &area_carta1);

    printf("Digite o PIB em bilhões de reais (ex.: 300.50): ");
    scanf("%lf", &pib_carta1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos_carta1);

    // --- Cálculos da Carta 1 ---
    // Cálculo da densidade (população/área), PIB per capita (PIB total/população) e Super Poder (soma de atributos + 1/densidade)
    densidade_carta1 = (double)populacao_carta1 / area_carta1;
    pib_per_capita_carta1 = (pib_carta1 * 1000000000) / (double)populacao_carta1;
    super_poder_carta1 = ((double)populacao_carta1 + area_carta1 + pib_carta1 +
                          (double)pontos_turisticos_carta1 + pib_per_capita_carta1 + (1.0 / densidade_carta1));

    printf("\nAgora, vamos cadastrar a segunda carta\n");

    // --- Entrada de Dados da Carta 2 ---
    printf("Digite uma letra entre 'A' e 'H': ");
    scanf(" %c", &estado_carta2);

    printf("Digite um código para a carta, utilize '%c' seguido de um número de 01 a 04 (ex.: '%c01'): ", estado_carta2, estado_carta2);
    scanf("%s", codigo_carta2);

    printf("Digite o nome completo da cidade: ");
    scanf(" %[^\n]", cidade_carta2);

    printf("Digite o número de habitantes da cidade, sem pontos ou vírgulas (ex.: 12325000): ");
    scanf("%lu", &populacao_carta2);

    printf("Digite a área em km² (ex.: 1521.11): ");
    scanf("%lf", &area_carta2);

    printf("Digite o PIB em bilhões de reais (ex.: 699.30): ");
    scanf("%lf", &pib_carta2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos_carta2);

    // --- Cálculos da Carta 2 ---
    // Cálculo da densidade (população/área), PIB per capita (PIB total/população) e Super Poder (soma de atributos + 1/densidade)
    densidade_carta2 = (double)populacao_carta2 / area_carta2;
    pib_per_capita_carta2 = (pib_carta2 * 1000000000) / (double)populacao_carta2;
    super_poder_carta2 = ((double)populacao_carta2 + area_carta2 + pib_carta2 +
                          (double)pontos_turisticos_carta2 + pib_per_capita_carta2 + (1.0 / densidade_carta2));

    printf("\nCartas cadastradas com sucesso!\n");
    printf("\n______________________.::Carta 1::._______________________\n");
    printf("Estado:                  %c\n", estado_carta1);
    printf("Código:                  %s\n", codigo_carta1);
    printf("Nome da Cidade:          %s\n", cidade_carta1);
    printf("População:               %lu\n", populacao_carta1);
    printf("Área:                    %.2f km²\n", area_carta1);
    printf("PIB:                     %.2f bilhões de reais\n", pib_carta1);
    printf("Pontos Turísticos:       %d\n", pontos_turisticos_carta1);
    printf("Densidade Populacional:  %.2f hab/km²\n", densidade_carta1);
    printf("PIB per Capita:          %.2f reais\n", pib_per_capita_carta1);
    printf("Super Poder:             %.2f\n", super_poder_carta1);

    printf("\n______________________.::Carta 2::._______________________\n");
    printf("Estado:                  %c\n", estado_carta2);
    printf("Código:                  %s\n", codigo_carta2);
    printf("Nome da Cidade:          %s\n", cidade_carta2);
    printf("População:               %lu\n", populacao_carta2);
    printf("Área:                    %.2f km²\n", area_carta2);
    printf("PIB:                     %.2f bilhões de reais\n", pib_carta2);
    printf("Pontos Turísticos:       %d\n", pontos_turisticos_carta2);
    printf("Densidade Populacional:  %.2f hab/km²\n", densidade_carta2);
    printf("PIB per Capita:          %.2f reais\n", pib_per_capita_carta2);
    printf("Super Poder:             %.2f\n", super_poder_carta2);
    printf("\n____________________________________________________________\n");

    // --- Comparação das Cartas ---
    printf("O Atributo escolhido para verificar a carta vencedora é o PIB \n");
    printf("A carta1 tem o PIB de: %.2f Bilhões de reais\n", pib_carta1);
    printf("A carta 2 tem o PIB de: %.2f Bilhões de reais\n", pib_carta2);

    if (pib_carta1 > pib_carta2)
    {
        printf("A carta 1 venceu!, pois tem o maior PIB: %.2f em comparação a carta2\n", pib_carta1);
    }
    else
    {
        printf("A carta 2 venceu!, pois tem o maior PIB: %.2f em comparação a carta1\n", pib_carta2);
    }

    printf("\nPressione ENTER para continuar...\n");
    getchar(); // Limpa o buffer do teclado
    getchar(); // Aguarda o usuário pressionar ENTER
    return 0;
}
