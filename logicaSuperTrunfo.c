#include <stdio.h>
#include <string.h> // Para usar strcpy

int main() {
    // Declaração das variáveis para a Carta 1 - Brasil (carta do usuário)
    char pais_letra1 = 'B';
    char codigo1[5] = "B01";
    char nome_pais1[50] = "Brasil";
    unsigned long int populacao1 = 213993437;
    double area1 = 8515767.0;
    double pib1 = 1500.0;
    int pontos_turisticos1 = 15;
    double densidade1;
    double pib_per_capita1;
    double super_poder1;

    // Cálculos para a Carta 1
    densidade1 = (double)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / (double)populacao1;
    super_poder1 = (double)populacao1 + area1 + pib1 + (double)pontos_turisticos1 + pib_per_capita1 + (1.0 / densidade1);

    // Declaração das variáveis para a Carta 2 - Argentina (não será exibida para o usuario)
    char pais_letra2 = 'A';
    char codigo2[5] = "A01";
    char nome_pais2[50] = "Argentina";
    unsigned long int populacao2 = 45195777;
    double area2 = 2780400.0;
    double pib2 = 450.0;
    int pontos_turisticos2 = 10;
    double densidade2;
    double pib_per_capita2;
    double super_poder2;

    // Cálculos para a Carta 2
    densidade2 = (double)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / (double)populacao2;
    super_poder2 = (double)populacao2 + area2 + pib2 + (double)pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade2);

    // Exibição da Carta do jogador
    printf("============================================================\n");
    printf("|          Bem-vindo ao Jogo Super Trunfo-Países!          |\n");
    printf("============================================================\n");
    printf("| Você, jogador, será representado pela carta: %-12s|\n", nome_pais1);
    printf("============================================================\n");
    printf("| Atributos da sua carta:                                  |\n");
    printf("| %-20s: %-34s|\n", "Código", codigo1);
    printf("| %-20s: %-34lu|\n", "População", populacao1);
    printf("| %-20s: %-34.2f|\n", "Área (km²)", area1);
    printf("| %-20s: %-34.2f|\n", "PIB (bilhões R$)", pib1);
    printf("| %-20s: %-34d|\n", "Pontos Turísticos", pontos_turisticos1);
    printf("| %-20s: %-34.2f|\n", "Densidade (hab/km²)", densidade1);
    printf("| %-20s: %-34.2f|\n", "PIB per capita (R$)", pib_per_capita1);
    printf("| %-20s: %-34.2f|\n", "Super Poder", super_poder1);
    printf("============================================================\n");

    // Variaveis para o menu das escolha dos atributos
    char nome_atributo1[50], nome_atributo2[50];
    int escolha1, escolha2;
    double valor1_carta1, valor2_carta1;
    double valor1_carta2, valor2_carta2;
    int resultado1, resultado2;

    // Menu interativo 
    printf("\nEscolha dois atributos para a batalha!\n");
    printf("Regras: O maior valor vence, exceto na Densidade (menor é melhor).\n");
    printf("Se cada um vencer em um atributo, o Super Poder decide!\n");
    printf("------------------------------------------------------------\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade\n");
    printf("6 - PIB per capita\n");
    printf("------------------------------------------------------------\n");
    printf("Digite o número do primeiro atributo (1-6): ");
    scanf("%d", &escolha1);

    // Validando a primeira escolha
    if (escolha1 < 1 || escolha1 > 6) {
        printf("Atributo inválido! Tente novamente.\n");
        getchar();
        printf("Pressione Enter para continuar...\n");
        getchar();
        return 1;
    }

    // Verificando o primeiro atributo
    switch (escolha1) {
        case 1:
            printf("Você escolheu o atributo População\n");
            strcpy(nome_atributo1, "População");
            valor1_carta1 = (double)populacao1;
            valor1_carta2 = (double)populacao2;
            resultado1 = valor1_carta1 > valor1_carta2 ? 1 : 0;
            break;
        case 2:
            printf("Você escolheu o atributo Área\n");
            strcpy(nome_atributo1, "Área (km²)");
            valor1_carta1 = area1;
            valor1_carta2 = area2;
            resultado1 = valor1_carta1 > valor1_carta2 ? 1 : 0;
            break;
        case 3:
            printf("Você escolheu o atributo PIB\n");
            strcpy(nome_atributo1, "PIB (bilhões R$)");
            valor1_carta1 = pib1;
            valor1_carta2 = pib2;
            resultado1 = valor1_carta1 > valor1_carta2 ? 1 : 0;
            break;
        case 4:
            printf("Você escolheu o atributo Pontos Turísticos\n");
            strcpy(nome_atributo1, "Pontos Turísticos");
            valor1_carta1 = (double)pontos_turisticos1;
            valor1_carta2 = (double)pontos_turisticos2;
            resultado1 = valor1_carta1 > valor1_carta2 ? 1 : 0;
            break;
        case 5:
            printf("Você escolheu o atributo Densidade\n");
            strcpy(nome_atributo1, "Densidade (hab/km²)");
            valor1_carta1 = densidade1;
            valor1_carta2 = densidade2;
            resultado1 = valor1_carta1 < valor1_carta2 ? 1 : 0; // Menor densidade ganha
            break;
        case 6:
            printf("Você escolheu o atributo PIB per capita\n");
            strcpy(nome_atributo1, "PIB per capita (R$)");
            valor1_carta1 = pib_per_capita1;
            valor1_carta2 = pib_per_capita2;
            resultado1 = valor1_carta1 > valor1_carta2 ? 1 : 0;
            break;
    }

    // Segunda escolha
    printf("Digite o número do segundo atributo (1-6): ");
    scanf("%d", &escolha2);

    // Validando a segunda escolha
    if (escolha2 < 1 || escolha2 > 6) {
        printf("Atributo inválido! Tente novamente.\n");
        getchar();
        printf("Pressione Enter para continuar...\n");
        getchar();
        return 1;
    } else if (escolha1 == escolha2) {
        printf("Escolha dois atributos diferentes!\n");
        getchar();
        printf("Pressione Enter para continuar...\n");
        getchar();
        return 1;
    }

    //  verificando o segundo atributo
    switch (escolha2) {
        case 1:
            printf("Você escolheu o atributo População\n");
            strcpy(nome_atributo2, "População");
            valor2_carta1 = (double)populacao1;
            valor2_carta2 = (double)populacao2;
            resultado2 = valor2_carta1 > valor2_carta2 ? 1 : 0;
            break;
        case 2:
            printf("Você escolheu o atributo Área\n");
            strcpy(nome_atributo2, "Área (km²)");
            valor2_carta1 = area1;
            valor2_carta2 = area2;
            resultado2 = valor2_carta1 > valor2_carta2 ? 1 : 0;
            break;
        case 3:
            printf("Você escolheu o atributo PIB\n");
            strcpy(nome_atributo2, "PIB (bilhões R$)");
            valor2_carta1 = pib1;
            valor2_carta2 = pib2;
            resultado2 = valor2_carta1 > valor2_carta2 ? 1 : 0;
            break;
        case 4:
            printf("Você escolheu o atributo Pontos Turísticos\n");
            strcpy(nome_atributo2, "Pontos Turísticos");
            valor2_carta1 = (double)pontos_turisticos1;
            valor2_carta2 = (double)pontos_turisticos2;
            resultado2 = valor2_carta1 > valor2_carta2 ? 1 : 0;
            break;
        case 5:
            printf("Você escolheu o atributo Densidade\n");
            strcpy(nome_atributo2, "Densidade (hab/km²)");
            valor2_carta1 = densidade1;
            valor2_carta2 = densidade2;
            resultado2 = valor2_carta1 < valor2_carta2 ? 1 : 0; // Menor densidade ganha
            break;
        case 6:
            printf("Você escolheu o atributo PIB per capita\n");
            strcpy(nome_atributo2, "PIB per capita (R$)");
            valor2_carta1 = pib_per_capita1;
            valor2_carta2 = pib_per_capita2;
            resultado2 = valor2_carta1 > valor2_carta2 ? 1 : 0;
            break;
    }

    // Exibição dos atributos para a batalha
    printf("\n============================================================\n");
    printf("|                      Batalha!                            |\n");
    printf("============================================================\n");
    printf("| Comparando %-11s (Você) vs %-11s (Adversário) |\n", nome_pais1, nome_pais2);
    printf("|----------------------------------------------------------|\n");
    printf("| %-25s | %15.2f | %15.2f |\n", nome_atributo1, valor1_carta1, valor1_carta2);
    printf("| %-25s | %15.2f | %15.2f |\n", nome_atributo2, valor2_carta1, valor2_carta2);
    printf("============================================================\n");

    // Resultado da batalha!
    printf("\n============================================================\n");
    printf("|                     Resultado                            |\n");
    printf("============================================================\n");
    int empate1 = (valor1_carta1 == valor1_carta2) ? 1 : 0;
    int empate2 = (valor2_carta1 == valor2_carta2) ? 1 : 0;

    if (resultado1 == 1 && resultado2 == 1) {
        printf("| Parabéns! Você venceu nos dois atributos!                |\n");
    } else if (resultado1 == 0 && resultado2 == 0) {
        if (empate1 && empate2) {
            printf("| Empate nos dois atributos! Nenhum vencedor.             |\n");
        } else if (empate1) {
            printf("| Você perdeu no segundo atributo (primeiro empatou).     |\n");
        } else if (empate2) {
            printf("| Você perdeu no primeiro atributo (segundo empatou).     |\n");
        } else {
            printf("| Você perdeu nos dois atributos!                         |\n");
        }
    } else if ((resultado1 == 1 && resultado2 == 0) || (resultado1 == 0 && resultado2 == 1)) {
        printf("| Vitória dividida! Cada um venceu em um atributo.        |\n");
        printf("| Usando Super Poder como desempate:                      |\n");
        printf("|----------------------------------------------------------|\n");
        printf("| %-11s: %-15.2f | %-11s: %-15.2f |\n", nome_pais1, super_poder1, nome_pais2, super_poder2);
        printf("|----------------------------------------------------------|\n");
        if (super_poder1 > super_poder2) {
            printf("| Parabéns! Você venceu pelo Super Poder!                 |\n");
        } else if (super_poder1 < super_poder2) {
            printf("| Você perdeu pelo Super Poder!                           |\n");
        } else {
            printf("| Empate no Super Poder! Nenhum vencedor.                 |\n");
        }
    }
    printf("============================================================\n");

    printf("\nPressione ENTER para sair...\n");
    getchar();
    getchar();
    return 0;
}