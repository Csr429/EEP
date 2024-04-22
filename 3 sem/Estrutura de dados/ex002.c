#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int functionA(int *a, int *b);

int main()
{
    setlocale(LC_ALL, "");
    system("cls");

    int a, c;

    printf("\n Por favor, insira um número: ");
    scanf("%i", &a);

    c = functionA(&a, &c);

    printf("\n Este é o valor que acabou de sair da função: %i ", a);
    printf("\n esse é o valor de c: %d \n este é o endereço de c: %p ", c, &c);

    system("pause");
    return 0;
}

int functionA(int *a, int *b)
{
    *a = *a + 2;
    printf("\n Este é o valor após a operação dentro da função: %i \n", *a);
    printf("\n Este é o endereço de a que está sendo acessado de dentro da função: %p \n", &a);
    printf("\n Este é o valor de a que está sendo acessado de dentro da função: %d \n", *a);

    printf("\n Este é o valor de b: %d e este é o seu endereço %p", *b, &b);
    return *a;
}