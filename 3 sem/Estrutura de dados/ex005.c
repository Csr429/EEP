#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float sum(float x, float y);
float sub(float x, float y);
float mult(float *ptrX, float *ptrY);
float division(float *ptrX, float *ptrY);

int main(void)
{
    setlocale(LC_ALL, "");
    system("cls");

    float x, y, z;
    int choice;

    while (choice != 5)
    {
        system("cls");
        printf("Bem vindo à calculadora!, por favor insira a operação que gostaria de fazer: \n 1 - Adição \n 2 - Subtração \n 3 - Multiplicação \n 4 - Divisão \n 5 - sair \n Escolha: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            system("cls");
            printf("\n Por favor, Insira o primeiro valor: ");
            scanf("%f", &x);
            printf("\n Agora insira a segundo valor: ");
            scanf("%f", &y);
            z = sum(x, y);
            printf("\n %0.2f + %0.2f = %0.2f \n", x, y, z);
            system("pause");
            break;

        case 2:
            system("cls");
            printf("\n Por favor, insira o primeiro valor: ");
            scanf("%f", &x);
            printf("\n Por favor, insira o segundo valor: ");
            scanf("%f", &y);
            z = sub(x, y);
            printf("\n %0.2f - %0.2f = %0.2f \n", x, y, z);
            system("pause");
            fflush(stdin);
            break;

        case 3:
            system("cls");
            printf("\n Por favor, insira o primeiro valor: ");
            scanf("%f", &x);
            printf("\n Agora, insira o segundo valor, por favor: ");
            scanf("%f", &y);
            z = mult(&x, &y);
            printf("\n %0.2f x %0.2f = %0.2f \n", x, y, z);
            fflush(stdin);
            break;
        case 4:
            system("cls");
            printf("\n Por favor, insira o primeiro valor: ");
            scanf("%f", &x);
            printf("\n Por favor, insira o segundo valor: ");
            scanf("%f", &y);
            z = division(&x, &y);
            printf("\n %0.2f / %0.2f = %0.2f \n", x, y, z);

        case 5:
            system("cls");
            printf("\n Volte sempre :) \n");
            system("pause");

        default:
            printf("\n Opção inválida");
            system("pause");
            break;
            fflush(stdin);
        }
    }

    return 0;
}

float sum(float x, float y)
{
    float result;
    result = x + y;
    return result;
}

float sub(float x, float y)
{
    float result;
    result = x - y;
    return result;
}

float mult(float *ptrX, float *ptrY)
{
    float result;
    result = *ptrX * *ptrY;
    return result;
}

float division(float *ptrX, float *ptrY)
{
    float result;
    result = *ptrX / *ptrY;
    return result;
}