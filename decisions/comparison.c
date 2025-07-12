#include <stdio.h>

int main()
{
    // '- Estrutura simples de 'if else' para entendimento

    float val1 = 75.0, val2 = 75.0;

    if (val1 == val2)
        printf ("Os valores são iguais.\n");
    else
        printf ("Os valores são diferentes.\n");

    // '- Exemplo 1: obtendo dados com (scanf) e devolvendo condição (if else);

    int age;

    printf ("\nQual a sua idade? ");
    scanf  ("%d", &age);

    if (age >= 18)
        printf ("\nVocê está apto a votar!\n");
    else
        printf ("\nVocê não está apto à votar\n!");

    // '- Exemplo 2: com float;

    float grade;

    printf ("\nDigite sua nota na matéria x: ");
    scanf  ("%f", &grade);

    if (grade >= 6.0)
        printf ("\nVocê passou, parabéns!\n");
    else
        printf ("\nVocê não passou, meus pêsames '-'\n");

    // '- Exemplo 3: sem retorno de else, apenas if, com float.

    float worth;
    float posto1 = 4.35, posto2 = 4.65, posto3 = 4.95;

    printf ("\nQuanto você pode gastar para abastecer? ");
    scanf  ("%f", &worth);

    printf ("\n --- Preço do alcóol nos postos da região ---\n");
    printf ("\nPosto 1: %.2f\n", posto1);
    printf ("Posto 2: %.2f\n", posto2);
    printf ("Posto 3: %.2f\n", posto3);
    
    if (worth >= posto1)
        printf ("\nConsegue abastecer no Posto 1.\n");
    else;

    if (worth >= posto2)
        printf ("\nConsegue abastecer no posto 2.\n");
    else;

    if (worth >= posto3)
        printf ("\nConsegue abastecer no posto 3.\n");
    else;

    return 0;
}