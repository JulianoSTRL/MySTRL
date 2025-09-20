#include <stdio.h>

int main(){

    /*
    Atribuição Simples (=)
    Atribuição com Soma (+=)
    Atribuição com Subtração (-=)
    Atribuição com Multiplicação (*=)
    Atribuição com Divisão (/=)  
    */

    /*O computador sempre vai ler o código linearmente
    Sendo assim, irá executar as funções
    Baseando seu próximo resultado de acordo com o resultado anterior
    Se o 'equal' anterior deu x
    O próximo 'equal' executará a função no último valor (ou o x)
    Ou seja, se x = 10 e a próxima função é 'equal -=20'
    O resultado será y = -10
    */
    int num1 =  40, num2, equal;

    equal = 10;
    printf ("Resultado: %d.\n", equal);

    // Resultado: equal = 10 somando 20;
    equal += 20;
    printf ("Resultado: %d.\n", equal);

    // Resultado: equal da função anterior = 30 subtraindo a variável declarada num1 = 40;
    // Resultado: resultado: -10;
    equal -= num1;
    printf ("Resultado: %d.\n", equal);
    
    // Resultado: assim como foi citado, o resultado do último 'equal' que foi -10;
    // Será multiplicado por 20 com a função *= 20, resultando em -200;
    equal *= 20;
    printf ("Resultado: %d.\n", equal);

    return 0;
}