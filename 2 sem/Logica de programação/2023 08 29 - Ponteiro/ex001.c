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
    printf(" \n Por favor, insira um n�mero inteiro: ");
    scanf("%d", ptri);
    printf(" \n Por favor, insira um n�mero real: ");
    scanf("%f", ptrf);
    printf(" \n Por favor, insira um n�mero car�cter: ");
    fflush(stdin);
    scanf("%9s", ptrc);

    printf("\n Este � o n�mero inteiro: %d, este � o n�mero real:%0 .2f, e este � o car�ctere: %c \n\n", *ptri, *ptrf, *ptrc);

    printf(" \n Por favor, insira um n�mero inteiro: ");
    scanf("%d", ptri);
    printf(" \n Por favor, insira um n�mero real: ");
    scanf("%f", ptrf);
    printf(" \n Por favor, insira um n�mero car�cter: ");
    fflush(stdin);
    scanf("%9s", ptrc);

    printf("\n Este � o n�mero inteiro: %d, este � o n�mero real:%0.2f, e este � o car�ctere: %c \n\n", *ptri, *ptrf, *ptrc);
}