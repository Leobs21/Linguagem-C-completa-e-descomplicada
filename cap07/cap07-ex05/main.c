#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
// Faça um programa que leia uma string e a inverta.
// A string invertida deve ser armazenada na mesma variável.
// Em seguida, imprima a string invertida.
int main()
{
    char str1[100];
    char str2[100];
    printf("Leia uma string e a inverta.\n");
    printf("Digite uma string qualquer: ");
    setbuf(stdin, NULL);
    gets(str1);
    int count = strlen(str1);
    int k=0;
    for(int i=count-1; i >= 0 ;i--){
        str2[k] = str1[i];
        k++;
    }
    strcat(str1, str2);
    printf("\nUsando a mesma variavel (str1) para printar o valor invertido: ");
    for(int i=count; i < count*2 ;i++){
        printf("%c",str1[i]);
    }
    printf("\n");
}
