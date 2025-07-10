#include <stdio.h>

int main ()
{
    
    // Declarar variáveis de Produtos, u i estoque;
    // Double valor unitário, double valor total e u i quantidade mínima;

    char prod1 [30] = "Produto 1";
    char prod2 [30] = "Produto 2";
    
    unsigned int stock1 = 1000, stock2 = 2000, minstock1= 500, minstock2 = 2500;
    float val1 = 10.50;
    float val2 = 20.40;
    double total1, total2;
        
    //Exibir info dos produtos;
    
    printf ("Produto: %s tem estoque %u e o valor unitário é R$ %.2f.\n", prod1, stock1, val1);
    printf ("Produto: %s tem estoque %u e o valor unitário é R$ %.2f.\n", prod2, stock2, val2);

    //Comparações com valor mínimo do estoque;
    
    total1 = stock1 > minstock1;
    total2 = stock2 > minstock2;

    printf ("O produto %s tem estoque mínimo de %u.\n", prod1, total1);
    printf ("O produto %s tem estoque mínimo de %u.\n", prod2, total2);

    //Comparações entre os valores totais dos produtos;

    printf ("O valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f)? %d.\n",
    stock1 * val1, 
    stock2 * val2,
    (stock1 * val1) > (stock2 * val2));

    return 0;

}