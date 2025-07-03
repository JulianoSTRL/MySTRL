#include <stdio.h>
#include <string.h>

int main(){

    //Variáveis que serão inseridas pelos usuários;

    int carta1, carta2, turismo1, turismo2;
    float area1, area2, pib1, pib2, populacao1, populacao2;
    char estado1 [50];
    char estado2 [50];
    char cidade1 [50];
    char cidade2 [50];
    char codigo1, codigo2;
    

    printf ("Bem Vindo ao Super Trunfo Países \n");
    printf ("\nPrimeiramente faremos as configurações da sua primeira carta!\n");

    //Interação usuário - máquina para configuração das cartas

    printf ("\nPor Favor, digite uma letra entre A e H, e um número entre 1 e 4: \n");
    scanf (" %c%d", &codigo1, &carta1);

    getchar ();

    printf ("O Estado que esta carta irá representar: ");
    scanf ("%[^\n]", estado1);

    getchar ();

    printf ("O nome da Cidade: ");
    scanf ("%[^\n]", cidade1);

    printf ("Número de habitantes: ");
    scanf ("%f", &populacao1);

    printf ("Agora a área em KM: ");
    scanf ("%f", &area1);

    printf ("Por favor, me informe o PIB dessa cidade: ");
    scanf ("%f", &pib1);

    printf ("Por último, quantos pontos turísticos existem nessa cidade: ");
    scanf ("%d", &turismo1);

    //"Resultado dos dados da 1ª carta";

    printf ("\n--- Perfeito, sua primeira carta ficou assim ---\n");
    printf ("Carta 1:\n");
    printf ("Código: %c%d.\n",codigo1, carta1);
    printf ("Estado: %s.\n", estado1);
    printf ("Cidade: %s.\n", cidade1);
    printf ("População: %.3f mil habitantes.\n", populacao1);
    printf ("Área: %.3f km².\n", area1);
    printf ("PIB: %.1fR$ bilhões de reais.\n", pib1);
    printf ("Pontos turísticos: %d atrações.\n", turismo1);

    //Dados da segunda carta

    printf ("\nAgora me informe os dados da segunda carta!\n");

    printf ("\nNovamente, uma letra entre A e H e um número entre 1 e 4");
    printf ("\nSem ser os dados utilizados na primeira carta: \n");
    scanf (" %c%d", &codigo2, &carta2);

    getchar ();

    printf ("O Estado que esta carta irá representar: ");
    scanf ("%[^\n]", estado2);

    getchar ();

    printf ("O nome da Cidade: ");
    scanf ("%[^\n]", cidade2);

    printf ("Número de habitantes: ");
    scanf ("%f", &populacao2);

    printf ("Agora a área em KM: ");
    scanf ("%f", &area2);

    printf ("Por favor, me informe o PIB dessa cidade: ");
    scanf ("%f", &pib2);

    printf ("Por último, quantos pontos turísticos existem nessa cidade: ");
    scanf ("%d", &turismo2);

    //"Resultado dos dados da 2ª carta";

    printf ("\n--- Maravilha, sua segunda carta ficou assim ---\n");
    printf ("Carta 2:\n");
    printf ("Código: %c%d.\n",codigo2, carta2);
    printf ("Estado: %s.\n", estado2);
    printf ("Cidade: %s.\n", cidade2);
    printf ("População: %.3f mil habitantes.\n", populacao2);
    printf ("Área: %.3f km².\n", area2);
    printf ("PIB: %.1fR$ bilhões de reais.\n", pib2);
    printf ("Pontos turísticos: %d atrações.\n", turismo2);

    return 0;
}