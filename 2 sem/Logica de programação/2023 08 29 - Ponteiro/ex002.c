#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    system("cls");
    setlocale(LC_ALL, "");

    int n1, n2, *ptrn1, *ptrn2;

    ptrn1 = &n1;
    ptrn2 = &n2;

    printf("Por favor, insira um valor: ");
    scanf("%d", &n1);
    printf("Por favor, insira outro valor: ");
    scanf("%d", &n2);

    if (ptrn1 > ptrn2)
    {
        printf("\n O número %d está no endereço %p e o número %d está no endereço %p", n1, ptrn1, n2, ptrn2);
    }
    if (ptrn1 < ptrn2)
    {
        printf("\n O número %d está no endereço %p e o número %d está no endereço %p", n2, ptrn2, n1, ptrn1);
    }

    system("pause");
    return 0;
}