#include <stdio.h>

int main()
{
    //Cálculo de médias utilizando o método ensinado pelo professor;

    int opt;
    float nota1, nota2, media;

    printf ("--- Menu de Gerenciamento de Estudantes ---\n");
    printf ("1. Calcular Média\n");
    printf ("2. Determinar Status\n");
    printf ("3. Sair\n");
    printf ("Opção: ");
    scanf  ("%d", &opt);

    switch (opt){
        case 1:

        printf ("\n--- Calcular a média ---\n");
        printf ("\nDigite a primeira nota: ");
        scanf  ("%f", &nota1);
        printf ("Digite a segunda nota: ");
        scanf  ("%f", &nota2);

        if ((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10)){
            media = (nota1 + nota2) / 2;

            printf ("\nA média é: %.1f\n", media);
        }
        else{
            printf ("\nValores Inválidos\n");
        }
        break;

        case 2: 

        printf ("\n--- Determinar Status ---\n");
        printf ("\nDigite sua média: ");
        scanf  ("%f", &media);
        if (media >= 7){
        printf ("\nAprovado!\n");}
        else if (media >= 5){
        printf ("\nRecuperação!\n");}
        else{
        printf ("\nReprovado!\n");}
        //media >= 5 ? printf ("\nAprovado!\n") : printf ("\nReprovado!\n");
        break;

        case 3:

        printf ("Fechando...\n");
        break;

        default:

        printf ("Opção Inválida\n");
        break;
    }

    return 0;
}