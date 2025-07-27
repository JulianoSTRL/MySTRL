#include <stdio.h>

int main()
{
    // Variables Math Ops
    int num1, num2;
    int sum, sub, split, times;

    printf ("Entre com o num1: \n");
    scanf ("%d", &num1);
    printf ("Entre com o num2: \n");
    scanf ("%d", &num2);

    // sum op
    sum = num1 + num2;

    // sub op
    sub = num1 - num2;

    // split (or divide) op
    split = num1 / num2;

    // times (or multiplication) op
    times = num1 * num2;

    printf ("A soma é: %d.\n", sum);
    printf ("A subtração é: %d.\n", sub);
    printf ("A divisão é: %d.\n", split);
    printf ("A multiplicação é: %d.\n", times);

    return 0;
}