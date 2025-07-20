#include <stdio.h>

int main ()

{
    int opt, depopt1, depopt2;
    float saldoatual = 1200, depin, depout;

    while (1)
    {

        printf ("\nEscolha uma opção: \n");
        printf ("1. Verificar saldo.\n");
        printf ("2. Fazer depósito.\n");
        printf ("3. Fazer saque.\n");
        printf ("0. Encerrar programa.\n");
        printf ("Opção: ");
        scanf  ("%d", &opt);

        switch (opt)
        {
    //
            case 1:
                printf ("\nSeu saldo atual é de %.2f$.\n", saldoatual);
            break;
    
    //
            case 2:
                printf ("\nDigite o valor do depósito: ");
                scanf  ("%f", &depin);

                printf ("\nConfirmar o valor do depósito?\n");
                printf ("1. Sim\n2. Não\n");
                printf ("Opção: ");
                scanf  ("%d", &depopt1);
                    switch (depopt1)
                    {
                        case 1:
                            saldoatual += depin;
                            printf ("\nDepósito de %.2fR$ confirmado com sucesso.\n", depin);
                            printf ("Seu novo saldo é: %.2f R$.\n", saldoatual);
                        break;

                        //    
                        case 2:
                            printf("\nOperação cancelada.\n");
                    
                        //
                        break;

                        default:
                            printf("\nOpção inválida.\n");
                        break;
                        }
            break;
            
    //
            case 3:
                printf ("\nDigite o valor do saque: ");
                scanf  ("%f", &depout);
                
                if (depout > saldoatual)
                {
                    printf ("\nSaldo insuficiente!\n");
                }
                else
                {
                    printf ("\nConfirmar o valor do saque?\n");
                    printf ("1. Sim\n2. Não\n");
                    printf ("Opção: ");
                    scanf  ("%d", &depopt2);
                        switch (depopt2)
                        {
                        case 1:
                            saldoatual -= depout;
                            printf ("\nSaque de R$ %.2f realizado com sucesso.\n", depout);
                            printf ("Saldo atual: %.2f R$.\n", saldoatual);
                        break;

                        case 2:
                            printf ("\nOperação cancelada\n");

                        break;
                        
                        default:
                            printf ("\nOpção inválida.\n");
                        break;
                        }
                }
            break;

    //
        case 0:
            printf ("\nEncerrando programa.\n");
        return 0;

    //
        default:
            printf ("\nOpção inválida. Tente novamente.\n");
        }
}
return 0;
}