#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void dobro();

int main()
{
    setlocale(LC_ALL, "");
    system("cls");

    int nmbA, nmbB, nmbC;

    printf("\n Por favor, insira um n�mero inteiro: ");
    scanf("%d", &nmbA);
    printf("\n Por favor, insira outro n�mero inteiro: ");
    scanf("%d", &nmbB);

    dobro(&nmbA, &nmbB);

    nmbC = nmbA + nmbB;

    printf("\n Este � o dobro do primeiro n�mero: %d e este � o dobro do segundo n�mero: %d.\n A soma do dobro deles �: %d \n", nmbA, nmbB, nmbC);

    system("pause");
    system("cls");
    return 0;
}

void dobro(int *a, int *b)
{
    *a = 2 * *a;
    *b = 2 * *b;
}