#include <stdio.h>

int main()
{
    // Variáveis para entrada de Dados;

    int age = 20;
    int result1;
    
    age > 18 ? printf ("Você é maior de idade.\n") : printf ("Você é menor de idade.\n");

    // Usando operador ternário para verificar se a idade é maior ou igual a 18;
    result1 = age >= 18 ? 1 : 0;
    
    if (result1 == 0)
    {
        printf("Você é maior de idade.\n");
    }
    else
    {
        printf("Você é menor de idade.\n");
    }

return 0;
}