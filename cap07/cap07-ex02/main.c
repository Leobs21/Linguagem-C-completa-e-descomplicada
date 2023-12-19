#include <stdio.h>
#include <stdlib.h>
// Faça um programa que leia uma string e imprima as quatro primeiras letras dela.
int main()
{
    char str[30];
    printf("Digite uma string com mais de 5 caracteres: ");
    gets(str);
    printf("A string completa: %s\n", str);
    printf("Os 4 primeiros caracteres: ");
    for(int i=0; i < 5 ;i++){
        printf("%c",str[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}
