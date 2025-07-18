#include <stdio.h>

int main ()

//Encadeamentos de condições e resposta de acordo com a condição verdadeira.

{
    int age;

    printf ("Digite sua idade: ");
    scanf  ("%d", &age);

    if (age < 12)
    {
        printf ("Você é uma criança.\n");
    }   
        else if (age >= 12 && age <= 18)
        {
            printf ("Você é um adolescente.\n");

        }
            else if (age >= 18 && age <= 60)
            {
                printf ("Você é um adulto.\n");
            }
                else if (age >= 60 && age <= 100)
                {
                    printf ("Você é um idoso.\n");
                }
    else
    {
        printf ("You are O L D!\n");
    }

    return 0;
}