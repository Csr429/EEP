#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int calcularMinimoViagens();

int main()
{
    setlocale(LC_ALL, "");
    system("cls");

    int c, a, t;

    printf("Bem vindo! Por favor, insira a capacidade m�xima da cabine: ");
    scanf("%d", &c);
    //! Teste para a capacidade
    if (c < 2)
    {
        printf("\n Erro: A capacidade m�xima inserida � muito baixa");
    }
    else if (c > 100)
    {
        printf("\n Erro: A capacidade inserida � muito alta");
    }

    printf("\n Agora insira a quantidade de pessoas: ");
    scanf("%d", &a);

    //! Teste para o n�mero de pessoas
    if (c < 2)
    {
        printf("\n Erro: A capacidade m�xima inserida � muito baixa");
    }
    else if (c > 100)
    {
        printf("\n Erro: A capacidade inserida � muito alta");
    }

    t = calcularMinimoViagens(c,a);
    
    printf("\n A quantidade m�nima de viagens �: %d.\n Boa viagem!", t);

}



int calcularMinimoViagens(int cap, int adv){
    int travels = adv/cap;
    if(adv%cap !=0){
        travels++;
    }
    return travels;
}
