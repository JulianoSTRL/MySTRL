#include <stdio.h>

int main ()

{
    int opt, depin, depout, depopt;

    while (1)
    {

    printf ("Escolha uma opção: \n");
    printf ("1. Verificar saldo.\n");
    printf ("2. Fazer depósito.\n");
    printf ("3. Fazer saque.\n");
    scanf ("%d", &opt);

    switch (opt)
    {
    //
    case 1:
    printf ("Seu saldo é de 1.200R$.\n");
    break;
    
    //
    case 2:
    printf ("Digite o valor do depósito: ");
    scanf  ("%d", &depin);

    printf ("Confirmar o valor do depósito?\n");
    printf ("1. Sim\n2. Não\n");
    switch (depopt)
            {
            case 1:
                printf("Depósito de R$ %d confirmado.\n", depin);
            case 2:
                printf("Depósito cancelado.\n");
                break;
            default:
                printf("Opção inválida.\n");
            }
            break;

    //
    case 3:
        printf("Digite o valor desejado para saque: ");
        scanf("%d", &depout);
        printf("Saque de R$ %d realizado.\n", depout);
        break;
    case 0:
    printf ("Encerrando programa.\n");
    return 0;

    default:
        printf("Opção inválida. Tente novamente.\n");
    }
}

return 0;
}