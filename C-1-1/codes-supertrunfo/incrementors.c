#include <stdio.h>

int main(){

    /*
    Incremento (++)
    Pré Incremento ++a
    Pós Incremento a++
    Decremento (--)
    Pré Decremento --a
    Pós Decremento a--    
    */

    int num1 = 1, equal;

    printf ("Número: %d\n", num1);
    printf ("Antes Pré-Incremento - Número: %d. - Resultado: %d\n.", num1, equal);
    equal = ++num1;
    printf ("Após Pós-Incremento - Número: %d. - Resultado: %d\n.", num1, equal);
    equal = num1++;

    printf ("Antes Pré-Decremento - Número: %d. - Resultado: %d\n.", num1, equal);
    equal = --num1;
    printf ("Após Pós-Decremento - Número: %d. - Resultado: %d\n.", num1, equal);
    equal = num1--;
    return 0;
}