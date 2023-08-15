#include <stdio.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char nome[20];
    int z = 0;

    printf("\n Por favor, insira um nome: \n");
    fgets(nome, 20, stdin);

    for (nome[z] = '\n' ; z>=0 ; z--)
    {
        printf("%c", nome[z]);
    }
}