#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void dobro();

int main()
{
    setlocale(LC_ALL, "");
    system("cls");

    int nmbA, nmbB, nmbC;

    printf("\n Por favor, insira um número inteiro: ");
    scanf("%d", &nmbA);
    printf("\n Por favor, insira outro número inteiro: ");
    scanf("%d", &nmbB);

    dobro(&nmbA, &nmbB);

    nmbC = nmbA + nmbB;

    printf("\n Este é o dobro do primeiro número: %d e este é o dobro do segundo número: %d.\n A soma do dobro deles é: %d \n", nmbA, nmbB, nmbC);

    system("pause");
    system("cls");
    return 0;
}

void dobro(int *a, int *b)
{
    *a = 2 * *a;
    *b = 2 * *b;
}