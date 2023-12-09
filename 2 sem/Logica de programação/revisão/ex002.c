#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int encontrarNotaDaOutraProva();

int main()
{
    setlocale(LC_ALL, "");
    system("cls");

    int a, m, notaPerdida;

    printf("Ol�! Por favor, insira a nota de uma das provas: ");
    scanf("%d", &a);

    //! Teste para ver se a nota est� no intervalo de avalia��o
    if (a < 0)
    {
        printf("\n Erro: A nota inserida est� abaixo da escala usada para avaliar um aluno");
    }
    else if (a > 100)
    {
        printf("\n A nota inserida est� acima da escala utilizada para avaliar um aluno");
    }

    printf("\n Por favor, insira a m�dia: ");
    scanf("%d", &m);
    //! Teste para ver se a m�dia est� no intervalo de avalia��o
    if (m < 0)
    {
        printf("\n Erro: A m�dia est� abaixo da escala utilizada para avaliar um aluno");
    }
    else if (m > 100)
    {
        printf("\n Erro: A m�dia est� acima da escala utilizada para avaliar um aluno");
    }

    notaPerdida = encontrarNotaDaOutraProva(a, m);

    printf("\n A nota perdida �: %d \n", notaPerdida);

    system("pause");
    return 0;
}

int encontrarNotaDaOutraProva(int nota, int media){
    int notaPerdida;
    notaPerdida= (2*media)-nota;
    return notaPerdida;
}