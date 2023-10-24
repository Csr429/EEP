#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");
    system("cls");

    int i, *ptri;
    float f, *ptrf;
    char c[10], *ptrc;

    ptri = &i;
    ptrf = &f;
    ptrc = c;

    system("cls");
    printf(" \n Por favor, insira um número inteiro: ");
    scanf("%d", ptri);
    printf(" \n Por favor, insira um número real: ");
    scanf("%f", ptrf);
    printf(" \n Por favor, insira um número carácter: ");
    fflush(stdin);
    scanf("%9s", ptrc);

    printf("\n Este é o número inteiro: %d, este é o número real:%0 .2f, e este é o caráctere: %c \n\n", *ptri, *ptrf, *ptrc);

    printf(" \n Por favor, insira um número inteiro: ");
    scanf("%d", ptri);
    printf(" \n Por favor, insira um número real: ");
    scanf("%f", ptrf);
    printf(" \n Por favor, insira um número carácter: ");
    fflush(stdin);
    scanf("%9s", ptrc);

    printf("\n Este é o número inteiro: %d, este é o número real:%0.2f, e este é o caráctere: %c \n\n", *ptri, *ptrf, *ptrc);
}