#include <stdio.h>

int main()
{
    double km2, pop, pib;
    double popdens, pibpc;

    printf("Favor digitar todos os valores usando ponto (.) como separador decimal.\n\n");

    printf ("Digite a área em km²: ");
    scanf  ("%f", &km2);
    printf ("Digite a população: ");
    scanf  ("%f", &pop);
    printf ("Digite o PIB em reais (R$): ");
    scanf  ("%f", &pib);

    popdens  = pop / km2;
    pibpc    = pib / pop;

    printf("\nRESULTADOS:\n");-
    printf ("\nDensidade Populacional: %.2f hab/km²\n", popdens);
    printf ("\nPIB Per Capita: R$ %.2f\n", pibpc);

    return 0;
}