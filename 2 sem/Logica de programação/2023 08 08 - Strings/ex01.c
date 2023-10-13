#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char nome[20];

    printf("\nPor favor, insira um nome: ");
    fgets(nome, 20, stdin);

    printf("As quatro primeiras letras são: %c, %c, %c e %c.", nome[0], nome[1], nome[2], nome[3]);

    system("Pause");
    return 0;
}
