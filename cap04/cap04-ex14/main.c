#include <stdio.h>
#include <stdlib.h>
//Faça um programa para verificar se determinado número inteiro lido é divisível
//por 3 ou 5, mas não simultaneamente pelos dois
int main(){
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    if (num % 3 == 0 || num % 5 == 0)
        printf("O numero informado e divisivel por 3 ou 5.  Valor: %d\n", num);
    else
        printf("O numero informado nao e divisivel por 3 ou 5.  Valor: %d\n", num);
    system("pause");
    return 0;
}
