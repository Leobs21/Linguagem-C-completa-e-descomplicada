#include <stdio.h>
#include <stdlib.h>
// Escreva um programa que leia duas strings e as imprima em ordem alfabética,
// a ordem em que elas apareceriam em um dicionário.
int main()
{
    char str1[100];
    char str2[100];
    char first[100];

    setbuf(stdin, NULL);

    printf("Leia duas strings e as imprima em ordem alfabetica.\n");

    printf("Digite a primeira string: ");
    gets(str1);

    printf("Digite a segunda string: ");
    gets(str2);

    int charTotal = strlen(str1) + strlen(str2);

    for(int i=0; i < charTotal ;i++){
        int asciiStr1 = str1[i];
        int asciiStr2 = str2[i];

        if(asciiStr1 < asciiStr2){
            strcpy(first, str1);
            break;
        }else if(asciiStr2 < asciiStr1){
            strcpy(first, str2);
            break;
        }
    }
    if(strcmp(first, str1) == 0){
        printf("\nEm ordem alfabetica: \n\n1. %s\n2. %s\n\n", first, str2);
    }else if(strcmp(first, str2) == 0){
        printf("\nEm ordem alfabetica: \n\n1. %s\n2. %s\n\n", first, str1);
    }

    system("pause");
    return 0;
}
