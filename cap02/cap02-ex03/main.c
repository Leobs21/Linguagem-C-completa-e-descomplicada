#include <stdio.h>
#include <stdlib.h>
//Escreva um programa que leia um número inteiro e depois imprima a mensagem
//“Valor lido:”, seguido do valor inteiro. Use apenas um comando printf()
int main(){
    int x;
    printf("Digite um numero inteiro: ");
    scanf("%d", &x);
    printf("Valor lido: %d\n", x);
    system("pause");
    return 0;
}
