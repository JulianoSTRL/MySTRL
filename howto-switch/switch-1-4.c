#include <stdio.h>

int main()
{
    int dia;

    printf ("Digite um dia entre 1 e 7.\n");
    printf ("Opção: ");
    scanf  ("%d", &dia);
//    
        switch (dia)
        {
        case 1:

        printf ("\nDomingo.\n");
        break;
        
        case 2: 
        
        printf ("\nSegunda Feira.\n");
        break;
        
        case 3:
        
        printf ("\nTerça Feira.\n");
        break;
        
        case 4:
        
        printf ("\nQuarta Feira.\n");
        break;
        
        case 5:

        printf ("\nQuinta Feira.\n");
        break; 
        
        case 6:

        printf ("\nSexta Feira.\n");
        break;
        
        case 7:
        printf ("\nSábado.\n");
        break;

        default:
        printf ("\nNão é um dado válido.\n");
        }
//
return 0;
}