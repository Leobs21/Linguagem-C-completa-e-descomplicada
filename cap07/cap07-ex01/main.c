#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Faça um programa que leia uma string e a imprima na tela.
int main()
{
    char str[30];
    printf("Escreva uma string qualquer: ");
    gets(str);
    printf("Voce digitou: \n%s\n", str);
    system("pause");
    return 0;
}
