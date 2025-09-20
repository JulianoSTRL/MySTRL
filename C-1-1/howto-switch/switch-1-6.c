#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()

{
    int player, cpu;
    srand (time(0));

    printf ("** JAN KEN PON! (じゃんけんぽん！) **\n");
    printf ("\n** Escolha uma opção **\n");
    printf ("1. Pedra\n");
    printf ("2. Papel\n");
    printf ("3. Tesoura\n");
    printf ("\nEscolha uma opção: ");
    scanf  ("%d", &player);

    cpu = rand() % 3 + 1;

    switch (player)
    {
    case 1:
    printf ("\nJogador: Pedra\n");
    break;
    //
    case 2:
    printf ("\nJogador: Papel\n");
    break;
    //
    case 3:
    printf ("\nJogador: Tesoura\n");
    break;
    //
    default:
    printf ("\nOpção Inválida.\n");
    }
    //
    switch (cpu)
    {
    case 1:
    printf ("Máquina: Pedra\n");
    break;
    //
    case 2:
    printf ("Máquina: Papel\n");
    break;
    //
    case 3:
    printf ("Máquina: Tesoura\n");
    break;
    //
    }
    if (player == cpu)
    {
        printf ("\nEmpate!\n");
    }
    else if ((player == 1) && (cpu == 2)||
             (player == 2) && (cpu == 1)||
             (player == 3) && (cpu == 2))
    {
        printf ("Jogador Vence.\n");
    }
    else
    {
        printf ("Máquina Vence.\n");
    }

return 1;
}