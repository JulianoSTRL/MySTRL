#include <stdio.h>

int main ()

{
    int a = 5;
    int b = -10;
    int c = 1;

    // a > 0 = True
    // b < 0 = True
    // True && True = True
    // True || c == 0 False

    if (a > 0 && b < 0 || c == 0) 
    {
        printf ("\nA condição é verdadeira.\n");
    }

    return 0;
}