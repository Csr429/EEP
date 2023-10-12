#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    system("cls");

    char str1[12];
    char str2[12];

    printf("\n Por favor, insira uma frase de até 11 carácteres: ");
    fgets(str1, 12, stdin);
    fflush(stdin);
    printf("\n Agora, insira uma segunda frase, também até 11 carácteres: ");
    fgets(str2, 12, stdin);
    fflush(stdin);

    system("cls");

    if (strcmp(str2, str1) == 0)
    {
        printf("\n As frases são do mesmo tamanho");
    }

    if (strcmp(str2, str1) > 0)
    {
        printf("\n '%s' é maior que '%s' ", str1, str2);
    }

    if (strcmp(str2, str1) < 0)
    {
        printf("\n '%s' é menor que '%s' ", str1, str2);
    }

    system("pause");
    return 0;
}