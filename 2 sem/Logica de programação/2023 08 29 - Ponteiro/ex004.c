#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void jorge();
int n1, n2, *ptrN1, *ptrN2;

int main()
{
    setlocale(LC_ALL, "");
    system("cls");

    printf("Por favor, insira um novo n�mero: ");
    scanf("%d", &n1);
    printf("Por favor, insira um novo n�mero: ");
    scanf("%d", &n2);

        printf("\n Conte�do atual de N1: %d. Endere�o atual de N1: %p. Conte�do Atual de N2: %d. Endere�o atual de N2: %p", n1, &n1, n2, &n2);

    jorge(n1, n2);

    printf("\n Conte�do atual de N1: %d. Endere�o atual de N1: %p. Conte�do Atual de N2: %d. Endere�o atual de N2: %p", n1, &n1, n2, &n2);
}

void jorge()
{
    int registrador; // Vari�vel que ir� armazenar temporariamente o valor de uma vari�vel para que seja poss�vel a troca

    ptrN1=&n1;
    ptrN2=&n2;

    registrador = *ptrN1;
    *ptrN1 = *ptrN2;
    *ptrN2 = registrador; 
};