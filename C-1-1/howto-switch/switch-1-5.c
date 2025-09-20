#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int opt;
    int sctnum, guess;

    printf ("**MENU PRINCIPAL**.\n");
    printf ("1. Iniciar Jogo.\n");
    printf ("2. Regras.\n");
    printf ("3. Sair do Jogo.\n");
    printf ("\nEscolha uma opção: ");
    scanf  ("%d", &opt);
   
    switch (opt)
    {
        //rand, função includa na biblioteca <stdlib.h>, gera um número aleatório entre 0 e RAND_MAX;
        //você pode limitar esses números dividindo ele por um valor (rand () % 10);
        //nessa divisão, limita a geração do número apenas entre 0 e 9;
        //srand, função inclusa na biblioteca <stdlib.h>, define uma semente para gerar números aleatórios;
        //srand  (time(0)) *ou (time(NULL)), faz com que o sistema inicie a partir da hora atual, gerando mais aleatoriamente;

        case 1:
        printf ("\n**LINK START**\n");
        srand  (time(0));
        sctnum = (rand () % 10) +1;

        //
        printf ("\nDigite um número de 1 a 10: ");
        scanf  ("%d", &guess);
        printf ("\nNúmero secreto: %d.\n", sctnum);
        //
        if (guess == sctnum)
        {
        printf ("\nParabéns, você acertou!\n");
        }
        else if (guess < 1 || guess > 10)
        {
        printf ("\nNúmero inválido. Digite um número entre 1 e 10.\n");
        }
        else
        {
        printf ("\nVocê errou. Tente novamente\n");
        }

        break;
        
        //
        case 2:
        printf ("\n**REGRAS**\n");
        printf ("\nAs regras são simples, você digita um número dentro do intervalo citado.\n");
        printf ("Se você acertar, parabéns, sua sorte está em dia.\n");
        printf ("Se errar, tente novamente, até porque sorte não existe para computadores, é tudo sobre RNG, 0's e 1's. . .\n");
        printf ("\n**BOM JOGO <3**\n");

        break;

        //
        case 3:
        printf ("\nSaindo do jogo...\n");

        break;

        //
        default:

        printf ("\nOpção inválida. Encerrando.\n");
    }
        
    return 0;
}