#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void function1(float *a, float *b);

int main()
{
    setlocale(LC_ALL, "");
    system("cls");

    float a, b;

    printf("\n Por favor, insira um n�mero: ");
    scanf("%f", &a);
    printf("\n Por favor, insira um n�mero: ");
    scanf("%f", &b);
    printf("\n Este � o conte�do da primeira vari�vel, n1: %0.2f e este � seu endere�o: %p, e este � o conte�do da segunda vari�vel, n2: %0.2f e este � o seu endere�o: %p \n", a, &a, b, &b);

    function1(&a, &b);

    printf("\n Este � o conte�do da primeira vari�vel, n1: %0.2f e este � seu endere�o: %p, e este � o conte�do da segunda vari�vel, n2: %0.2f e este � o seu endere�o: %p\n", a, &a, b, &b);

    system("pause");
    system("cls");
    return 0;
}

void function1(float *a, float *b)
{

    if (*a < *b)
    {
        int registrador = *b; // Vari�vel que permite uma lacuna para a troca ser realizada
        *b = *a;
        *a = registrador;
    }
}
