#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int add(), sub(), multiplication(),
    division();

int main()
{
    setlocale(LC_ALL, "");

    int operation; // Variável que recebe a operação
    // int menuLoop;  // variável que gera o loop no menu

    while (operation != 5)
    {

        system("cls");
        printf("Bem vindo à calculadora. \n 1 - Adição \n 2 - Subtração \n 3 - Multiplicação \n 4 - Divisão \n 5 - Sair \n Qual operação deseja realizar?: ");
        scanf("%d", &operation);
        fflush(stdin);

        system("cls");
        switch (operation)
        {
        case 1:
            system("cls");
            add();
            fflush(stdin);
            break;
        case 2:
            system("cls");
            sub();
            fflush(stdin);
            break;
        case 3:
            system("cls");
            multiplication();
            fflush(stdin);
            break;
        case 4:
            system("cls");
            division();
            fflush(stdin);
            break;
        case 5:
            system("cls");
            printf("Volte sempre :) \n");
            system("pause");
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
        }
    }
}

int add() // add operation
{
    float x, y, result;

    printf("Por favor, insira o primeiro valor: ");
    scanf("%f", &x);
    printf("Por favor, insira o segundo valor: ");
    scanf("%f", &y);
    fflush(stdin);

    result = x + y;

    printf("%0.2f + %0.2f = %0.2f\n", x, y, result);

    system("pause");

    return 0;
}

int sub() // subtraction operation
{
    float x, y, result;

    printf("Por favor, insira o primeiro valor: ");
    scanf("%f", &x);
    printf("Por favor, insira o segundo valor: ");
    scanf("%f", &y);
    result = x - y;

    printf("%0.2f - %0.2f = %0.2f\n", x, y, result);

    system("pause");

    return 0;
}

int multiplication() // multiplication operation
{
    float x, y, result;

    printf("Por favor, insira o primeiro valor: ");
    scanf("%f", &x);
    printf("Por favor, insira o segundo valor: ");
    scanf("%f", &y);
    result = x * y;

    printf("%0.2f x %0.2f = %0.2f\n", x, y, result);

    system("pause");

    return 0;
}

int division() // division operation
{
    float x, y, result;

    printf("Por favor, insira o primeiro valor: ");
    scanf("%f", &x);
    printf("Por favor, insira o segundo valor: ");
    scanf("%f", &y);
    result = x / y;

    printf("%0.2f ÷ %0.2f = %0.2f\n", x, y, result);

    system("pause");

    return 0;
}