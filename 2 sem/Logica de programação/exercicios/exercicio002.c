#include <stdio.h>
#include <stdlib.h>

// Exercício para intercalar as posições dentro de um mesmo vetor 

int main(void)
{
    float vetor[10];
    int z;

    for (z = 0; z < 10; z++)
    {
        if (z % 2 == 0)
        {
            printf("Por favor, insira um peso: ");
            scanf("%f", &vetor[z]);
        }
        else
        {
            printf("Por favor, insira uma idade: ");
            scanf("%f", &vetor[z]);
        }
    }

    printf("\n Estes sao as idades e os respectivos pesos: ");

    for (z = 0; z < 10; z++)
    {
        if (z % 2 == 0)
        {
            printf("\n peso: %1.0f, ", vetor[z]);
        }
        else
        {
            printf("Idade: %1.0f.", vetor[z]);
        }
    }

    printf("\n");
    system("Pause");
    return 0;
}