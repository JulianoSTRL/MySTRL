#include <stdio.h>

int main() {
    char codigo1, codigo2;
    int carta1, carta2;

    // Primeira carta
    do
    {
        printf ("Informe a primeira carta (letra A-H e número 1-4): \n");
        scanf  (" %c%d", &codigo1, &carta1);
        
        // Validações:
        if (codigo1 < 'A' || codigo1 > 'H')
        {
            printf ("\nDados Inválidos! Use apenas letras de A até H.\n");
        }
        else if (carta1 < 1 || carta1 > 4)
        {
            printf ("\nNúmero inválido! Use apenas números entre 1 e 4.\n");
        }
        else if (codigo2 == codigo1 && carta2 == carta1)
        {
            printf ("\nVocê repetiu a mesma carta! Escolha uma diferente da primeira.\n");
        }
        else
        {
        break;  // Dados válidos — sai do loop
        }

    } while (1);  // Loop infinito até os dados estarem válidos

    // Loop para validar segunda carta
    do
    {
        printf ("\nInforme a segunda carta (letra A-H e número 1-4): \n");
        printf ("Sem ser os dados utilizados na primeira carta: \n");
        scanf  (" %c%d", &codigo2, &carta2);

        // Validações:
        if (codigo2 < 'A' || codigo2 > 'H')
        {
            printf ("\nLetra inválida! Use apenas letras de A até H.\n");
        }
        else if  (carta2 < 1 || carta2 > 4)
        {
            printf ("\nNúmero inválido! Use apenas números de 1 até 4.\n");
        }
        else if  (codigo2 == codigo1 && carta2 == carta1)
        {
            printf ("\nVocê repetiu a mesma carta! Escolha uma diferente da primeira.\n");
        }
        else
        {
            break;  // Dados válidos — sai do loop
        }

    } while (1);  // Loop infinito até os dados estarem válidos

    // Mostrando as cartas
    printf ("\nPrimeira carta: %c%d\n", codigo1, carta1);
    printf ("Segunda carta:  %c%d\n", codigo2, carta2);

    return 0;
}