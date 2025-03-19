#include <stdio.h>
#include <ctype.h> // Biblioteca para manipulação de caracteres

int main()
{
    // Declaração das variáveis para as cartas
    char estado_carta1, estado_carta2;                      // Letra de 'A' a 'H' representando o estado
    char codigo_carta1[5], codigo_carta2[5];                // Código da carta (ex.: A01, B03)
    char nome_pais_carta1[50], nome_pais_carta2[50];        // Nome completo do país
    unsigned long int populacao_carta1, populacao_carta2;   // Número de habitantes
    double area_carta1, area_carta2;                        // Área do país em km²
    double pib_carta1, pib_carta2;                          // PIB em bilhões de reais
    int pontos_turisticos_carta1, pontos_turisticos_carta2; // Número de pontos turísticos
    double densidade_carta1, densidade_carta2;              // Densidade populacional (hab/km²)
    double pib_per_capita_carta1, pib_per_capita_carta2;    // PIB per capita

    // Mensagem de Boas-Vindas
    printf("============================================================\n");
    printf("   Bem-vindo ao Sistema de Cadastro do Super Trunfo!  \n");
    printf("============================================================\n\n");

    // Entrada e validação de Dados para a Primeira carta
    printf("------ Cadastro dos dados para a Primeira carta ------\n");
    printf("Digite uma letra entre 'A' e 'H' (use letras maiúsculas): ");
    scanf(" %c", &estado_carta1);
    toupper(estado_carta1);
    if (estado_carta1 >= 'A' && estado_carta1 <= 'H')
    {
        printf("Digite um código para a carta, utilize '%c' seguido de um número de 01 a 04: ", estado_carta1);
        scanf("%s", codigo_carta1);
    }
    else
    {
        printf("Erro: Letra inválida! Use apenas de 'A' a 'H'.\n");
        printf("\nPressione ENTER para encerrar...\n");
        getchar(); // Limpa o buffer do teclado
        getchar(); // Aguarda o usuário pressionar ENTER
        return 1;  // Encerra o programa
    }

    printf("Digite o nome completo do país: ");
    scanf(" %[^\n]", nome_pais_carta1);

    printf("Digite o número de habitantes do país (ex.: 1000000): ");
    scanf("%lu", &populacao_carta1);

    if (populacao_carta1 <= 0)
    {
        printf("Erro: O número de habitantes não pode ser zero ou negativo!\n");
        printf("\nPressione ENTER para encerrar...\n");
        getchar();
        getchar();
        return 1;
    }

    printf("Digite a área em km² (ex.: 1200.25): ");
    scanf("%lf", &area_carta1);
    if (area_carta1 <= 0)
    {
        printf("Erro: A área não pode ser zero ou negativa!\n");
        printf("\nPressione ENTER para encerrar...\n");
        getchar();
        getchar();
        return 1;
    }

    printf("Digite o PIB em bilhões de reais (ex.: 300.50): ");
    scanf("%lf", &pib_carta1);
    if (pib_carta1 <= 0)
    {
        printf("Erro: O PIB não pode ser zero ou negativo!\n");
        printf("\nPressione ENTER para encerrar...\n");
        getchar();
        getchar();
        return 1;
    }

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos_carta1);
    if (pontos_turisticos_carta1 <= 0)
    {
        printf("Erro: O número de pontos turísticos não pode ser zero ou negativo!\n");
        printf("\nPressione ENTER para encerrar...\n");
        getchar();
        getchar();
        return 1;
    }

    // Cálculos da Primeira carta
    densidade_carta1 = (double)populacao_carta1 / area_carta1;
    pib_per_capita_carta1 = pib_carta1 * 1000000000 / (double)populacao_carta1; // PIB per capita em reais

    printf("\nPrimeira carta cadastrada com sucesso!\n");
    printf("\n-------------------------------------------------\n");

    // Entrada e validação de dados para a segunda carta
    printf("------ Cadastro dos dados para a Segunda carta ------\n");
    printf("Digite uma letra entre 'A' e 'H' (use letras maiúsculas): ");
    scanf(" %c", &estado_carta2);

    if (estado_carta2 >= 'A' && estado_carta2 <= 'H')
    {
        printf("Digite um código para a carta, utilize '%c' seguido de um número de 01 a 04: ", estado_carta2);
        scanf("%s", codigo_carta2);
    }
    else
    {
        printf("Erro: Letra inválida! Use apenas de 'A' a 'H'.\n");
        printf("\nPressione ENTER para encerrar...\n");
        getchar(); // Limpa o buffer do teclado
        getchar(); // Aguarda o usuário pressionar ENTER
        return 1;  // Encerra o programa
    }

    printf("Digite o nome completo do país: ");
    scanf(" %[^\n]", nome_pais_carta2);

    printf("Digite o número de habitantes do país (ex.: 1000000): ");
    scanf("%lu", &populacao_carta2);

    if (populacao_carta2 <= 0)
    {
        printf("Erro: O número de habitantes não pode ser zero ou negativo!\n");
        printf("\nPressione ENTER para encerrar...\n");
        getchar();
        getchar();
        return 1;
    }

    printf("Digite a área em km² (ex.: 1200.25): ");
    scanf("%lf", &area_carta2);
    if (area_carta2 <= 0)
    {
        printf("Erro: A área não pode ser zero ou negativa!\n");
        printf("\nPressione ENTER para encerrar...\n");
        getchar();
        getchar();
        return 1;
    }

    printf("Digite o PIB em bilhões de reais (ex.: 300.50): ");
    scanf("%lf", &pib_carta2);
    if (pib_carta2 <= 0)
    {
        printf("Erro: O PIB não pode ser zero ou negativo!\n");
        printf("\nPressione ENTER para encerrar...\n");
        getchar();
        getchar();
        return 1;
    }

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos_carta2);
    if (pontos_turisticos_carta2 <= 0)
    {
        printf("Erro: O número de pontos turísticos não pode ser zero ou negativo!\n");
        printf("\nPressione ENTER para encerrar...\n");
        getchar();
        getchar();
        return 1;
    }

    // Cálculos da Segunda carta
    densidade_carta2 = (double)populacao_carta2 / area_carta2;
    pib_per_capita_carta2 = pib_carta2 * 1000000000 / (double)populacao_carta2; // PIB per capita em reais

    printf("\nSegunda carta cadastrada com sucesso!\n");
    printf("\n=================================\n");

    // Menu interativo usando switch
    int opcao;
    printf("\n=================================\n");
    printf("Escolha o Atributo para Comparação\n");
    printf("===================================\n");
    printf("| 1 - População                   |\n");
    printf("| 2 - Área                        |\n");
    printf("| 3 - PIB                         |\n");
    printf("| 4 - Pontos Turísticos           |\n");
    printf("| 5 - Densidade Populacional      |\n");
    printf("===================================\n");
    printf("Digite o número do atributo (1-5): ");
    scanf("%d", &opcao);

    printf("\n================ Resultado da Comparação =================\n");
    // Validação e Comparação com Switch
    switch (opcao)
    {
    case 1:
        printf("\n===================================\n");
        printf("Comparando População:\n");
        printf("Carta 1 - %s: %lu\n", nome_pais_carta1, populacao_carta1);
        printf("Carta 2 - %s: %lu\n", nome_pais_carta2, populacao_carta2);
        if (populacao_carta1 > populacao_carta2)
        {
            printf("A Carta 1 venceu, pois tem a maior população: %lu em comparação à Carta 2\n", populacao_carta1);
        }
        else if (populacao_carta2 > populacao_carta1)
        {
            printf("A Carta 2 venceu, pois tem a maior população: %lu em comparação à Carta 1\n", populacao_carta2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;

    case 2:
        printf("Comparando a Área:\n");
        printf("Carta 1 - %s: %.2f km²\n", nome_pais_carta1, area_carta1);
        printf("Carta 2 - %s: %.2f km²\n", nome_pais_carta2, area_carta2);
        if (area_carta1 > area_carta2)
        {
            printf("A Carta 1 venceu, pois tem a maior área: %.2f km² em comparação à Carta 2\n", area_carta1);
        }
        else if (area_carta2 > area_carta1)
        {
            printf("A Carta 2 venceu, pois tem a maior área: %.2f km² em comparação à Carta 1\n", area_carta2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;

    case 3:
        printf("Comparando o PIB:\n");
        printf("Carta 1 - %s: %.2f Bilhões de reais\n", nome_pais_carta1, pib_carta1);
        printf("Carta 2 - %s: %.2f Bilhões de reais\n", nome_pais_carta2, pib_carta2);
        if (pib_carta1 > pib_carta2)
        {
            printf("A Carta 1 venceu, pois tem o maior PIB: %.2f Bilhões de reais em comparação à Carta 2\n", pib_carta1);
        }
        else if (pib_carta2 > pib_carta1)
        {
            printf("A Carta 2 venceu, pois tem o maior PIB: %.2f Bilhões de reais em comparação à Carta 1\n", pib_carta2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;

    case 4:
        printf("Comparando os Pontos Turísticos:\n");
        printf("Carta 1 - %s: %d\n", nome_pais_carta1, pontos_turisticos_carta1);
        printf("Carta 2 - %s: %d\n", nome_pais_carta2, pontos_turisticos_carta2);
        if (pontos_turisticos_carta1 > pontos_turisticos_carta2)
        {
            printf("A Carta 1 - %s venceu, pois tem o maior número de pontos turísticos: %d em comparação à Carta 2\n", nome_pais_carta1, pontos_turisticos_carta1);
        }
        else if (pontos_turisticos_carta2 > pontos_turisticos_carta1)
        {
            printf("A Carta 2 - %s venceu, pois tem o maior número de pontos turísticos: %d em comparação à Carta 1\n", nome_pais_carta2, pontos_turisticos_carta2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;

    case 5:
        printf("Comparando Densidade Populacional:\n");
        printf("Carta 1 - %s: %.2f hab/km²\n", nome_pais_carta1, densidade_carta1);
        printf("Carta 2 - %s: %.2f hab/km²\n", nome_pais_carta2, densidade_carta2);
        if (densidade_carta1 > densidade_carta2)
        {
            printf("A Carta 1 - %s: venceu, pois tem a maior densidade populacional: %.2f hab/km² em comparação à Carta \n", nome_pais_carta1, densidade_carta1);
        }
        else if (densidade_carta2 > densidade_carta1)
        {
            printf("A Carta 2 - %s: venceu, pois tem a maior densidade populacional: %.2f hab/km² em comparação à Carta \n", densidade_carta2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;

    default:
        printf("Erro: Opção inválida! Escolha uma opção de 1 a 5.\n");
        break;
    }

    printf("============================================================\n");
    printf("\nObrigado por jogar Super Trunfo!\n");
    printf("\nPressione ENTER para encerrar...\n");
    getchar();
    getchar();
    return 0;
}
