#include <stdio.h>
#include <stdlib.h>
//Fa�a um programa que leia dois n�meros inteiros e depois os imprima na ordem
//inversa em que eles foram lidos.
int main(){
    int x,y;
    printf("---Digite dois numeros inteiros--\n");
    printf("Digite o primeiro numero: ");
    scanf("%d", &x);
    printf("Digite o segundo numero: ");
    scanf("%d", &y);
    printf("Valores digitados na ordem inversa: %d %d\n", y, x);
    system("pause");
    return 0;
}
