#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int functionA(int *a, int *b);

int main()
{
    setlocale(LC_ALL, "");
    system("cls");

    int a, c;

    printf("\n Por favor, insira um n�mero: ");
    scanf("%i", &a);

    c = functionA(&a, &c);

    printf("\n Este � o valor que acabou de sair da fun��o: %i ", a);
    printf("\n esse � o valor de c: %d \n este � o endere�o de c: %p ", c, &c);

    system("pause");
    return 0;
}

int functionA(int *a, int *b)
{
    *a = *a + 2;
    printf("\n Este � o valor ap�s a opera��o dentro da fun��o: %i \n", *a);
    printf("\n Este � o endere�o de a que est� sendo acessado de dentro da fun��o: %p \n", &a);
    printf("\n Este � o valor de a que est� sendo acessado de dentro da fun��o: %d \n", *a);

    printf("\n Este � o valor de b: %d e este � o seu endere�o %p", *b, &b);
    return *a;
}