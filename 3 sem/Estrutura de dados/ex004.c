#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int sumValor(int a, int b);
int sumReference(int *ptrA, int *ptrB, int *ptrD);

int main(void)
{
    setlocale(LC_ALL, "");
    system("cls");
    int a, b, c, d, e;

    printf("\n Bem vindo � mais um programa para refor�ar fun��es. Por favor, insira um valor para a: ");
    scanf("%d", &a);
    printf("\n Muito bem! Agora insira um valor para b: ");
    scanf("%d", &b);

    //* Chamando fun��o por valor:
    c = sumValor(a, b);

    //* Chamando fun��o por refer�ncia:
    e = sumReference(&a, &b, &d);

    printf("\n Este � o resultado da fun��o por valor: %d + %d = %d ", a, b, c);
    printf("\n Este � o resultado da fun��o por refer�ncia: %d + %d = %d ", a, b, e);

    system("pause");
    return 0;
}

int sumValor(int a, int b)
{
    int c = a + b;
    return c;
}
int sumReference(int *ptrA, int *ptrB, int *ptrD)
{
    *ptrD = *ptrA + *ptrB;
    return *ptrD;
}