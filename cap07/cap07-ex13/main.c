#include <stdio.h>
#include <stdlib.h>
// Escreva um programa que recebe uma string S e dois valores inteiros não negativos i e j.
// Em seguida, imprima os caracteres contidos no segmento que vai de i a j da string S.

int main()
{
    char str[30];
    int i;
    int j;
    setbuf(stdin, NULL);
    printf("Digite uma string e dois valores inteiros e imprima o range entre I e J.\n");

    printf("Digite uma string qualquer: ");
    gets(str);

    printf("Digite o valor de I: ");
    scanf("%d", &i);

    printf("Digite o valor de J: ");
    scanf("%d", &j);

    printf("Caracteres contidos no range entre I e J: ");
    for(i=i-1; i < j; i++){
        printf("%c",str[i]);
    }
    printf("\n");

    system("pause");
    return 0;
}
