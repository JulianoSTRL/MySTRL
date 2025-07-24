#include <stdio.h>
 int main ()
 {

    int carta1, carta2, turismo1 = 15, turismo2 = 25;
    int pop1 = 763036, pop2 = 1774000;
    float area1 = 450, area2 = 432, pib1 = 172, pib2 = 98;
    float popdens1 = pop1 / area1 , popdens2 = pop2 / area2;
    double pibpc1 = (pib1 * 1000000000.0) / pop1, pibpc2 = (pib2 * 1000000000.0) / pop2;
    int popbtl, areabtl, turismobtl, pibbtl, popdensbtl, pibpcbtl; 

    popbtl = pop1 > pop2;
    areabtl = area1 > area2;
    pibbtl = pib1 > pib2;
    turismobtl = turismo1 > turismo2;
    popdensbtl = popdens1 > popdens2;
    pibpcbtl = pibpc1 > pibpc2;

    printf ("População Carta 1: %d.\n", pop1);
    printf ("População Carta 2: %d.\n", pop2);
    printf ("População: Carta 1 venceu? (%d).\n", popbtl);

    printf ("\nÁrea Carta 1: %.3f km².\n", area1);
    printf ("Área Carta 2: %.3f km².\n", area2);
    printf ("Área: Carta 1 venceu? (%d).\n", areabtl);

    printf ("\nPIB Carta 1: %.2f bilhões de reais.\n", pib1);
    printf ("PIB Carta 2: %.2f bilhões de reais.\n", pib2);
    printf ("PIB: Carta 1 venceu? (%d).\n", pibbtl);

    printf ("\nPontos turísticos Carta 1: %d.\n", turismo1);
    printf ("Pontos turísticos Carta 2: %d.\n", turismo2);
    printf ("Pontos turísticos: Carta 1 venceu? (%d).\n", turismobtl);

    printf ("\nDensidade populacional Carta 1: %.2f hab/km².\n", popdens1);
    printf ("Densidade populacional Carta 2: %.2f hab/km².\n", popdens2);
    printf ("Densidade populacional: Carta 1 venceu? (%d).\n", popdensbtl);

    printf ("\nPIB Per Capita Carta 1: %.2f reais.\n", pibpc1);
    printf ("PIB Per Capita Carta 2: %.2f reais.\n", pibpc2);
    printf ("PIB Per Capita: Carta 1 venceu? (%d).\n", pibpcbtl);

    return 0;
 }