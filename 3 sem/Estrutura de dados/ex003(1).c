#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int sum(int a, int b);
int ptrsum(int *ptrA, int *ptrB, int *ptrC);

int main(void)
{
    system("cls");
    setlocale(LC_ALL, "");

    int a = 0, b = 0, c = 0, d = 0, e = 0, a1 = 0, b1 = 0;

    printf("\n Bem vindo à copia do programa de teste, por favor, insira um valor para a: ");
    scanf("%d", &a);
    printf("\n Muito bem! Agora, por favor, insira um valor para b: ");
    scanf("%d", &b);

    //? Igualando as variáveis a=a1, b=b1:
    a1 = a;
    b1 = b;

    //? Chamando a função sum:
    c = sum(a, b);

    //? Chamando a função ptrsum
    e = ptrsum(&a1, &b1, &d);

    printf("\n Este é o retorno da função sum: %d + %d = %d", a, b, c);
    printf("\n E este é o retorno da função ptrsum: %d + %d = %d", a1, b1, d);
    printf("\n Este é o retorno da função ptrSum: %d \n", e);

    system("pause");
    return 0;
}

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

int ptrsum(int *ptrA, int *ptrB, int *ptrC)
{
    *ptrA = *ptrA + 1;
    *ptrB = *ptrB + 1;
    *ptrC = *ptrA + *ptrB;

    return 32;
}

//! Segue abaixo o código original, sem correções:

// #include <stdio.h>
// #include <stdlib.h>
// #include <locale.h>

// int sum(int a, int b);
// int ptrsum(int *ptrA, int *ptrB, int *ptrC);

// int main(void)
// {
//     system("cls");
//     setlocale(LC_ALL, "");

//     int a = 0, b = 0, c = 0, d = 0, e = 0, a1 = 0, b1 = 0;

//     printf("\n Bem vindo à copia do programa de teste, por favor, insira um valor para a: ");
//*    scanf("%d", -->a);
//     printf("\n Muito bem! Agora, por favor, insira um valor para b: ");
//*    scanf("%d",--> b);

//      Igualando as variáveis a=a1, b=b1:
//     a1 = a;
//     b1 = b;

//     Chamando a função sum:
//     c = sum(a, b);

//    Chamando a função ptrsum
//     e = ptrsum(&a1, &b1, &d);

//     printf("\n Este é o retorno da função sum: %d + %d = %d", a, b, c);
//*     -->print<--("\n E este é o retorno da função ptrsum: %d + %d = %d", a, b, d);
//     printf("\n Este é o retorno da função ptrSum: %d \n", e);

//     system("pause");
//     return 0;
// }

// int sum(int a, int b){
//     int c = a + b;
//     return c;
// }

// int ptrsum(int *ptrA, int *ptrB, int *ptrC){
//     *ptrA ++;
//     *ptrB ++;
//     ptrC = *ptrA + *ptrB;

//     return 32;
// }