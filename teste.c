#include <stdio.h>

int main ()
{
    float km1, km2, pib1, pib2, pop1, pop2, pibpc1, pibpc2, popdens1, popdens2;

    scanf  ("%f", &km1);
    scanf  ("%f", &km2);
    scanf  ("%f", &pop1);
    scanf  ("%f", &pop2);
    scanf  ("%f", &pib1);
    scanf  ("%f", &pib2);

    popdens1 = pop1 / km1;
    popdens2 = pop2 / km2;
    pibpc1 = pib1 / pop1;
    pibpc2 = pib2 / pop2; 

    /*
    printf ("%.2f\n", km1);
    printf ("%.2f\n", km2);
    printf ("%.2f\n", pop1);
    printf ("%.2f\n", pop2);
    printf ("%.2f\n", pib1);
    printf ("%.2f\n", pib2);
    */

    printf ("\n%.29841f\n", popdens1);
    printf ("%.2f\n", popdens2);
    printf ("%.2f\n", pibpc1);
    printf ("%.2f\n", pibpc2);

    return 0;
}