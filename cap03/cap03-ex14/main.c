#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
//Fa�a um programa que converta uma letra mai�scula em letra min�scula. Use a
//tabela ASCII para isso.
int main(){
    char ch, c;
    printf("Digite um caractere em maiscula (A-Z): ");
    ch = getchar();
    c = ch + 32;
    printf("Caractere minusculo: %c\n", c);
    system("pause");
    return 0;
}
