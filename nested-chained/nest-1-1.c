#include <stdio.h>

int main ()
{
    int idade;
    float renda;

    printf ("Digite sua idade: ");
    scanf  ("%d", &idade);

    printf ("Digite sua renda: ");
    scanf  ("%f", &renda);

    if (idade >= 18 || idade <= 60)
    {
        printf ("Aceito com relação a idade.\n");
    
        if (renda <= 2000)
        {
            printf ("Você tem direito ao desconto.\n");
        }
        else
        {
            printf ("Você não tem direito ao desconto devido à renda.\n");        
        
        }
    }  
    else
    {
        printf ("Não aceito devido à idade.\n");
    }

    return 0;
}