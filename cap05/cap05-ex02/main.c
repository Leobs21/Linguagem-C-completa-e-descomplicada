#include <stdio.h>
#include <stdlib.h>
//Fa�a um programa que leia um n�mero inteiro positivo N e imprima todos os
//n�meros naturais de 0 at� N em ordem decrescente.
int main(){
    int i, n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    //i = 0; testado em while
    for (i = 0; n > i; n--){
        printf("%d\n", n);
    }
    system("pause");
    return 0;
}
