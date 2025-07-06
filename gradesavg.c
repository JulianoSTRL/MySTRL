#include <stdio.h>

int main()
{

    //Variáveis para média de notas;
    
    int nota1, nota2, nota3;
    float equal;

    /*
    Prestar atenção no tipo de variável;
    If "float" use "%f", para números "quebrados";
    If "int" use "%d", para números "inteiros";
    */

    printf ("*** Programa para Cálculo de Média ***\n");
    printf ("Insira o valor da primeira nota: \n");
    scanf ("%d", &nota1);

    printf ("Insira o valor da segunda nota: \n");
    scanf ("%d", &nota2);

    printf ("Insira o valor da terceira nota: \n");
    scanf ("%d", &nota3);

    /*
    Sempre aplicar a soma dos valores entre parênteses "()";
    Neste caso a média se dá ao dividir os valores com o operador "/";
    */

    equal = (nota1+nota2+nota3)  / 3;

    /*
    Limitar o número de casas decimais com ".2" ou ".3" antes do especificador da variável
    Para que possa ter um número reduzido
    */

    printf ("Resultado da média: %.2f\n", equal);

    /*
    Usar casting (ou variável = (float), para "forçar" um número "inteiro" à um número "quebrado";
    Mas prefira utilizar a variável de acordo com o tipo de entrada de dados;
    Se for número quebrado, use float e %f;
    Pois a conversão de dados, ou "casting" pode te fazer perder informações;
    */

    equal = (float) (nota1+nota2+nota3)  / 3;

    printf ("Resultado utilizando casting: %.2f\n", equal);
    return 0;
}