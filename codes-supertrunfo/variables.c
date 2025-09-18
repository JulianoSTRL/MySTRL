#include <stdio.h>
int main(){

    int a = 10;
    int b = 3;
    int sum = a + b;
    int dif = a - b;
    int prod = a * b;
    double quo = a / b;

    printf ("Soma = %d.\n", sum);
    printf ("Diferença = %d.\n", dif);
    printf ("Produto = %d.\n", prod);
    printf ("Quociente = %.2f.\n", quo);

    //Nova Variável para entendimento (>-.-)>;

    //Conversão implícita de int into float (~x_x)~;
    float resultado = a + b;
    printf ("Resultado: %.2f.\n", resultado);

    //Conversão explícita de int into float <(-.-<);
    float quociente = (float) a / b;
    printf ("Quociente: %.2f.\n", quociente);
    return 0;
}