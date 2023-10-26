#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float fahrenheit(float temperatureF);
float celsius(float temperatureC);

int main()
{
    system("cls");
    setlocale(LC_ALL, "");

    int chose;
    float temperatureConverted, temperature;

    printf("Bem vindo à conversão de temperatura, por favor selecione a unidade de medida da temperatura original: \n 1 - celsius \n 2 - Fahrenheit \n Escolha: ");
    scanf("%d", &chose);
    printf("\n Agora insira a temperatura: ");
    scanf("%f", &temperature);

    if (chose == 1)
    {
        temperatureConverted = fahrenheit(temperature);
    }
    else if (chose == 2)
    {
        temperatureConverted = celsius(temperature);
    }
    else
    {
        printf("\n A unidade de medida escolhida é inválida");
    }

    printf("\n %0.2f = %0.2f", temperature, temperatureConverted);

    system("pause");
    return 0;
}

float celsius(float temperatureC)
{
    float conversion;

    conversion = (temperatureC * (9.0 / 5.0)) + 32.0;

    return conversion;
}

float fahrenheit(float temperatureF)
{
    float conversion;

    conversion = (temperatureF - 32.0) * (5.0 / 9.0);

    return conversion;
}