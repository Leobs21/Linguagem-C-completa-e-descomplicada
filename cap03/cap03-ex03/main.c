#include <stdio.h>
#include <stdlib.h>
//Fa�a um programa que leia tr�s valores inteiros e mostre sua soma
int main(){
    int x,y,z;
    printf("Digite 3 numeros inteiros: ");
    scanf("%d%d%d", &x,&y,&z);
    printf("A soma desses numeros: %d\n", x + y + z);
    system("pause");
    return 0;
}
