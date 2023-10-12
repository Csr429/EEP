#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    system("cls");

    char str[12] = "meu string";
    int conta; 
    char novo = '!';

    conta = 0;
    while (str[conta] != '\0') conta++;

    str[conta]= novo;
    str[conta+1] = '\0';
    printf("%s", str);
    

}