#include <stdio.h>

int main() {
    float tmb = 2008.0;
    float fatorAtividade = 1.0;
    char nivel;

    printf("\n--- Níveis de atividade física ---\n");
    printf("Digite:\n");
    printf("'s' para Sedentário\n");
    printf("'l' para Levemente ativo\n");
    printf("'m' para Moderadamente ativo\n");
    printf("'a' para Altamente ativo\n");
    printf("'e' para Extremamente ativo\n");
    printf("Escolha: ");
    scanf(" %c", &nivel);  // espaço antes do %c para ignorar o enter anterior

    switch (nivel) {
        case 's':
            fatorAtividade = 1.2;
            printf("Sedentário selecionado.\n");
            break;
        case 'l':
            fatorAtividade = 1.375;
            printf("Levemente ativo selecionado.\n");
            break;
        case 'm':
            fatorAtividade = 1.55;
            printf("Moderadamente ativo selecionado.\n");
            break;
        case 'a':
            fatorAtividade = 1.725;
            printf("Altamente ativo selecionado.\n");
            break;
        case 'e':
            fatorAtividade = 1.9;
            printf("Extremamente ativo selecionado.\n");
            break;
        default:
            printf("Opção inválida.\n");
            return 1;
    }

    // Cálculo final da TMB com o fator de atividade física
    float tmbAjustada = tmb * fatorAtividade;
    printf("\nSua TMB ajustada para o nível de atividade física é: %.2f calorias.\n", tmbAjustada);

    return 0;
}
