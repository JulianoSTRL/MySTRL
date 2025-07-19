#include <stdio.h>

int main ()
{
    int num;

    printf ("Digite um número: ");
    scanf  ("%d", &num);

    // Testando se o número atende os critérios necessários;
    if (num > 0 && num < 20)
    {
    printf ("Positivo.\n");
    }
        else if (num == 0)
        {
        printf ("Número zero.\n");
        }
    else
    {
    printf ("Negativo.\n");
    }

    // Testando se o número é par;
    if (num % 2 == 0)
    {
    printf ("Número é par.\n");
    }
    else
    {
    printf ("Número é impar.\n");
    }
return 0;
}