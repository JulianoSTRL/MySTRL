#include <stdio.h>

int main ()

{
    int idade = 31;
    float altura = 1.70;

    if (idade >= 18 && idade <= 30 && altura >= 1.70 && altura <= 1.85)
    {
        printf ("\nVocê atende os requisitos.\n");
    }
    else
    {
        printf ("\nVocê não atende os requisitos.\n");
    }

    return 0;
}