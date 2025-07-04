#include <stdio.h>
#include <string.h>

int main()
{

    //Variáveis que serão inseridas pelos usuários;

    int carta1, carta2, turismo1, turismo2, populacao1, populacao2;
    float area1, area2, pib1, pib2, pibpc1, pibpc2, popdens1, popdens2;
    char codigo1, codigo2;
    char estado1 [50];
    char estado2 [50];
    char cidade1 [50];
    char cidade2 [50];

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
    scanf  ("%d", &populacao1);

    printf ("Agora a área em KM dessa cidade: ");
    scanf  ("%f", &area1);

    printf ("Me informe o PIB dessa cidade: ");
    scanf  ("%f", &pib1);

    printf ("Por último, quantos pontos turísticos existem nessa cidade: ");
    scanf  ("%d", &turismo1);
    

    //Dados da segunda carta

    printf ("\nLetra entre A e H e número entre 1 e 4, sem repetir os dados já usados:\n");
    scanf  (" %c%d", &codigo2, &carta2);

    getchar ();

    printf ("O Estado que esta carta irá representar: ");
    scanf  ("%[^\n]", estado2);

    getchar ();

    printf ("O nome da Cidade representada: ");
    scanf  ("%[^\n]", cidade2);

    printf ("Número de habitantes dessa cidade: ");
    scanf  ("%d", &populacao2);

    printf ("Agora a área em KM dessa cidade: ");
    scanf  ("%f", &area2);

    printf ("Me informe o PIB dessa cidade: ");
    scanf  ("%f", &pib2);

    printf ("Por último, quantos pontos turísticos existem nessa cidade: ");
    scanf  ("%d", &turismo2);

    popdens1 = populacao1 / area1;
    pibpc1 = pib1 / populacao1;
    popdens2 = populacao2 / area2;
    pibpc2 = pib2 / populacao2;

    //"Resultado dos dados da carta";

    printf ("\n--- Sua primeira carta ficou assim ---\n");
    printf ("Carta 1:\n");
    printf ("Código: %c%d.\n",codigo1, carta1);
    printf ("Estado: %s.\n", estado1);
    printf ("Cidade: %s.\n", cidade1);
    printf ("População: %d mil habitantes.\n", populacao1);
    printf ("Área: %.3f km².\n", area1);
    printf ("PIB: %.2f bilhões de reais.\n", pib1);
    printf ("Pontos turísticos: %d atrações.\n", turismo1);
    printf ("Densidade populacional: %.2f hab/km².\n", popdens1);
    printf ("PIB Per Capita: %.2f reais.\n", pibpc1);

    //"Resultado Segunda Carta"

    printf ("\n--- Sua segunda carta ficou assim ---\n");
    printf ("Carta 2:\n");
    printf ("Código: %c%d.\n",codigo2, carta2);
    printf ("Estado: %s.\n", estado2);
    printf ("Cidade: %s.\n", cidade2);
    printf ("População: %d mil habitantes.\n", populacao2);
    printf ("Área: %.3f km².\n", area2);
    printf ("PIB: %.2f bilhões de reais.\n", pib2);
    printf ("Pontos turísticos: %d atrações.\n", turismo2);
    printf ("Densidade populacional: %.2f hab/km².\n", popdens2);
    printf ("PIB Per Capita: %.2f reais.\n", pibpc2);

    return 0;
}