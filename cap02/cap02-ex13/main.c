#include <stdio.h>
#include <stdlib.h>
//Fa�a um programa que leia um caractere do tipo char e depois o imprima entre
//aspas duplas. Assim, se o caractere lido for a letra A, dever� ser impresso �A�.
int main(){
    char letra;
    printf("Digite uma letra qualquer: ");
    scanf("%c", &letra);
    printf("A letra digitada foi: \"%c\"\n", letra);
    system("pause");
    return 0;
}
