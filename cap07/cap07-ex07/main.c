#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Faça um programa que leia uma string e imprima uma mensagem dizendo se ela é um palíndromo ou não.
// Um palíndromo é uma palavra que tem a propriedade de poder ser lida tanto da direita para a esquerda como da esquerda para a direita.
// Exemplos: ovo, arara, rever, asa, osso etc.

int main()
{
    char str[100];
    setbuf(stdin,NULL);

    printf("Digite uma string e verifique se e um palindromo ou nao.\n");
    printf("Digite uma string qualquer: ");
    fgets(str,100,stdin);
    int charCount = strlen(str);
    if(str[0] == str[charCount-2] && str[1] == str[charCount-3]){
        printf("E um Palindromo\n");
    } else{
        printf("Nao e um palindromo\n");
    }
  //  system("pause");
    return 0;
}
