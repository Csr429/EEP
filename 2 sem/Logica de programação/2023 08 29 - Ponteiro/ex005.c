#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void function1(float *a, float *b);

int main()
{
    setlocale(LC_ALL, "");
    system("cls");

    float a, b;

    printf("\n Por favor, insira um número: ");
    scanf("%f", &a);
    printf("\n Por favor, insira um número: ");
    scanf("%f", &b);
    printf("\n Este é o conteúdo da primeira variável, n1: %0.2f e este é seu endereço: %p, e este é o conteúdo da segunda variável, n2: %0.2f e este é o seu endereço: %p \n", a, &a, b, &b);

    function1(&a, &b);

    printf("\n Este é o conteúdo da primeira variável, n1: %0.2f e este é seu endereço: %p, e este é o conteúdo da segunda variável, n2: %0.2f e este é o seu endereço: %p\n", a, &a, b, &b);

    system("pause");
    system("cls");
    return 0;
}

void function1(float *a, float *b)
{

    if (*a < *b)
    {
        int registrador = *b; // Variável que permite uma lacuna para a troca ser realizada
        *b = *a;
        *a = registrador;
    }
}
