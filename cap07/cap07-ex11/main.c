#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
// Escreva um programa que leia uma string do teclado e converta todos os seus caracteres em minúscula.
// Dica: some 32 dos caracteres cujo código ASCII está entre 65 e 90.

int main()
{
    char str1[100];
    char str2[100];

    setbuf(stdin,NULL);

    printf("Digite uma string e converta seus caracteres para MAIUSCULAS.\n");
    printf("Digite uma string qualquer em MAIUSCULAS: \n");
    printf("\n");
    gets(str1);

    for(int i=0; str1[i] !='\0' ;i++){
        int ascii = str1[i];
        if(ascii >= 65 && ascii <= 90){
            str2[i] = str1[i] + 32;
        }else{
            str2[i] = str1[i];
        }
    }
    str2[strlen(str1)] = '\0';

    printf("\nA string digitada em MINUSCULAS: \n");
    printf("\n");
    printf("%s\n",str2);
    printf("\n");

    system("pause");
    return 0;
}
