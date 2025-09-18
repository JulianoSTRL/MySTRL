#include <stdio.h>

int main()
{
    int dia;

    printf ("Digite o dia desejado: ");
    scanf  ("%d", &dia);
//    
        if (dia == 1)
        {
        printf ("Domingo.\n");
        }
        else if (dia == 2)
        {
        printf ("Segunda Feira.\n");
        }
        else if (dia == 3)
        {
        printf ("Terça Feira.\n");
        }
        else if (dia == 4)
        {
        printf ("Quarta Feira.\n");
        }
        else if (dia == 5)
        {
        printf ("Quinta Feira.\n");
        }
        else if (dia == 6)
        {
        printf ("Sexta Feira.\n");
        }
        else if (dia == 7)
        {
        printf ("Sábado.\n");
        }
//                
        else
        {
        printf ("\nNão é um dado válido.\n");
        }
//
return 0;
}