#include <stdio.h>
#include <string.h>

int main()
{

    //Variáveis que serão inseridas pelos usuários;

    int carta1, carta2, turismo1, turismo2, pop1, pop2; 
    float area1, area2, pib1, pib2, popdens1, popdens2;
    double pibpc1, pibpc2;
    char codigo1, codigo2;
    char estado1[50];
    char estado2[50];
    char cidade1[50];
    char cidade2[50];

    printf ("***Bem Vindo ao Super Trunfo Países***\n");
    printf ("\nPrimeiramente faremos as configurações das suas cartas e para isso preciso da sua ajuda!\n");

    //Interação usuário - máquina para configuração das cartas

    printf ("\nPor Favor, preencha os dados.\n");
    printf ("\nLetra entre A e H e número entre 1 e 4:\n");
    scanf  (" %c%d", &codigo1, &carta1);

    getchar ();

    printf ("O Estado que esta carta irá representar: ");
    scanf  ("%[^\n]", estado1);

    getchar ();

    printf ("O nome da Cidade representada: ");
    scanf  ("%[^\n]", cidade1);

    printf ("Número de habitantes dessa cidade: ");
    scanf  ("%d", &pop1);

    printf ("Agora a área em KM dessa cidade: ");
    scanf  ("%f", &area1);

    printf ("Me informe o PIB dessa cidade: ");
    scanf  ("%f", &pib1);

    printf ("Por último, quantos pontos turísticos existem nessa cidade: ");
    scanf  ("%d", &turismo1);
    

    //Entrada de dados da segunda carta;

    printf ("\nLetra entre A e H e número entre 1 e 4, sem repetir os dados já usados:\n");
    scanf  (" %c%d", &codigo2, &carta2);

    getchar ();

    printf ("O Estado que esta carta irá representar: ");
    scanf  ("%[^\n]", estado2);

    getchar ();

    printf ("O nome da Cidade representada: ");
    scanf  ("%[^\n]", cidade2);

    printf ("Número de habitantes dessa cidade: ");
    scanf  ("%d", &pop2);

    printf ("Agora a área em KM dessa cidade: ");
    scanf  ("%f", &area2);

    printf ("Me informe o PIB dessa cidade: ");
    scanf  ("%f", &pib2);

    printf ("Por último, quantos pontos turísticos existem nessa cidade: ");
    scanf  ("%d", &turismo2);

    popdens1 = pop1 / area1;
    popdens2 = pop2 / area2;
    pibpc1   = (pib1 * 1000000000.0) / pop1;
    pibpc2   = (pib2 * 1000000000.0) / pop2;

    //Resultado Primeira Carta;

    printf ("\n--- Sua primeira carta ficou assim ---\n");
    printf ("Carta 1:\n");
    printf ("Código: %c%d.\n",codigo1, carta1);
    printf ("Estado: %s.\n", estado1);
    printf ("Cidade: %s.\n", cidade1);
    printf ("População: %d habitantes.\n", pop1);
    printf ("Área: %.2f km².\n", area1);
    printf ("PIB: %.2f bilhões de reais.\n", pib1);
    printf ("Pontos turísticos: %d.\n", turismo1);
    printf ("Densidade populacional: %.2f hab/km².\n", popdens1);
    printf ("PIB Per Capita: %.2f mil reais.\n", pibpc1);

    //Resultado Segunda Carta;

    
    printf ("\n--- Sua segunda carta ficou assim ---\n");
    printf ("Carta 2:\n");
    printf ("Código: %c%d.\n",codigo2, carta2);
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

    int popbtl, areabtl, pibbtl, turismobtl, popdensbtl, pibpcbtl;
    /*
    Cada if - else separa os atributos das cartas
    Compara e apresenta os valores informados 
    Devolve uma resposta diferente se x > y, ou x < y;
    */

    //População;

    if (pop1 > pop2)
    {
        printf ("\nPopulação Carta 1: %d habitantes.\n", pop1);
        printf ("População Carta 2: %d habitantes.\n", pop2);
        printf ("Resultado = Carta 1 venceu!\n");
    }
    else
    {
        printf ("\nPopulação Carta 1: %d habitantes.\n", pop1);
        printf ("População Carta 2: %d habitantes.\n", pop2);
        printf ("Resultado = Carta 2 venceu!\n");
    }

    //Área;

    if (area1 > area2)
    {
        printf ("\nÁrea Carta 1: %.2f km².\n", area1);
        printf ("Área Carta 2: %.2f km².\n", area2);
        printf ("Resultado = Carta 1 venceu!\n");
    }
    else
    {
        printf ("\nÁrea Carta 1: %.2f km².\n", area1);
        printf ("Área Carta 2: %.2f km².\n", area2);
        printf ("Resultado = Carta 2 venceu!\n");
    }

    //PIB;

    if (pib1 > pib2)
    {
        printf ("\nPIB Carta 1: %.2f bilhões de reais.\n", pib1);
        printf ("PIB Carta 2: %.2f bilhões de reais.\n", pib2);
        printf ("Resultado = Carta 1 venceu!\n");
    }
    else
    {
        printf ("\nPIB Carta 1: %.2f bilhões de reais.\n", pib1);
        printf ("PIB Carta 2: %.2f bilhões de reais.\n", pib2);
        printf ("Resultado = Carta 2 venceu!\n");
    }

    //Turismo;

    if (turismo1 > turismo2)
    {
        printf ("\nPontos Turisticos Carta 1: %d atrações.\n", turismo1);
        printf ("Pontos Turisticos Carta 2: %d atrações.\n", turismo2);
        printf ("Resultado = Carta 1 venceu!\n");
    }
    else
    {
        printf ("\nPontos Turisticos Carta 1: %d atrações.\n", turismo1);
        printf ("Pontos Turisticos Carta 2: %d atrações.\n", turismo2);
        printf ("Resultado = Carta 2 venceu!\n");
    }

    //Densidade Populacional;

    if (popdens1 < popdens2)
    {
        printf ("\nDensidade Populacional Carta 1: %.2f hab/km².\n", popdens1);
        printf ("Densidade Populacional Carta 2: %.2f hab/km².\n", popdens2);
        printf ("Resultado: Carta 1 venceu!\n");
    }
    else
    {
        printf ("\nDensidade Populacional Carta 1: %.2f hab/km².\n", popdens1);
        printf ("Densidade Populacional Carta 2: %.2f hab/km².\n", popdens2);
        printf ("Resultado: Carta 2 venceu!\n");
    }

    //PIB Per Capita;

    if (pibpc1 > pibpc2)
    {
        printf ("\nPIB Per Capita Carta 1: %.2f mil reais.\n", pibpc1);
        printf ("PIB Per Capita Carta 2: %.2f mil reais.\n", pibpc2);
        printf ("Resultado: Carta 1 Venceu!\n");
    }
    else
    {
        printf ("\nPIB Per Capita Carta 1: %.2f mil reais.\n", pibpc1);
        printf ("PIB Per Capita Carta 2: %.2f mil reais.\n", pibpc2);
        printf ("Resultado: Carta 2 Venceu!\n");
    }
    return 0;
}