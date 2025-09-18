#include <stdio.h>
/*
Programa Gerenciamento de Notas de Estudantes:

status = aprovado, reprovado, recuperação;
baseado nas notas;

criar menu (switch):

calcular média = nota / média
calcular status = informar média if (nota >= media) printf ("\nAprovado!\n") else printf ("\nReprovado!\n");

usuário digita as notas então sistema retorna a média;

determinar status

usuário digita a média então sistema informa se foi aprovado ou não

*/

int main()
{
    //Variáveis de valores adicionados pelo usuário
    // While que mantém em repetição para cálculo de média e info sobre aprovação;

    int opt, exec = 1;
    float soma, nota1, nota2, nota3, media = -1;
while (exec == 1)
{
    printf ("\n--- Menu de Gerenciamento de Notas ---\n");
    printf ("%25s\n", "Opções\n");
    printf ("\n1. Calcular Média\n");
    printf ("2. Determinar Status\n");
    printf ("3. Sair\n");
    printf ("Escolha uma opção: \n");
    scanf  ("%d", &opt);

    //Opções do menu em andamento;
    switch (opt)
    {
        case 1:
            printf ("\n%28s", "Calcular Média\n");
            printf ("Digite as notas\n");
            printf ("\nNota 1: ");
            scanf  ("%f", &nota1);
            printf ("Nota 2: ");
            scanf  ("%f", &nota2);
            printf ("Nota 3: ");
            scanf  ("%f", &nota3);
            soma = nota1 + nota2 + nota3;
            media = soma / 3;
            printf ("\nSua média é: %.1f\n", media);

        break;

        case 2:
            printf ("\n%28s", "Determinar Status\n");
            if (media < 0) 
            {
                printf ( "\nA média ainda não foi calculada. Use a opção 1 primeiro.\n");
                continue;
            }
            else
            {
                char *mensagem =
                (media >= 6.0)? "\nParabéns, você foi aprovado!\n" :
                (media >= 4.0)? "\nVocê está de recuperação.\n" :
                                "\nVocê está reprovado.\n";
                printf ("Média: %.1f\n%s\n", media, mensagem);
                }
                break;
            
        break;
        
        case 3:
            printf ("\nSaindo do programa...\n");
            exec = 0;
        break;
        
        default:
            printf ("\nOpção Inválida. Tente novamente.\n");
    }
      // Se não escolheu sair, perguntar se quer voltar ou sair
        if (opt != 3 && exec == 1) 
        {
            int decisao;
            printf ("\nDeseja voltar ao menu principal ou sair?\n");
            printf ("1. Voltar ao menu\n");
            printf ("2. Determinar Status\n");
            printf ("3. Sair\n");
            printf ("\nEscolha: ");
            scanf  ("%d", &decisao);

            if (decisao == 1)
            {
                continue;
            }
            else if (decisao == 2)
            {
                char *mensagem =
                (media >= 6.0)? "\nParabéns, você foi aprovado!\n" :
                (media >= 4.0)? "\nVocê está de recuperação.\n" :
                                "\nVocê está reprovado.\n";
                printf ("Média: %.1f\n%s\n", media, mensagem);
            }
        
            }
            else
            {
                printf ("\nOpção Inválida\n");
            }
        }
    

return 0;
}
