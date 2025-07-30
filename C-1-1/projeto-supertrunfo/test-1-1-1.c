#include <stdio.h>

int main(){

    long long int pop1 = 763367, pop2 = 1440000;
    int respop;
    char pais1[49] = "China";
    char pais2[49] = "índia";

    printf ("População dos Países: %s = %lld, %s = %lld.\n", pais1, pop1, pais2, pop2);
    respop = pop1 < pop2 ? 1:0;
    printf (respop? "%s, %s\n", pais1 : pais2);
    return 0;
}