#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char nome[20];
    int z;
    int x = 0;

    printf("\n Por favor, insira um nome: ");
    fgets(nome, 20, stdin);

    printf("\n O nome %s tem ", nome);

    for (z = 0; nome[z] != '\n'; z++)
    {
        // printf(" %c letras", nome[z]);
        x = x + 1;
    }

    printf("%d letras", x);

    return 0;
}