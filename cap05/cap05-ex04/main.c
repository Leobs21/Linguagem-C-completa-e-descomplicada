#include <stdio.h>
#include <stdlib.h>
//Faça um programa que determine e mostre os cinco primeiros múltiplos de 3
//considerando números maiores que 0
int main(){
    int i,n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    i = 0;
    while(i < n){
        i = i + 3;
        printf("%d\n", i);
    }
    system("pause");
    return 0;
}
