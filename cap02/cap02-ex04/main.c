#include <stdio.h>
#include <stdlib.h>
//faça um programa que leia um número inteiro e depois o imprima
//usando o operador “%f”. Veja o que aconteceu.
int main(){
    int x;
    printf("Digite um numero inteiro: ");
    scanf("%d", &x);
    printf("Valor lido: %f\n", x);
    system("pause");
    return 0;
}
