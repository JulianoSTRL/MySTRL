#include <stdio.h>

int main()
{
    int a = 0;
    int b = 2;
    int c;
    while (a <= 10){
        printf("%d\n", a);
        a++;
        c = a*b;
        printf ("C = %d\n", c);

    }


    return 0;
}