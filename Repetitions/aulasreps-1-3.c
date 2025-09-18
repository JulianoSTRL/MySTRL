//TABUADA

#include <stdio.h>

int main()
{
    int num, i;

    printf("Digite um número para calcularmos a tábuada...\n");
    scanf("%d", &num);
    
    for(i = 0; i <= 10; i++)
    {
        printf ("%d x %d = %d \n", i, num, i * num);
    }
    return 0;
}