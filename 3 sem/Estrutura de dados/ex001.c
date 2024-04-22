#include <stdio.h>
#include <stdlib.h>

int funcaoA(int a);

int main()
{
    system("cls");
    int a = 1;

    int b = funcaoA(a);

    b = b + 2;
    printf("\n Esse é o valor após o retorno da funcao: %d", b);
    system("pause");
    return 0;
}

int funcaoA(int a)
{
    int b = 2;
    int c = b + a;
    printf("\n o valor de a é: %i ", a);
    printf("\n O resultado da conta é: %i \n", c);
    return c;
}