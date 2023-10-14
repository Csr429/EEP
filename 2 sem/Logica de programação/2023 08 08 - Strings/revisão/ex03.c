#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int conta();
char names[10][50];

int main()
{
    setlocale(LC_ALL, "");
    system("cls");

    int response;

    printf("\n Bem vindo à lista de nomes. \n 1 - Escrever Nomes \n 2 - Ver os nomes \n 3 - Sair \n Escolha:  ");
    scanf("%d", &response);

    int i = 0;
    while (response != 3)
    {
        switch (response)
        {
        case 1:
            int z = conta();
            printf("\n Por favor, insira um nome: ");
            getchar();
            fgets(names[z], 50, stdin);
            break;
        case 2:
            printf("\n Nomes: \n");
            for (int y = 0; y < 10; y++)
            {
                if (names[y][0] != '\0') // Verifique se o nome não é vazio antes de imprimir.
                    printf("%d - %s", y, names[y]);
            }
            system("pause");
            break;
        }
        system("cls");
        printf("\n 1 - Escrever Nomes \n 2 - Ver os nomes \n 3 - Sair \n Escolha:  ");
        scanf("%d", &response);
    }
}

conta()
{
    for (int i = 0; i < 10; i++)
    {
        if (names[i][0] == '\0' || names[i][0] == '\n')
        {
            return i;
        }
    }
    return -1;
}