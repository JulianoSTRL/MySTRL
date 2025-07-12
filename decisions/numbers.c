#include <stdio.h>

int main()
{

    int num1 = 164, resultado;

    resultado = num1 % 2;

    printf ("\nA variável resultado é: %d\n", resultado);

    if (resultado == 0)
        printf ("\nO número é par!\n");
    else
        printf ("\nO número é ímpar\n");
    return 0;
}