#include <stdio.h>
#include <string.h>

int main(){

    //Variáveis que serão inseridas pelos usuários;

    int carta1, carta2, turismo1, turismo2, populacao1, populacao2;
    char estado1 [50];
    char estado2 [50];
    char cidade1 [50];
    char cidade2 [50];
    char codigo1;
    char codigo2;
    float area1;
    float area2;
    float pib1;
    float pib2;

    printf ("Bem Vindo ao Super Trunfo Países \n");
    printf ("\nPrimeiramente faremos as configurações das suas cartas e para isso preciso da sua ajuda\n");

    //Interação usuário - máquina para configuração das cartas

    printf ("\nPor Favor, digite uma letra entre A e H, e um número entre 1 e 4: ");
    scanf (" %c%d", &codigo1, &carta1);

    getchar ();

    printf ("O Estado que esta carta irá representar: ");
    scanf ("%[^\n]", estado1);

    getchar ();

    printf ("O nome da Cidade representada: ");
    scanf ("%[^\n]", cidade1);

    printf ("Número de habitantes dessa cidade: ");
    scanf ("%d", &populacao1);

    printf ("Agora a área em KM dessa cidade: ");
    scanf ("%f", &area1);

    printf ("Por favor, me informe o PIB dessa cidade: ");
    scanf ("%f", &pib1);

    printf ("Por último, quantos pontos turísticos existem nessa cidade: ");
    scanf ("%d", &turismo1);

    //"Resultado dos dados da carta";

    printf ("\n--- Perfeito, sua primeira carta ficou assim ---\n");
    printf ("Carta 1:\n");
    printf ("Estado: %s.\n", estado1);
    printf ("Código: %c%d.\n",codigo1, carta1);
    printf ("Cidade: %s.\n", cidade1);
    printf ("População: %d mil habitantes.\n", populacao1);
    printf ("Área: %.3f km².\n", area1);
    printf ("PIB: %.1fR$ bilhões de reais.\n", pib1);
    printf ("Pontos turísticos: %d atrações.\n", turismo1); 
    return 0;
}