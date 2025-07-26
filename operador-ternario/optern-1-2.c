#include <stdio.h>

int main()
{

    int temp = 28;
    int result2;

    temp > 30 ? printf ("A temperatura está alta.\n") : printf ("A temperatura está baixa.\n");

    // Usando operador ternário para verificar se a temperatura é maior ou igual a 30;
    result2 = temp > 30 ? 1 : 0;

    if (result2 == 0)
    {
        printf("A temperatura está alta.\n");
    }
    else
    {
        printf("A temperatura está baixa.\n");
    }

return 0;
}