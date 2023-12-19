#include <stdio.h>
#include <stdlib.h>
// Faça um programa que leia uma string e a imprima de trás para a frente.
int main()
{
    char str[30];
    printf("Leia uma string e imprima de tras para a frente.\n");
    printf("Digite uma string qualquer: ");
    setbuf(stdin, NULL);
    gets(str);
    printf("A string digitada: %s\n",str);
    printf("Lida de tras para a frente: ");
    int count = strlen(str);
    for(int i=count; i >= 0; i--){
        printf("%c",str[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}
