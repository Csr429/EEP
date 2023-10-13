#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char nome[20];

    printf("\n Por favor, insira um nome: ");
    fgets(nome, 20, stdin);

    if (nome[0] == 'a' || nome[0] == 'A')
    {
        printf("\n O nome %s atende os prerrequisitos ", nome);
    }
    else
    {
        printf(" \n O nome %s nao atende aos prerrequisitos", nome);
    }

    return 0;
}