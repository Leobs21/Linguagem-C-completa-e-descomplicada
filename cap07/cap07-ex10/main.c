#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
// Escreva um programa que leia uma string do teclado e converta todos os seus caracteres em maiúscula.
// Dica: subtraia 32 dos caracteres cujo código ASCII está entre 97 e 122.
int main()
{
    char str1[100];
    char str2[100];

    setbuf(stdin,NULL);

    printf("Digite uma string e converta seus caracteres para MINUSCULA.\n");
    printf("Digite uma string qualquer em minuscula: \n");
    printf("\n");
    gets(str1);

    for(int i=0; str1[i] !='\0' ;i++){
        int ascii = str1[i];
        if(ascii >= 97 && ascii <= 122){
            str2[i] = str1[i] - 32;
        }else{
            str2[i] = str1[i];
        }
    }
    str2[strlen(str1)] = '\0';

    printf("\nA string digitada em MAIUSCULA: \n");
    printf("\n");
    printf("%s\n",str2);
    printf("\n");

    system("pause");
    return 0;
}
