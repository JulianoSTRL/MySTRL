#include <stdio.h>

int main ()
{
    /*
    Valores na variável "int" que ultrapassem 2147483647 resultam em erro;
    A variável "unsigned" (com especificador de formato %u), não permite números negativos (com sinal);
    Só permite números inteiros positivos e zero.
    Isso dobra o intervalo positivo possível da variável, já que ela não gasta espaço com números negativos;
    Exemplo:
    */

    int sign = 3000000000;
    unsigned int nosign = 3000000000;
    
    printf ("Número com sinal: %d.\n", sign);
    printf ("Número sem sinal: %u.\n", nosign);

    //

    /*
    Valores na variável "int" que ultrapassem 2147483647 resultam em erro;
    A variável "long" (com especificadores %ld ou %lu), serve para armazenar valores inteiros maiores;
    Geralmente usado quando um (int) comum pode não ser suficiente;
    Exemplo:
    */

    int notlong = 2147483647; //Valor máximo de int "int";
    long int islong = 2147483647;
    
    printf ("Número regular (int): %d.\n", notlong);
    printf ("Número longo   (long int): %ld.\n", islong);

    int notlong1 = 2147483648; //Valor que ultrapassa o limite de "int";

    printf ("Número superior ao máximo de (int): %d.\n", notlong1);

    //

    int notlong2  = 2147483647; //Valor máximo de int "int";
    long long int islong2 = 2147483647;

    printf ("Número regular (int): %d.\n", notlong2);
    printf ("Número longo²  (long long int): %lld.\n", islong2);

    //

    double pnumber1 = 314159265358979;
    long double vpnumber1 = 3141592653589793238463;

    printf ("Número preciso (double): %.15f\n", pnumber1);
    printf ("Número muito preciso (long double): %.21Lf.\n",vpnumber1);


    return 0;
}