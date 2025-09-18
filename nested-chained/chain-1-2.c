#include <stdio.h>

int main ()

{
    float nota;

    printf ("Digite sua nota: ");
    scanf  ("%f", &nota);

    if (nota >= 90)
    {
        printf ("Conceito A.\n");
    }
        else if (nota >= 80)
        {
            printf ("Conceito B.\n");
        }
            else if (nota >= 70)
            {
                printf ("Conceito C.\n");
            }
                else if (nota >= 60)
                {
                    printf ("Conceito D.\n");
                }
                    else if (nota >= 50)
                    {
                        printf ("Conceito E.\n");
                    }

    else 
    {
        printf ("Abaixo do conceito mínimo.\n");
    }
    return 0;
}