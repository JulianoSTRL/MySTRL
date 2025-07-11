#include <stdio.h>

int main()
{
    int idade;
    float peso, altura, tmb, tmbAjustada, prot1, prot2;
    float fatorAtividade = 1.0;
    char sexo, nivel;

    printf ("--- Cálculo da TMB (Taxa Metabólica Basal) Harris-Benedict ---\n");

    // Entrada de dados
    printf ("\nDigite sua idade: ");
    scanf  ("%d", &idade);
    printf ("Digite seu peso em kg: ");
    scanf  ("%f", &peso);
    printf ("Digite sua altura em metros: ");
    scanf  ("%f", &altura);
    
    // Dados do usuário
    printf ("\n--- Dados do usuário ---\n");
    printf ("Idade: %d anos\n", idade);
    printf ("Peso: %.2f kg\n", peso);
    printf ("Altura: %.2f m\n", altura);

    // Fórmula da TMB (Harris-Benedict para homens)
    tmb = 66.5 + (13.75 * peso) + (5.003 * altura * 100) - (6.755 * idade);
    printf ("\nSua TMB (em repouso): %.2f calorias/dia\n", tmb);

    // Seleção do nível de atividade
    printf("\n--- Níveis de atividade física ---\n");
    printf("Digite:\n");
    printf("'s' → Sedentário\n");
    printf("'l' → Levemente ativo\n");
    printf("'m' → Moderadamente ativo\n");
    printf("'a' → Altamente ativo\n");
    printf("'e' → Extremamente ativo\n");
    printf("Escolha: ");
    scanf(" %c", &nivel);  // espaço antes do %c para ignorar enter

    switch (nivel) {
        case 's':
            fatorAtividade = 1.2;
            break;
        case 'l':
            fatorAtividade = 1.375;
            break;
        case 'm':
            fatorAtividade = 1.55;
            break;
        case 'a':
            fatorAtividade = 1.725;
            break;
        case 'e':
            fatorAtividade = 1.9;
            break;
        default:
            printf("Opção inválida.\n");
            return 1;
    }

    // TMB ajustada
    tmbAjustada = tmb * fatorAtividade;
    printf("\nTMB ajustada com atividade física: %.2f calorias/dia\n", tmbAjustada);

    // Cálculo da proteína recomendada
    prot1 = peso * 1.6;
    prot2 = peso * 2.2;
    printf("\n--- Proteína recomendada ---\n");
    printf("Entre %.2f g e %.2f g por dia (baseado no seu peso).\n", prot1, prot2);

    return 0;
}
