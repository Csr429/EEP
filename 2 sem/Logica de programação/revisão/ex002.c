#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int encontrarNotaDaOutraProva();

int main()
{
    setlocale(LC_ALL, "");
    system("cls");

    int a, m, notaPerdida;

    printf("Olá! Por favor, insira a nota de uma das provas: ");
    scanf("%d", &a);

    //! Teste para ver se a nota está no intervalo de avaliação
    if (a < 0)
    {
        printf("\n Erro: A nota inserida está abaixo da escala usada para avaliar um aluno");
    }
    else if (a > 100)
    {
        printf("\n A nota inserida está acima da escala utilizada para avaliar um aluno");
    }

    printf("\n Por favor, insira a média: ");
    scanf("%d", &m);
    //! Teste para ver se a média está no intervalo de avaliação
    if (m < 0)
    {
        printf("\n Erro: A média está abaixo da escala utilizada para avaliar um aluno");
    }
    else if (m > 100)
    {
        printf("\n Erro: A média está acima da escala utilizada para avaliar um aluno");
    }

    notaPerdida = encontrarNotaDaOutraProva(a, m);

    printf("\n A nota perdida é: %d \n", notaPerdida);

    system("pause");
    return 0;
}

int encontrarNotaDaOutraProva(int nota, int media){
    int notaPerdida;
    notaPerdida= (2*media)-nota;
    return notaPerdida;
}