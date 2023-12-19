#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Sem usar a função strlen(), faça um programa que leia uma string e imprima
// quantos caracteres ela possui.
int main()
{
    char str[30];
    int count = 0;
    printf("Leia uma string e imprima quantos caracteres ela possui sem usar strlen().\n");
    printf("Digite uma string qualquer: ");
    gets(str);
    for(int i=0; str[i] != '\0' ;i++){
        count += 1;
    }
    printf("A string \"\%s\"\ possui %d caracteres (espacos incluso).\n", str, count);
    system("pause");
    return 0;
}
