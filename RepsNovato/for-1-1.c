#include <stdio.h>

int main(){

    char peca1[50]="Bispo";
    char peca2[50]="Rainha";
    char peca3[50]="Torre";

    int bispo =0;
    int rainha =0;

    //printf ("As peças são %s, %s e %s\n", peca1, peca2, peca3);

        printf("\n** Movimento da peça %s **\n", peca1);

    while(bispo !=5){
        
        printf("\n%s moveu 1 casa para cima.\n", peca1);
        printf("%s moveu 1 casa para direita.\n", peca1);
        bispo++;
        printf("%s moveu %d casa(s) na diagonal\n", peca1, bispo);
    }

        printf("\n** Movimento da peça %s **\n", peca2);
    do{
        printf("%s moveu %d casa(s) para a esquerda\n", peca2, rainha);
        rainha++;
    }
    while(rainha <= 8);

        printf("\n** Movimento da peça %s **\n", peca3);
    for (int torre = 0; torre <= 5; torre++){
        printf("%s moveu %d casa(s) para a direita\n", peca3, torre);
    }


    return 0;
}