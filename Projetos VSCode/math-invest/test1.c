#include <stdio.h>

int main() {
    float aporte, total = 0.0, juros = 0.0;
    int meses;
    char banco;
    float taxaAnual = 0.0, taxaMensal;

    printf("=== Simulador de Investimentos ===\n");

    // Entrada do usuário
    printf("\nInforme o valor do aporte mensal (R$): ");
    scanf("%f", &aporte);

    printf("Informe o número de meses: ");
    scanf("%d", &meses);

    printf("Escolha o banco:\n");
    printf("[S] Santander (CDB 108%% CDI ~10.8%% a.a)\n");
    printf("[N] Nubank    (CDB 100%% CDI ~10.0%% a.a)\n");
    printf("[M] Mercado Pago (CDB 93%% CDI ~9.3%% a.a)\n");
    printf("Digite a letra correspondente: ");
    scanf(" %c", &banco);

    // Definir taxa anual
    switch(banco) {
        case 'S': case 's':
            taxaAnual = 10.8;
            break;
        case 'N': case 'n':
            taxaAnual = 15.0;
            break;
        case 'M': case 'm':
            taxaAnual = 9.3;
            break;
        default:
            printf("Opção inválida! Encerrando.\n");
            return 1;
    }

    // Taxa mensal aproximada
    taxaMensal = taxaAnual / 12 / 100;

    printf("\nSimulando com %.2f%% a.a (%.4f%% a.m)\n", taxaAnual, taxaMensal * 100);
    printf("\n----------------------------------------\n");

    for (int i = 1; i <= meses; i++) {
        total += aporte;                     // adiciona aporte
        float rendimento = total * taxaMensal;
        total += rendimento;                 // adiciona rendimento
        juros += rendimento;                 // acumula juros separados
        printf("Mês %2d: R$ %.2f\n", i, total);
    }

    float totalInvestido = aporte * meses;

    printf("----------------------------------------\n");
    printf("Total investido: R$ %.2f\n", totalInvestido);
    printf("Total em juros:  R$ %.2f\n", juros);
    printf("Total acumulado: R$ %.2f\n", total);

    return 0;
}

