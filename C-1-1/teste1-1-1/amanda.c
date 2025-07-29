#include <stdio.h>

int main(){

    int quant, result;

    printf ("\nDigite o quanto você ama a Amanda: ");
    scanf  ("%d", &quant);
    result = quant * 1000;
    printf ("\nO quanto você ama a Amanda é: %d.\n", result);

    return 0;
}