#include <stdio.h>

int main ()

{

    /*
    Lógica AND (&&) aplicada;
    As variáveis precisam ser iguais para um retorno verdadeiro;
    */

    int a = -5, b = -10;
    
    if (a > 0 && b > 0)
    {
        printf ("\na = %d, b = %d\n", a, b);
        printf ("Os dois são positivos.\n");
    }
    else
    {
        printf ("\na = %d, b = %d\n", a, b);
        printf ("Pelo menos um dos números é negativo.\n");
    }
    
    /*
    Lógica OR (||) aplicada;
    As variáveis precisam ser negativas ou positivas para um retorno verdadeiro;
    */

    int c = -5, d = -10;
    
    if (c > 0 || d > 0)
    {
        printf ("\nc = %d, d = %d\n", c, d);
        printf ("Pelo menos um dos números é positivo.\n");
    }
    else
    {
        printf ("\nc = %d, d = %d\n", c, d);
        printf ("Os dois números são negativos.\n");
    }

    /*
    Lógica NOT (!) aplicada;
    Os valores das variáveis se invertem!
    */

    int e = -10;
  
    if (!e) 
    {
        printf ("\nA variável 'e' é negativa.\n");
    }
    else
    {
        printf ("\nA variável 'e' é positiva.\n");
    }

    //Teste invertendo os valores

        int f = 10;
    
    if (!f > 0)
    {
        printf ("\nA variável 'f' é negativa.\n");
    }
    else
    {
        printf ("\nA variável 'f' é positiva.\n");
    }

    return 0;
}