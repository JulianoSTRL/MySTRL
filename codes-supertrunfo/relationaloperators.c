#include <stdio.h>

int main ()
{
    /*
    Operadores relacionais em C:
    a > b: Verifica se 'a' é maior que 'b'.
    a < b: Verifica se 'a' é menor que 'b'.
    a = b: Verifica se 'a' é maior ou igual a 'b'.
    a <= b: Verifica se 'a' é menor ou igual a 'b'.
    a == b: Verifica se 'a' é igual a 'b'.
    a != b: Verifica se 'a' é diferente de 'b'.
    */

    int a = 10, b = 20;

    printf ("a > b: %d.\n", a > b);
    printf ("a < b: %d.\n", a < b);
    printf ("a == b: %d.\n", a == b);
    printf ("a != b: %d.\n", a != b);

    //

    int x = 5;
    float y = 5.0;
    char c = 'a';

    printf ("\nx >= y: %d.\n", x >= y);
    printf ("x == y: %d.\n", x == y);
    printf ("x != y: %d.\n", x != y);

    printf ("x <= c: %d.\n", x <= c);
    printf ("y <= c: %d.\n", y <= c);
    printf ("O valor ASCII de %c é: %d.\n", c, c);

    //Conversão explicita de tipos

    float num1 = 10.2;
    int num2 = 10;

    printf ("num1 > num2: %d.\n", (int) num1 > num2);
    printf ("num1 == num2: %d.\n", (int) num1 == num2);

    return 0;
}