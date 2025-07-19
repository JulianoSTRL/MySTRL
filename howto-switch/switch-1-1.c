#include <stdio.h>

int main ()

{
    int var;

    printf ("Digite um valor: ");
    scanf  ("%d", &var);

    switch (var)
    {

    // - - - - -
    case 1:
        printf ("Código executado se valor == 1.\n");
    break;
    
    // - - - - -
    case 2:
        printf ("Código executado se valor == 2.\n");
    break;

    // - - - - -
    default:
        printf ("Código não executado, variável inválida.\n");
    }

return 0;
}