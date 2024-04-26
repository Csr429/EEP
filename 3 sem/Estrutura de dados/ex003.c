#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int sum(int a, int b);
int Sum(int *ptrA, int *ptrB, int *ptrD);

int main(void)
{
    system("cls");
    setlocale(LC_ALL, "");

    int a = 0, b = 0, c = 0, d = 0, e = 0;

    printf("\n Bem vindo ao teste. Por favor, insira um valor para x: ");
    scanf("%d", &a);
    printf("\n Agora, por favor, insira um valor para y: ");
    scanf("%d", &b);

    //! Alimentando a primeira função por valor:
    c = sum(a, b);

    //! Alimentando a segunda função por referência:
    e = Sum(&a, &b, &d);

    //! esse é o retorno da função alimentada por valor:
    printf("\n Este é o retorno da função alimentada por valor: %d ", c);

    //! Este é o retorno da função alimentada por referência:
    printf("\n Este é o retorno da função alimentada por referência: %d ", d);
    printf("\n este é o retorno da função: %d \n", e);
    system("pause");
    return 0;
}

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

int Sum(int *ptrA, int *ptrB, int *ptrD)
{
    *ptrD = *ptrA + *ptrB;
    return 0;
}