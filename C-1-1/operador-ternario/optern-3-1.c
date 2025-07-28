#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int cpu, pl, result;
    char comp;

    //Gerar número aleatório

    srand(time(0));
    cpu = rand() % 100+ 1; //Gera um número entre 1 e 100;

    //Início do jogo;

    printf ("--- Bem Vindo ao Jogo NumBlitz.io ---\n");
    printf ("\nEscolha o tipo de comparação e digite um número.\n");
    printf ("M. Maior\n");
    printf ("N. Menor\n");
    printf ("I. Igual\n");
    scanf  ("%c", &comp);

    printf ("\nDigite um número que possa ser maior: ");
    scanf  ("%d", &pl);
    printf ("\nO número do computador é: %d\n", cpu);


    switch (comp)
    {
        case 'M':
        case 'm':
        printf ("Você escolheu a opção 'Maior'\n");
        result = pl > cpu ? 3 : 0;
        printf (result ? "Você Acertou!\n" : "Voce Errou!\n");

        break;
        
        case 'N':
        case 'n':
        printf ("Você escolheu a opção 'Menor'\n");
        result = pl < cpu ? 1 : 0;
        break;

        case 'I':
        case 'i':
        printf ("Você escolheu a opção 'Igual'\n");
        result = pl = cpu ? 1 : 0;
        break;

        default:
        printf ("Opção Inválida.\n");
        break;
    }

return 0;
}