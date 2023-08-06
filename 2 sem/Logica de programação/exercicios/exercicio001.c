#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float peso[5];
    float idade[5];
    int z;

    z = 0;
    while (z < 5)
    {
        printf("Por favor, insira o peso de uma pessoa: ");
        scanf("%f, ", &peso[z]);
        printf("Agora, por favor, insira uma idade para essa mesma pessoa: ");
        scanf("%f. ", &idade[z]);
        z++;
    }

    z=0;
    do
    {
       printf("\n Idade = %0.1f, peso = %0.1f", idade[z], peso[z]);
       z++;
    } while (z<5);
    printf("\n");
    
    system("Pause");
    return 0;
}