#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void function();

int main(){
    setlocale(LC_ALL, "");
    system("cls");

    int n1, n2, *ptrN1, ptrN2;

    printf("Por favor, insira um novo número: ");
    scanf("%d", &n1);
    printf("Por favor, insira um novo número: ");
    scanf("%d", &n2);

    function(n1, n2);

    
    
}

function(n1, n2){
    ptrN1 = &n1;
    ptrN2 = &n2;

};