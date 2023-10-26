#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int  verifica();

int main()
{
    system("cls");
    setlocale(LC_ALL, "");

    float nmb1, result;

    printf("Por favor, insira um número: ");
    scanf("%f", &nmb1);

    result = verifica(nmb1);

    if (result == 0)
    {
        printf(" \n O número %f é um número primo", nmb1);
    }
    else
    {
        printf("\n O número %f não é primo", nmb1);
    }
}

int verifica(int nmb)
{
    int i, result = 0;
    
    for (i = 2; i <= nmb / 2; i++)
    {
        if (nmb % i == 0)
        {
            result++;
            break;
        }
    }

    return nmb; 
}