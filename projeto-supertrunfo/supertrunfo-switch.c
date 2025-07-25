#include <stdio.h>
#include <string.h>

int main ()
{
    char replay;
    //Variáveis para entrada de Dados;
    char pais1[50];
    char pais2[50];
    double area1, area2, pib1, pib2;
    long long int pop1, pop2;
    int tour1, tour2;
    
    double dens1, dens2;

    printf ("\n---Bem Vindo ao Super Trunfo: Escolhas---\n");
    printf ("\nAqui faremos as configurações das cartas do jogo\n");

    //Dados inseridos pelo usuário para a Carta #1;

    printf ("\n--- Insira os dados da Carta #1 ---\n");

    printf ("\nPaís: ");
    scanf  ("%49[^\n]", pais1);
    getchar ();

    printf ("População (em números absolutos): ");
    scanf  ("%lld", &pop1);

    printf ("Área (em km²): ");
    scanf  ("%lf", &area1);

    printf ("PIB (em trilhões USD): ");
    scanf  ("%lf", &pib1);

    printf ("Quantidade de Pontos Turísticos: ");
    scanf  ("%d", &tour1);

    //
    printf ("\nPerfeito, agora insira os dados segunda carta\n");

    //Dados inseridos pelo usuário para a Carta #2;
    
    printf ("\n--- Insira os dados da Carta #2 ---\n");

    printf ("\nPaís: ");
    scanf  (" %49[^\n]", pais2);
    getchar ();

    printf ("População (em números absolutos): ");
    scanf  ("%lld", &pop2);

    printf ("Área (em km²): ");
    scanf  ("%lf", &area2);

    printf ("PIB (em trilhões USD): ");
    scanf  ("%lf", &pib2);
    
    printf ("Número de Pontos Turísticos: ");
    scanf  ("%d", &tour2);

    //Cálculo da Densidade demográfica;
    
    dens1 = pop1 / area1;
    dens2 = pop2 / area2;

    //Escolha do atributo para comparações
    
    while (1)
    {

    int atb;
    printf ("\n--- Escolha o atributo para comparar as cartas ---\n");
    printf ("\n1. População\n");
    printf ("2. Área\n");
    printf ("3. PIB\n");
    printf ("4. Pontos Turísticos\n");
    printf ("5. Densidade Demográfica\n");
    printf ("0. Sair da comparação\n");
    printf ("\nOpção: ");
    scanf  ("%d", &atb);
    getchar ();
    
    if (atb == 0)
    break;
    // Exibição do atributo escolhido
    switch (atb)
    {
    case 1:
        printf ("\n--- População ---\n");
        printf ("População %s: %lld\n", pais1, pop1);
        printf ("População %s: %lld\n", pais2, pop2);
        break;

    case 2:
        printf ("\n--- Área ---\n");
        printf ("Território %s: %.0f km²\n", pais1, area1);
        printf ("Território %s: %.0f km²\n", pais2, area2);
        break;

    case 3:
        printf ("\n--- PIB ---\n");
        printf ("PIB %s: US$ %.1f trilhões\n", pais1, pib1 / 1e12);
        printf ("PIB %s: US$ %.1f trilhões\n", pais2, pib2 / 1e12);
        break;

    case 4:
        printf ("\n--- Pontos Turísticos ---\n");
        printf ("Pontos Turísticos %s: %d\n", pais1, tour1);
        printf ("Pontos Turísticos %s: %d\n", pais2, tour2);
        break;

    case 5:
        printf ("\n--- Densidade Demográfica ---\n");
        printf ("Densidade %s: %.2f hab/km²\n", pais1, dens1);
        printf ("Densidade %s: %.2f hab/km²\n", pais2, dens2);
        break;

    default:
        printf ("\nAtributo inválido!\n");
        continue;
    }

    //Resultados;

     printf("\n--- Resultado da Comparação ---\n");

    switch (atb)
    {
    case 1:
        if (pop1 > pop2)
            printf ("%s vence em População!\n", pais1);
        else if (pop2 > pop1)
            printf ("%s vence em População!\n", pais2);
        else
            printf ("Empate!\n");
        break;

    case 2:
        if (area1 > area2)
            printf ("%s vence em Território!\n", pais1);
        else if (area2 > area1)
            printf ("%s vence em Território!\n", pais2);
        else
            printf ("Empate!\n");
        break;

    case 3:
        if (pib1 > pib2)
            printf ("%s vence em PIB!\n", pais1);
        else if (pib2 > pib1)
            printf ("%s vence em PIB!\n", pais2);   
        else
            printf ("Empate!\n");
        break;

    case 4:
        if (tour1 > tour2)
            printf ("%s vence em pontos turísticos!\n", pais1);
        else if (tour2 > tour1)
            printf ("%s vence em pontos turísticos!\n", pais2);
        else
            printf ("Empate!\n");
        break;

    case 5:
        if (dens1 < dens2)
            printf ("%s tem menor densidade demográfica!\n", pais1);
        else if (dens2 < dens1)
            printf ("%s tem menor densidade demográfica!\n", pais2);
        else
            printf ("Empate!\n");
        break;
    }
}
 printf ("\n--- Obrigado por jogar! ---\n");
return 0;
}