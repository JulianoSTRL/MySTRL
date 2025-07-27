#include <stdio.h>
#include <string.h>

int main()
{

    //Variáveis definidas internamente;

    int codigo1 = 1, codigo2 = 2;
    int turismo1 = 15, turismo2 = 25;
    int pop1 = 763036, pop2 = 1772000;

    float area1 = 450, area2 = 435;
    float pib1 = 172, pib2 = 98;
    float popdens1, popdens2;

    double pibpc1, pibpc2;

    char carta1 = 'A', carta2 = 'B';

    char estado1[50] = "São Paulo";
    char estado2[50] = "Paraná";
    char cidade1[50] = "Sorocaba";
    char cidade2[50] = "Curitiba";

    printf ("***Bem Vindo ao Super Trunfo Países***\n");

   // Cálculos

    popdens1 = pop1 / area1;
    popdens2 = pop2 / area2;

    pibpc1 = (pib1 * 1e9) / pop1;  // PIB per capita em reais
    pibpc2 = (pib2 * 1e9) / pop2;

    //Dados da Primeira Carta;

    printf ("\n--- Dados da primeira carta ---\n");
    printf ("\nCarta 1\n");
    printf ("Código: %c%d.\n",carta1, codigo1);
    printf ("Estado: %s.\n", estado1);
    printf ("Cidade: %s.\n", cidade1);
    printf ("População: %d habitantes.\n", pop1);
    printf ("Área: %.2f km².\n", area1);
    printf ("PIB: %.2f bilhões de reais.\n", pib1);
    printf ("Pontos turísticos: %d.\n", turismo1);
    printf ("Densidade populacional: %.2f hab/km².\n", popdens1);
    printf ("PIB Per Capita: %.2f mil reais.\n", pibpc1);

    //Dados da Segunda Carta;
    
    printf ("\n--- Dados da segunda carta ---\n");
    printf ("\nCarta 2\n");
    printf ("Código: %c%d.\n",carta2, codigo2);
    printf ("Estado: %s.\n", estado2);
    printf ("Cidade: %s.\n", cidade2);
    printf ("População: %d habitantes.\n", pop2);
    printf ("Área: %.2f km².\n", area2);
    printf ("PIB: %.2f bilhões de reais.\n", pib2);
    printf ("Pontos turísticos: %d.\n", turismo2);
    printf ("Densidade populacional: %.2f hab/km².\n", popdens2);
    printf ("PIB Per Capita: %.2f mil reais.\n", pibpc2);

    //Comparações com if else entre as cartas;

    printf ("\n--- Comparações entre as cartas ---\n");

    /*
    Cada if - else separa os atributos das cartas
    Compara e apresenta os valores informados 
    Devolve uma resposta diferente se x != y;
    */

    //População;

    if (pop1 > pop2)
    {
        printf ("\n- - - População - - -\n");
        printf ("\nPopulação Carta 1: %d habitantes.\n", pop1);
        printf ("População Carta 2: %d habitantes.\n", pop2);
        printf ("\nResultado = Carta 1 venceu!\n");
        printf ("- - - - -\n");
    }
    else
    {
        printf ("\n- - - População - - -\n");
        printf ("\nPopulação Carta 1: %d habitantes.\n", pop1);
        printf ("População Carta 2: %d habitantes.\n", pop2);
        printf ("\nResultado = Carta 2 venceu!\n");
        printf ("- - - - -\n");
    }

    //Área;

    if (area1 > area2)
    {
        printf ("\n- - - Área - - -\n");
        printf ("\nÁrea Carta 1: %.2f km².\n", area1);
        printf ("Área Carta 2: %.2f km².\n", area2);
        printf ("\nResultado = Carta 1 venceu!\n");
        printf ("- - - - -\n");
    }
    else
    {
        printf ("\n- - - Área - - -\n");
        printf ("\nÁrea Carta 1: %.2f km².\n", area1);
        printf ("Área Carta 2: %.2f km².\n", area2);
        printf ("\nResultado = Carta 2 venceu!\n");
        printf ("- - - - -\n");
    }

    //PIB;

    if (pib1 > pib2)
    {
        printf ("\n- - - PIB - - -\n");
        printf ("\nPIB Carta 1: %.2f bilhões de reais.\n", pib1);
        printf ("PIB Carta 2: %.2f bilhões de reais.\n", pib2);
        printf ("\nResultado = Carta 1 venceu!\n");
        printf ("- - - - -\n");
    }
    else
    {
        printf ("\n- - - PIB - - -\n");
        printf ("\nPIB Carta 1: %.2f bilhões de reais.\n", pib1);
        printf ("PIB Carta 2: %.2f bilhões de reais.\n", pib2);
        printf ("\nResultado = Carta 2 venceu!\n");
        printf ("- - - - -\n");
    }

    //Turismo;

    if (turismo1 > turismo2)
    {
        printf ("\n- - - Turismo - - -\n");
        printf ("\nPontos Turisticos Carta 1: %d atrações.\n", turismo1);
        printf ("Pontos Turisticos Carta 2: %d atrações.\n", turismo2);
        printf ("\nResultado = Carta 1 venceu!\n");
        printf ("- - - - -\n");
    }
    else
    {
        printf ("\n- - - Turismo - - -\n");
        printf ("\nPontos Turisticos Carta 1: %d atrações.\n", turismo1);
        printf ("Pontos Turisticos Carta 2: %d atrações.\n", turismo2);
        printf ("\nResultado = Carta 2 venceu!\n");
        printf ("- - - - -\n");
    }

    //Densidade Populacional;

    if (popdens1 < popdens2)
    {
        printf ("\n- - - Densidade Populacional - - -\n");
        printf ("\nDensidade Populacional Carta 1: %.2f hab/km².\n", popdens1);
        printf ("Densidade Populacional Carta 2: %.2f hab/km².\n", popdens2);
        printf ("\nResultado: Carta 1 venceu!\n");
        printf ("- - - - -\n");
    }
    else
    {
        printf ("\n- - - Densidade Populacional - - -\n");
        printf ("\nDensidade Populacional Carta 1: %.2f hab/km².\n", popdens1);
        printf ("Densidade Populacional Carta 2: %.2f hab/km².\n", popdens2);
        printf ("\nResultado: Carta 2 venceu!\n");
        printf ("- - - - -\n");
    }

    //PIB Per Capita;

    if (pibpc1 > pibpc2)
    {
        printf ("\n- - - PIB Per Capita - - -\n");
        printf ("\nPIB Per Capita Carta 1: %.2f mil reais.\n", pibpc1);
        printf ("PIB Per Capita Carta 2: %.2f mil reais.\n", pibpc2);
        printf ("\nResultado: Carta 1 Venceu!\n");
        printf ("- - - - -\n");
    }
    else
    {
        printf ("\n- - - PIB Per Capita - - -\n");
        printf ("\nPIB Per Capita Carta 1: %.2f mil reais.\n", pibpc1);
        printf ("PIB Per Capita Carta 2: %.2f mil reais.\n", pibpc2);
        printf ("\nResultado: Carta 2 Venceu!\n");
        printf ("- - - - -\n");
    }
    return 0;
}