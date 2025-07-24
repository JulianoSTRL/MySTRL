#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    char nome[50];
    printf("Digite um nome com acento: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Você digitou: %s\n", nome);
    return 0;
}
