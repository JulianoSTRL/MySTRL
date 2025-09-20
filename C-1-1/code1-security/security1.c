#include <stdio.h>

int main()
{
    unsigned int   stock, minstock = 1000;
    float humi, temp;

    //Entrada de dados;

    printf ("\nQual a temperatura marcada? \n");
    scanf  ("%f", &temp);

    printf ("Qual a umidade marcada? \n");
    scanf  ("%f", &humi);

    printf ("Qual o estoque marcado? \n");
    scanf  ("%u", &stock);

    //Saída de dados temp;

    if (temp > 30)
    {
        printf ("\nA temperatura está acima do recomendado, favor abaixar.\n");
    }
    else
    {
        printf ("\nA temperatura está dentro dos parâmetros.\n");
    }

    //Saída de dados umidade;

    if (humi > 50)
    {
        printf ("\nA umidade está acima do recomendado, reduzir.\n");
    }
    else
    {
        printf ("\nA umidade está dentro dos parâmetros.\n");
    }

    //Saída de dados estoque;

    if (stock < minstock)
    {
        printf ("\nO estoque está abaixo do mínimo recomendado.\n");
    }
    else
    {
        printf ("\nO estoque está dentro do recomendado.\n");
    }
    return 0;
}