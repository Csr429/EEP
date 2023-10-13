#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char nome[20];
    char genero[10];
    char generoChave[10] = "feminino\n";
    int idade;

    printf("\n Por favor, insira na sequencia, um nome, um genero e uma idade: ");
    printf("\n Nome: ");
    fgets(nome, 20, stdin);
    printf(" genero: ");
    fgets(genero, 10, stdin);
    printf(" idade:  ");
    scanf("%d", &idade);

    if (idade < 25 && strcmp(genero, generoChave) == 0)
    {
        printf("/n %s, de idade %i preenche os prerrequisitos ", nome, idade);
    }
    else
    {
        printf("\n %snao atinge os requisitos\n", nome);
    }

    system("Pause");
    return 0;
}