#include <stdio.h>

int main ()
{
    //Variáveis com dados fixos;
    char pais1[50] = "China";
    char pais2[50] = "Japão";
    
    long long pop1 = 1410000000;
    long long pop2 = 123000000;

    double area1 = 9596960, area2 = 377975, pib1 = 17.5 , pib2 = 4.4 ;

    int tour1 = 6, tour2 = 6;
    
    double dens1 = pop1 / area1, dens2 = pop2 / area2;

    /*Atributos de cada País;

    //1.País;
    printf  ("\n--- País ---\n");
    printf ("\nPaís 1: %s", pais1);
    printf ("\nPaís 2: %s\n", pais2);

    //2.População;
    printf ("\n--- População ---\n");
    printf ("\nPopulação China: %.2f bilhões", pop1 / 1e9);
    printf ("\nPopulação Japão: %.2f milhões\n", pop2 / 1e6);

    //3.Área;
    printf ("\n--- Área ---\n");
    printf ("\nTerritório China: %.0fkm²", area1);
    printf ("\nTerritório Japão: %.0fkm²\n", area2);

    //4.PIB;
    printf ("\n--- PIB ---\n");
    printf ("\nPIB China: US$ %.2f trilhões", pib1);
    printf ("\nPIB Japão: US$ %.2f trilhões\n", pib2);

    //5.Pontos Turísticos;
    printf ("\n--- Pontos Turísticos ---\n");
    printf ("\nPontos Turísticos China: %d", tour1);
    printf ("\nPontos Turísticos Japão: %d\n", tour2);
    
    //6.Densidade Demográfica;
    printf ("\n--- Densidade Demográfica ---\n");
    printf ("\nDensidade Demográfica China: %.2f hab/km²", dens1);
    printf ("\nDensidade Demográfica Japão: %.2f hab/km²\n", dens2);
    */

    //Escolha do atributo para comparações

    int atb;

    printf ("\n---Bem Vindo ao Super Trunfo: Escolhas---\n");
    printf ("\nOs países batalhando serão: China x Japão\n");
    printf ("\nEscolha um atributo de comparação entre os países:\n");
    printf ("1. População\n");
    printf ("2. Área\n");
    printf ("3. PIB\n");
    printf ("4. Pontos Turísticos\n");
    printf ("5. Densidade Demográfica\n");
    printf ("Opção: ");
    scanf  ("%d", &atb);

    // Exibição do atributo escolhido
    switch (atb)
    {
    case 1:
        printf ("\n--- População ---\n");
        printf ("População China: %.2f bilhões\n", pop1 / 1e9);
        printf ("População Japão: %.2f milhões\n", pop2 / 1e6);
        break;

    case 2:
        printf ("\n--- Área ---\n");
        printf ("Território China: %.0f km²\n", area1);
        printf ("Território Japão: %.0f km²\n", area2);
        break;

    case 3:
        printf ("\n--- PIB ---\n");
        printf ("PIB China: US$ %.2f trilhões\n", pib1);
        printf ("PIB Japão: US$ %.2f trilhões\n", pib2);
        break;

    case 4:
        printf ("\n--- Pontos Turísticos ---\n");
        printf ("Pontos Turísticos China: %d\n", tour1);
        printf ("Pontos Turísticos Japão: %d\n", tour2);
        break;

    case 5:
        printf ("\n--- Densidade Demográfica ---\n");
        printf ("Densidade China: %.2f hab/km²\n", dens1);
        printf ("Densidade Japão: %.2f hab/km²\n", dens2);
        break;

    default:
        printf ("\nAtributo inválido!\n");
        return 1;
    }

    //Resultados;
     printf("\n--- Resultado da Comparação ---\n");

    switch (atb)
    {
    case 1:
        if (pop1 > pop2)
            printf ("China vence em população!\n");
        else
            printf ("Japão vence em população!\n");
        break;

    case 2:
        if (area1 > area2)
            printf ("China vence em território!\n");
        else
            printf ("Japão vence em território!\n");
        break;

    case 3:
        if (pib1 > pib2)
            printf ("China vence em PIB!\n");
        else
            printf ("Japão vence em PIB!\n");
        break;

    case 4:
        if (tour1 > tour2)
            printf ("China vence em pontos turísticos!\n");
        else if (tour2 > tour1)
            printf ("Japão vence em pontos turísticos!\n");
        else
            printf ("Empate em pontos turísticos!\n");
        break;

    case 5:
        if (dens1 > dens2)
            printf ("China tem maior densidade demográfica!\n");
        else
            printf ("Japão tem maior densidade demográfica!\n");
        break;
    }

    return 0;
}